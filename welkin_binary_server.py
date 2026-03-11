# -*- coding: utf-8 -*-
#!/usr/bin/env python3
"""Binary protocol mock server for the original Welkin client.

Implemented:
- `0001` / `1001` handshake with RSA key exchange
- framed stream packets (length header + checksum)
- channel symmetric encryption/decryption via Windows CryptoAPI
- login request `10/10000`
- gate character-list request `13/13000`
- gate character-online request `13/13004`
- gate quick-suite request `14/14004`
- gate quick-suite save request `14/14005`
- gate character-exploit request `14/14010`
- gate world/lobby request set:
  - `17/17006` battle map id list
  - `17/17008` battle map info
  - `17/17012` entry list
  - `17/17068` battle points
  - `18/18000` apply into game
  - `18/18003` query queue position
  - `18/18004` cancel queue
  - `18/18021` battle map status
- game request/notify set:
  - generic request ack passthrough (result=0)
  - `9/2012` game-connect success notify/ack (channel_id + direct_token)
  - `19/4050` battle initialize notify/ack (map_id + map_name)
  - `19/5331` reborn location list
  - `19/5330` select reborn location
  - `9/3050` / `9/3051`, `9/2001`, `9/9001` time-sync + ping
"""

from __future__ import annotations

import argparse
import asyncio
import ctypes
import ipaddress
import random
import secrets
import struct
import time
from dataclasses import dataclass, field
from typing import Optional


MAX_FRAME_LENGTH = 4 * 1024 * 1024
MAX_HANDSHAKE_LENGTH = 1024 * 1024
DEFAULT_HANDSHAKE_MAGIC = b"0001"
ALT_GAME_HANDSHAKE_MAGIC = b"1001"

# CryptoAPI constants
PROV_RSA_FULL = 1
CRYPT_VERIFYCONTEXT = 0xF0000000
CRYPT_EXPORTABLE = 0x00000001

CALG_MD5 = 0x00008003
ALG_DEFAULT = 26113  # 0x6601
ALG_24 = 26115
ALG_16 = 26121
ALG_128 = 26126
ALG_192 = 26127
ALG_256 = 26128


def map_alg_id(key_flag: int) -> int:
    if key_flag == 24:
        return ALG_24
    if key_flag == 16:
        return ALG_16
    if key_flag == 128:
        return ALG_128
    if key_flag == 192:
        return ALG_192
    if key_flag == 256:
        return ALG_256
    return ALG_DEFAULT


advapi32 = ctypes.WinDLL("advapi32", use_last_error=True)

HCRYPTPROV = ctypes.c_void_p
HCRYPTKEY = ctypes.c_void_p
HCRYPTHASH = ctypes.c_void_p

CryptAcquireContextA = advapi32.CryptAcquireContextA
CryptAcquireContextA.argtypes = [
    ctypes.POINTER(HCRYPTPROV),
    ctypes.c_char_p,
    ctypes.c_char_p,
    ctypes.c_uint32,
    ctypes.c_uint32,
]
CryptAcquireContextA.restype = ctypes.c_int

CryptReleaseContext = advapi32.CryptReleaseContext
CryptReleaseContext.argtypes = [HCRYPTPROV, ctypes.c_uint32]
CryptReleaseContext.restype = ctypes.c_int

CryptImportKey = advapi32.CryptImportKey
CryptImportKey.argtypes = [
    HCRYPTPROV,
    ctypes.POINTER(ctypes.c_ubyte),
    ctypes.c_uint32,
    HCRYPTKEY,
    ctypes.c_uint32,
    ctypes.POINTER(HCRYPTKEY),
]
CryptImportKey.restype = ctypes.c_int

CryptDestroyKey = advapi32.CryptDestroyKey
CryptDestroyKey.argtypes = [HCRYPTKEY]
CryptDestroyKey.restype = ctypes.c_int

CryptCreateHash = advapi32.CryptCreateHash
CryptCreateHash.argtypes = [
    HCRYPTPROV,
    ctypes.c_uint32,
    HCRYPTKEY,
    ctypes.c_uint32,
    ctypes.POINTER(HCRYPTHASH),
]
CryptCreateHash.restype = ctypes.c_int

CryptHashData = advapi32.CryptHashData
CryptHashData.argtypes = [
    HCRYPTHASH,
    ctypes.POINTER(ctypes.c_ubyte),
    ctypes.c_uint32,
    ctypes.c_uint32,
]
CryptHashData.restype = ctypes.c_int

CryptDeriveKey = advapi32.CryptDeriveKey
CryptDeriveKey.argtypes = [
    HCRYPTPROV,
    ctypes.c_uint32,
    HCRYPTHASH,
    ctypes.c_uint32,
    ctypes.POINTER(HCRYPTKEY),
]
CryptDeriveKey.restype = ctypes.c_int

CryptDestroyHash = advapi32.CryptDestroyHash
CryptDestroyHash.argtypes = [HCRYPTHASH]
CryptDestroyHash.restype = ctypes.c_int

CryptEncrypt = advapi32.CryptEncrypt
CryptEncrypt.argtypes = [
    HCRYPTKEY,
    HCRYPTHASH,
    ctypes.c_int,
    ctypes.c_uint32,
    ctypes.POINTER(ctypes.c_ubyte),
    ctypes.POINTER(ctypes.c_uint32),
    ctypes.c_uint32,
]
CryptEncrypt.restype = ctypes.c_int

CryptDecrypt = advapi32.CryptDecrypt
CryptDecrypt.argtypes = [
    HCRYPTKEY,
    HCRYPTHASH,
    ctypes.c_int,
    ctypes.c_uint32,
    ctypes.POINTER(ctypes.c_ubyte),
    ctypes.POINTER(ctypes.c_uint32),
]
CryptDecrypt.restype = ctypes.c_int


class CryptoError(RuntimeError):
    pass


def _check(ok: int, fn_name: str) -> None:
    if ok:
        return
    err = ctypes.get_last_error()
    raise CryptoError(f"{fn_name} failed with WinError={err}")


class CryptoProvider:
    def __init__(self) -> None:
        self.handle = HCRYPTPROV()
        ok = CryptAcquireContextA(
            ctypes.byref(self.handle),
            None,
            b"Microsoft Enhanced Cryptographic Provider v1.0",
            PROV_RSA_FULL,
            CRYPT_VERIFYCONTEXT,
        )
        _check(ok, "CryptAcquireContextA")

    def close(self) -> None:
        if self.handle:
            CryptReleaseContext(self.handle, 0)
            self.handle = HCRYPTPROV()

    def __enter__(self) -> "CryptoProvider":
        return self

    def __exit__(self, exc_type, exc, tb) -> None:
        self.close()

    def import_key(self, key_blob: bytes, flags: int = 0) -> HCRYPTKEY:
        key = HCRYPTKEY()
        blob = (ctypes.c_ubyte * len(key_blob)).from_buffer_copy(key_blob)
        ok = CryptImportKey(
            self.handle,
            blob,
            len(key_blob),
            HCRYPTKEY(),
            flags,
            ctypes.byref(key),
        )
        _check(ok, "CryptImportKey")
        return key

    def derive_key(self, secret: bytes, key_flag: int) -> HCRYPTKEY:
        h_hash = HCRYPTHASH()
        key = HCRYPTKEY()
        try:
            ok = CryptCreateHash(self.handle, CALG_MD5, HCRYPTKEY(), 0, ctypes.byref(h_hash))
            _check(ok, "CryptCreateHash")

            sec = (ctypes.c_ubyte * len(secret)).from_buffer_copy(secret)
            ok = CryptHashData(h_hash, sec, len(secret), 0)
            _check(ok, "CryptHashData")

            ok = CryptDeriveKey(self.handle, map_alg_id(key_flag), h_hash, 0, ctypes.byref(key))
            _check(ok, "CryptDeriveKey")
            return key
        finally:
            if h_hash:
                CryptDestroyHash(h_hash)


class ChannelCipher:
    def __init__(self, secret: bytes, key_flag: int) -> None:
        self.provider = CryptoProvider()
        self.enc_key = self.provider.derive_key(secret, key_flag)
        self.dec_key = self.provider.derive_key(secret, key_flag)

    def close(self) -> None:
        if self.enc_key:
            CryptDestroyKey(self.enc_key)
            self.enc_key = HCRYPTKEY()
        if self.dec_key:
            CryptDestroyKey(self.dec_key)
            self.dec_key = HCRYPTKEY()
        self.provider.close()

    def __enter__(self) -> "ChannelCipher":
        return self

    def __exit__(self, exc_type, exc, tb) -> None:
        self.close()

    def encrypt(self, data: bytes) -> bytes:
        capacity = len(data) + 64
        buf = (ctypes.c_ubyte * capacity)()
        if data:
            ctypes.memmove(buf, data, len(data))
        data_len = ctypes.c_uint32(len(data))
        ok = CryptEncrypt(
            self.enc_key,
            HCRYPTHASH(),
            1,
            0,
            buf,
            ctypes.byref(data_len),
            capacity,
        )
        _check(ok, "CryptEncrypt")
        return bytes(buf[: data_len.value])

    def decrypt(self, data: bytes) -> bytes:
        if not data:
            return b""
        buf = (ctypes.c_ubyte * len(data)).from_buffer_copy(data)
        data_len = ctypes.c_uint32(len(data))
        ok = CryptDecrypt(
            self.dec_key,
            HCRYPTHASH(),
            1,
            0,
            buf,
            ctypes.byref(data_len),
        )
        _check(ok, "CryptDecrypt")
        return bytes(buf[: data_len.value])


class NullCipher:
    """Pass-through cipher for non-RSA simple wait channels (magic=1001)."""

    def close(self) -> None:
        return

    def encrypt(self, data: bytes) -> bytes:
        return data

    def decrypt(self, data: bytes) -> bytes:
        return data


def rsa_encrypt_with_blob(pub_blob: bytes, plain: bytes) -> bytes:
    with CryptoProvider() as provider:
        key = provider.import_key(pub_blob, 0x40)
        try:
            capacity = 0xC8
            buf = (ctypes.c_ubyte * capacity)()
            ctypes.memmove(buf, plain, len(plain))
            data_len = ctypes.c_uint32(len(plain))
            ok = CryptEncrypt(
                key,
                HCRYPTHASH(),
                1,
                0,
                buf,
                ctypes.byref(data_len),
                capacity,
            )
            _check(ok, "CryptEncrypt(RSA)")
            return bytes(buf[: data_len.value])
        finally:
            if key:
                CryptDestroyKey(key)


def ip_to_u32(ip: str) -> int:
    return int(ipaddress.IPv4Address(ip))


def write_7bit_value(value: int) -> bytes:
    if value < 0:
        raise ValueError("7bit value must be >= 0")
    out = bytearray()
    v = value
    while v >= 0x80:
        out.append((v & 0x7F) | 0x80)
        v >>= 7
    out.append(v)
    return bytes(out)


def read_7bit_value(data: bytes, offset: int) -> tuple[int, int]:
    shift = 0
    value = 0
    pos = offset
    while True:
        if pos >= len(data):
            raise ValueError("unexpected end while reading 7bit length")
        b = data[pos]
        pos += 1
        value |= (b & 0x7F) << shift
        if (b & 0x80) == 0:
            return value, pos
        shift += 7
        if shift > 35:
            raise ValueError("invalid 7bit value")


def read_string(data: bytes, offset: int) -> tuple[str, int]:
    size, pos = read_7bit_value(data, offset)
    end = pos + size
    if end > len(data):
        raise ValueError("string exceeds payload")
    return data[pos:end].decode("utf-8", errors="strict"), end


def write_string(value: str) -> bytes:
    raw = value.encode("utf-8")
    return write_7bit_value(len(raw)) + raw


def checksum_value(header: bytes, payload: bytes, step: int) -> int:
    if step <= 0:
        step = 1
    total = 0
    for b in header:
        total = (total + b) & 0xFF
    for i in range(0, len(payload), step):
        total = (total + payload[i]) & 0xFF
    return total


def pack_stream_frame(
    payload: bytes,
    checksum_step: int,
    key_flag_bit: bool = True,
    *,
    checksum_enabled: bool = True,
) -> bytes:
    length = len(payload) + (1 if checksum_enabled else 0)
    if length < 0x100:
        size_code = 0x40
        len_bytes = struct.pack("<B", length)
    elif length < 0x10000:
        size_code = 0x80
        len_bytes = struct.pack("<H", length)
    else:
        size_code = 0xC0
        len_bytes = struct.pack("<I", length)

    first = size_code
    if key_flag_bit:
        first |= 0x02

    header = bytes([first]) + len_bytes
    if checksum_enabled:
        check = checksum_value(header, payload, checksum_step)
        return header + payload + bytes([check])
    return header + payload


async def read_stream_frame(
    reader: asyncio.StreamReader,
    checksum_step: int,
    *,
    learn_checksum_step: bool,
    checksum_enabled: bool = True,
) -> tuple[bytes, int]:
    first = await reader.readexactly(1)
    head = first[0]
    mode = head & 0xC0

    if mode == 0x40:
        len_size = 1
    elif mode == 0x80:
        len_size = 2
    elif mode == 0xC0:
        len_size = 4
    else:
        raise ValueError(f"invalid stream head mode: 0x{mode:02X}")

    len_bytes = await reader.readexactly(len_size)
    if len_size == 1:
        length = len_bytes[0]
    elif len_size == 2:
        length = struct.unpack_from("<H", len_bytes, 0)[0]
    else:
        length = struct.unpack_from("<I", len_bytes, 0)[0]

    if length <= 0 or length > MAX_FRAME_LENGTH:
        raise ValueError(f"invalid frame length: {length}")

    body = await reader.readexactly(length)
    if not checksum_enabled:
        return body, checksum_step

    if len(body) < 1:
        raise ValueError("frame too short for checksum")

    payload = body[:-1]
    recv_check = body[-1]
    header = first + len_bytes

    if learn_checksum_step:
        matched = 0
        for step in range(1, 256):
            if checksum_value(header, payload, step) == recv_check:
                matched = step
                break
        if matched == 0:
            raise ValueError("checksum step auto-detect failed")
        return payload, matched

    expected = checksum_value(header, payload, checksum_step)
    if expected != recv_check:
        raise ValueError(f"checksum mismatch recv={recv_check} expect={expected}")
    return payload, checksum_step


async def read_exact_prefetched(
    reader: asyncio.StreamReader,
    prefetch: bytearray,
    size: int,
) -> bytes:
    if size <= 0:
        return b""
    if len(prefetch) >= size:
        out = bytes(prefetch[:size])
        del prefetch[:size]
        return out

    parts: list[bytes] = []
    if prefetch:
        parts.append(bytes(prefetch))
        size -= len(prefetch)
        prefetch.clear()
    parts.append(await reader.readexactly(size))
    return b"".join(parts)


async def read_stream_frame_prefetched(
    reader: asyncio.StreamReader,
    prefetch: bytearray,
    checksum_step: int,
    *,
    learn_checksum_step: bool,
    checksum_enabled: bool = True,
) -> tuple[bytes, int]:
    first = await read_exact_prefetched(reader, prefetch, 1)
    head = first[0]
    mode = head & 0xC0

    if mode == 0x40:
        len_size = 1
    elif mode == 0x80:
        len_size = 2
    elif mode == 0xC0:
        len_size = 4
    else:
        raise ValueError(f"invalid stream head mode: 0x{mode:02X}")

    len_bytes = await read_exact_prefetched(reader, prefetch, len_size)
    if len_size == 1:
        length = len_bytes[0]
    elif len_size == 2:
        length = struct.unpack_from("<H", len_bytes, 0)[0]
    else:
        length = struct.unpack_from("<I", len_bytes, 0)[0]

    if length <= 0 or length > MAX_FRAME_LENGTH:
        raise ValueError(f"invalid frame length: {length}")

    body = await read_exact_prefetched(reader, prefetch, length)
    if not checksum_enabled:
        return body, checksum_step

    if len(body) < 1:
        raise ValueError("frame too short for checksum")

    payload = body[:-1]
    recv_check = body[-1]
    header = first + len_bytes

    if learn_checksum_step:
        matched = 0
        for step in range(1, 256):
            if checksum_value(header, payload, step) == recv_check:
                matched = step
                break
        if matched == 0:
            raise ValueError("checksum step auto-detect failed")
        return payload, matched

    expected = checksum_value(header, payload, checksum_step)
    if expected != recv_check:
        raise ValueError(f"checksum mismatch recv={recv_check} expect={expected}")
    return payload, checksum_step


@dataclass
class ParsedMessage:
    control: int
    catalog: int
    mtype: int
    token: int
    result: Optional[int]
    multi_id: Optional[int]
    body: bytes


@dataclass(frozen=True)
class MockCharacter:
    char_id: int
    name: str
    char_type: int
    level: int
    camp: int
    exploit: int = 0


@dataclass(frozen=True)
class MockEntryPoint:
    entry_id: int
    title: str
    desc: str
    camp: int
    world_x: float
    world_y: float


@dataclass(frozen=True)
class MockRebornPoint:
    reborn_func_id: int
    # Mirrors the second int32 inside 19/5331. AIRobotRebornPointManager compares
    # it against [Game.AIUser] AIUserRebornPointFunc, which falls back to 0 in
    # the current retail client config when the key is absent.
    reborn_match_id: int
    # Server-side helper used to choose the spawn point from the selected entry.
    selector_id: int
    ui_x: float
    ui_y: float
    spawn_x: float
    spawn_y: float
    spawn_z: float


@dataclass(frozen=True)
class MockBattlePoint:
    world_x: float
    world_y: float
    point_type: int


@dataclass(frozen=True)
class MockBattleField:
    map_id: int
    name: str
    label: str
    texture_name: str
    scene_name: str
    map_kind: int
    world_x: int
    world_y: int
    map_pixel_w: int
    map_pixel_h: int
    range_x: float
    range_mid: float
    range_y: float
    entries: tuple[MockEntryPoint, ...]
    reborn_points: tuple[MockRebornPoint, ...]
    battle_points: tuple[MockBattlePoint, ...]
    status_total: int
    status_by_nation: tuple[tuple[int, int], ...]


@dataclass(frozen=True)
class ApplyIntoGameState:
    multi_id: int
    actor_id: int
    map_id: int
    mode_or_index: int
    entry_token: str
    entry_id: int
    channel_id: int
    game_ip_u32: int
    game_port: int
    direct_token: int


@dataclass(frozen=True)
class MockRobotRuntime:
    actor_id: int
    map_id: int
    robot_id: int
    core_object_id: int
    body_object_id: int
    armor_object_id: int
    function_object_id: int
    position: tuple[float, float, float]
    rotation: tuple[float, float, float]


ROBOT_BASE_FLYWEIGHT_ID = 302000
ROBOT_CORE_FLYWEIGHT_ID = 202001
# map_load_message_body_formats.md §4.5.3:
#   RobotBody=202310, RobotArmor=202311, RobotCore=202001
ROBOT_BODY_FLYWEIGHT_ID = 202310
ROBOT_ARMOR_FLYWEIGHT_ID = 202311
ROBOT_POWER_FUNCTION_ID = 512001
DEFAULT_ROBOT_POSITION = (1000.0, 0.0, 1000.0)
DEFAULT_ROBOT_ROTATION = (0.0, 0.0, 1.0)
# Keep runtime world-object ids in a separate range from character ids.
# If robot_id collides with char_id, 19/3100 can resolve the wrong object type
# and the local control/camera handoff never closes.
ROBOT_WORLD_OBJECT_ID_BASE = 0x00100000
POST_BATTLE_RUNTIME_MESSAGE_MODE = "push"
# `19/5331/5330` is still only partially closed by static analysis. Keep the
# actor/control chain enabled while iterating on the remaining 5001 avatar tail
# and reborn/camera handoff details.
# 19/3001 creates a plain Character on the game side. The local player is
# already created as LocalCharacter during gate 13/13004; replaying 3001 in
# battle can rebind the same char_id to a non-local Character and break the
# later 5001/5109 local-control chain.
POST_BATTLE_RUNTIME_SEND_ACTOR_BIRTH = False
# Keep 3040 disabled for now. If it creates a non-local Character before 3041
# updates the gate-created LocalCharacter slot, the later 5001 attach path will
# bind the robot to the wrong character instance and camera ownership never flips.
POST_BATTLE_RUNTIME_SEND_CHARACTER_BASEINFO = False
POST_BATTLE_RUNTIME_SEND_CHARACTER_ONLINE = True
POST_BATTLE_RUNTIME_SEND_ATTACH_ROBOT = True
POST_BATTLE_RUNTIME_SEND_SET_CONTROL = True
# map_load_message_body_formats.md §4.6 has now pinned 19/3100 as:
#   [u32 robot_world_key][u32 control_char_id]
# so the old "actor-handle variants" probe is no longer needed by default.
POST_BATTLE_RUNTIME_CONTROL_ACTOR_VARIANTS = False
POST_BATTLE_RUNTIME_SEND_ROBOT_SURVIVAL = True
POST_BATTLE_RUNTIME_SEND_REBORN_SELECTION = True
# Match the documented client flow more closely:
#   map load -> reborn list refresh (5331) -> reborn confirm (5330) -> revive.
# The previous implementation fired 5330/5108/5109 too early, before the map UI
# and local-control chain had enough time to settle.
POST_BATTLE_RUNTIME_REBORN_LIST_DELAY = 0.20
POST_BATTLE_RUNTIME_REBORN_CONFIRM_DELAY = 1.10
POST_BATTLE_RUNTIME_REBORN_CONFIRM_REPLAY_DELAY = 0.35
# 19/5001 ends with a single byte that gates the extra local-avatar init branch
# inside GS_Object_Attach_Object_Observer::OnBegin.
POST_BATTLE_RUNTIME_ATTACH_AVATAR_FLAG = 1
# Re-send the control/reborn handoff after the first object chain settles.
# The current hypothesis is that the first 19/3100 can arrive before the local
# character has fully registered the attached robot in its internal set.
POST_BATTLE_RUNTIME_ENABLE_LATE_CONTROL_REPLAY = True
POST_BATTLE_RUNTIME_LATE_CONTROL_DELAY = 0.8
POST_BATTLE_RUNTIME_LATE_REBORN_DELAY = 0.2
# AIRobotRebornPointManager matches 19/5331.second_u32 against
# [Game.AIUser] AIUserRebornPointFunc. The current client INI does not define
# that key, so ConfigFile::GetInt resolves it to 0.
AIUSER_REBORN_POINT_FUNC_ID = 0
IDENTITY_MATRIX_4X4 = struct.pack(
    "<16f",
    1.0,
    0.0,
    0.0,
    0.0,
    0.0,
    1.0,
    0.0,
    0.0,
    0.0,
    0.0,
    1.0,
    0.0,
    0.0,
    0.0,
    0.0,
    1.0,
)


CAMP_LABELS = {
    1: "F",
    2: "G",
    4: "M",
    8: "W",
}


def parse_message(data: bytes) -> ParsedMessage:
    if len(data) < 4:
        raise ValueError("message too short")

    control = data[0]
    catalog = data[1]
    pos = 2

    if (control & 0x80) == 0:
        raise ValueError("message without protocol type flag is unsupported")

    if pos + 2 > len(data):
        raise ValueError("message missing type")
    mtype = struct.unpack_from("<H", data, pos)[0]
    pos += 2

    token = 0xFFFFFFFF
    result: Optional[int] = None
    multi_id: Optional[int] = None

    if control & 0x04:
        if pos + 4 > len(data):
            raise ValueError("request message missing token")
        token = struct.unpack_from("<I", data, pos)[0]
        pos += 4
    elif control & 0x08:
        if pos + 4 > len(data):
            raise ValueError("ack message missing token")
        token = struct.unpack_from("<I", data, pos)[0]
        pos += 4
        if pos + 2 > len(data):
            raise ValueError("ack message missing result")
        result = struct.unpack_from("<H", data, pos)[0]
        pos += 2

    if (control & 0x20) or (control & 0x40):
        if pos + 4 > len(data):
            raise ValueError("message missing multi_id")
        multi_id = struct.unpack_from("<I", data, pos)[0]
        pos += 4

    return ParsedMessage(
        control=control,
        catalog=catalog,
        mtype=mtype,
        token=token,
        result=result,
        multi_id=multi_id,
        body=data[pos:],
    )


def build_ack_message(
    catalog: int,
    mtype: int,
    token: int,
    result: int,
    body: bytes,
    *,
    multi_id: Optional[int] = None,
) -> bytes:
    control = 0x80 | 0x08
    parts = [
        bytes([control, catalog & 0xFF]),
        struct.pack("<H", mtype & 0xFFFF),
        struct.pack("<I", token & 0xFFFFFFFF),
        struct.pack("<H", result & 0xFFFF),
    ]
    if multi_id is not None:
        control |= 0x20
        parts[0] = bytes([control, catalog & 0xFF])
        parts.append(struct.pack("<I", multi_id & 0xFFFFFFFF))
    parts.append(body)
    return b"".join(parts)


def build_push_message(
    catalog: int,
    mtype: int,
    token: int,
    body: bytes,
    *,
    multi_id: Optional[int] = None,
) -> bytes:
    control = 0x80 | 0x04
    parts = [
        bytes([control, catalog & 0xFF]),
        struct.pack("<H", mtype & 0xFFFF),
        struct.pack("<I", token & 0xFFFFFFFF),
    ]
    if multi_id is not None:
        control |= 0x20
        parts[0] = bytes([control, catalog & 0xFF])
        parts.append(struct.pack("<I", multi_id & 0xFFFFFFFF))
    parts.append(body)
    return b"".join(parts)


def build_notify_message(
    catalog: int,
    mtype: int,
    body: bytes,
    *,
    multi_id: Optional[int] = None,
) -> bytes:
    control = 0x80
    parts = [
        bytes([control, catalog & 0xFF]),
        struct.pack("<H", mtype & 0xFFFF),
    ]
    if multi_id is not None:
        control |= 0x20
        parts[0] = bytes([control, catalog & 0xFF])
        parts.append(struct.pack("<I", multi_id & 0xFFFFFFFF))
    parts.append(body)
    return b"".join(parts)


def parse_login_request_body(body: bytes) -> tuple[int, str, str]:
    if len(body) < 4:
        raise ValueError("login body too short")
    login_server_id = struct.unpack_from("<I", body, 0)[0]
    pos = 4
    account, pos = read_string(body, pos)
    password, pos = read_string(body, pos)
    return login_server_id, account, password


def build_login_success_body(gate_id: int, gate_ip_u32: int, gate_port: int, account: str) -> bytes:
    return (
        struct.pack("<I", gate_id & 0xFFFFFFFF)
        + struct.pack("<I", gate_ip_u32 & 0xFFFFFFFF)
        + struct.pack("<H", gate_port & 0xFFFF)
        + write_string(account)
    )


def build_world_list_body(battlefields: list[MockBattleField]) -> bytes:
    parts: list[bytes] = [struct.pack("<I", len(battlefields))]
    for field in battlefields:
        parts.append(struct.pack("<I", field.map_id & 0xFFFFFFFF))
    return b"".join(parts)


def parse_character_online_request_body(body: bytes) -> int:
    if len(body) < 4:
        raise ValueError("character online body too short")
    return struct.unpack_from("<I", body, 0)[0]


def parse_u32_request_body(body: bytes, *, field_name: str) -> int:
    if len(body) < 4:
        raise ValueError(f"{field_name} body too short")
    return struct.unpack_from("<I", body, 0)[0]


def build_character_list_body(characters: list[MockCharacter]) -> bytes:
    parts: list[bytes] = [struct.pack("<I", len(characters))]
    for character in characters:
        parts.append(struct.pack("<I", character.char_id & 0xFFFFFFFF))
        parts.append(write_string(character.name))
        parts.append(struct.pack("<B", character.char_type & 0xFF))
        parts.append(struct.pack("<I", character.level & 0xFFFFFFFF))
        parts.append(struct.pack("<B", character.camp & 0xFF))
    return b"".join(parts)


def build_character_profile_body(character: MockCharacter) -> bytes:
    # Matches the client-side parser sequence in sub_101E0510, which is reused
    # by gate 13/13004 and the game-side 19/3041 profile updates.
    return (
        struct.pack("<I", character.char_id & 0xFFFFFFFF)
        + struct.pack("<B", character.camp & 0xFF)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<B", 101)  # client checks [101..110] for lobby-ready character
        + write_string(character.name)
        + write_string("")
        + struct.pack("<B", character.camp & 0xFF)
        + struct.pack("<B", character.char_type & 0xFF)
        + struct.pack("<I", character.level & 0xFFFFFFFF)
        + write_string("")
        + write_string("")
        + write_string("")
        + struct.pack("<I", 0)
    )


def build_character_online_body(character: MockCharacter) -> bytes:
    return build_character_profile_body(character)


def build_quick_suite_list_body_empty() -> bytes:
    return struct.pack("<I", 0)


def build_character_exploit_body(exploit: int) -> bytes:
    return struct.pack("<I", exploit & 0xFFFFFFFF)


def parse_entry_list_request_body(body: bytes) -> tuple[int, int]:
    if len(body) < 4:
        raise ValueError("entry-list request body too short")
    map_id = struct.unpack_from("<I", body, 0)[0]
    camp = body[4] if len(body) >= 5 else 0
    return map_id, camp


def parse_apply_into_game_request_body(body: bytes) -> tuple[int, int, int, str]:
    if len(body) < 9:
        raise ValueError("apply-into-game request body too short")
    # Wire layout from sub_102A6570:
    #   u32(field1) + u32(map_id) + u8(mode/index) + string(entry token)
    field1_u32 = struct.unpack_from("<I", body, 0)[0]
    selected_map_id = struct.unpack_from("<I", body, 4)[0]
    mode_or_index = body[8]
    entry_token = ""
    if len(body) > 9:
        try:
            entry_token, _ = read_string(body, 9)
        except Exception:
            entry_token = ""
    return field1_u32, selected_map_id, mode_or_index, entry_token


def build_map_info_body(field: MockBattleField) -> bytes:
    # 17008 wire order follows sub_1021D970 parsing:
    # bytes[56..60], then field18, field19, field16, field17.
    parts: list[bytes] = [
        struct.pack("<I", field.map_id & 0xFFFFFFFF),
        write_string(field.name),
        write_string(field.label),
        struct.pack("<B", 0),  # flag56
        struct.pack("<B", field.map_kind & 0xFF),  # flag57
        struct.pack("<B", 0),  # flag58
        struct.pack("<B", 0),  # flag59
        struct.pack("<B", 0),  # field15 low-byte (stored via HIBYTE(temp) path in decompile)
        struct.pack("<I", field.map_pixel_w & 0xFFFFFFFF),  # field18
        struct.pack("<I", field.map_pixel_h & 0xFFFFFFFF),  # field19
        struct.pack("<I", field.world_x & 0xFFFFFFFF),  # field16
        struct.pack("<I", field.world_y & 0xFFFFFFFF),  # field17
        write_string(field.texture_name),  # field20(string @ +80)
        struct.pack("<f", float(field.range_x)),  # field27
        struct.pack("<f", float(field.range_mid)),  # field28
        struct.pack("<f", float(field.range_y)),  # field29
    ]
    return b"".join(parts)


def build_map_status_body(total: int, status_by_nation: tuple[tuple[int, int], ...]) -> bytes:
    parts: list[bytes] = [
        struct.pack("<I", total & 0xFFFFFFFF),
        struct.pack("<I", len(status_by_nation) & 0xFFFFFFFF),
    ]
    for nation, value in status_by_nation:
        parts.append(struct.pack("<B", nation & 0xFF))
        parts.append(struct.pack("<I", value & 0xFFFFFFFF))
    return b"".join(parts)


def build_entry_list_body(entries: list[MockEntryPoint], camp: int) -> bytes:
    filtered = [entry for entry in entries if entry.camp == camp]
    if not filtered:
        filtered = list(entries)
    parts: list[bytes] = [struct.pack("<I", len(filtered) & 0xFFFFFFFF)]
    for entry in filtered:
        parts.extend(
            [
                struct.pack("<I", entry.entry_id & 0xFFFFFFFF),
                write_string(entry.title),
                write_string(entry.desc),
                struct.pack("<I", 1),  # enabled int
                struct.pack("<B", 0),  # reserved
                struct.pack("<B", 1),  # active flag (checked at entry+73)
                struct.pack("<B", entry.camp & 0xFF),
                struct.pack("<I", 0),
                struct.pack("<I", 0),
                struct.pack("<f", float(entry.world_x)),
                struct.pack("<f", float(entry.world_y)),
            ]
        )
    return b"".join(parts)


def build_battle_point_body(points: list[MockBattlePoint]) -> bytes:
    parts: list[bytes] = [struct.pack("<I", len(points) & 0xFFFFFFFF)]
    for point in points:
        parts.extend(
            [
                struct.pack("<f", float(point.world_x)),
                struct.pack("<f", float(point.world_y)),
                struct.pack("<B", point.point_type & 0xFF),
            ]
        )
    return b"".join(parts)


def build_reborn_loc_list_body(points: list[MockRebornPoint]) -> bytes:
    parts: list[bytes] = [struct.pack("<I", len(points) & 0xFFFFFFFF)]
    for point in points:
        parts.extend(
            [
                struct.pack("<I", point.reborn_func_id & 0xFFFFFFFF),
                struct.pack("<I", point.reborn_match_id & 0xFFFFFFFF),
                struct.pack("<f", float(point.ui_x)),
                struct.pack("<f", float(point.ui_y)),
            ]
        )
    return b"".join(parts)


def build_select_reborn_loc_body(position: tuple[float, float, float], reborn_func_id: int) -> bytes:
    return struct.pack(
        "<3fI",
        float(position[0]),
        float(position[1]),
        float(position[2]),
        reborn_func_id & 0xFFFFFFFF,
    )


def build_apply_into_game_body(channel_id: int, game_ip_u32: int, game_port: int, direct_token: int) -> bytes:
    return (
        struct.pack("<I", channel_id & 0xFFFFFFFF)
        + struct.pack("<I", game_ip_u32 & 0xFFFFFFFF)
        + struct.pack("<H", game_port & 0xFFFF)
        + struct.pack("<I", direct_token & 0xFFFFFFFF)
    )


def build_battle_initialize_body(
    map_id: int,
    map_name: str,
    *,
    event_time: float = 0.0,
    order_key: int = 0,
) -> bytes:
    # GameDefaultMessageHandler consumes an f32 + u32 wrapper before copying the
    # remaining 19/4050 payload into Event::GetStream().
    return (
        struct.pack("<fI", float(event_time), order_key & 0xFFFFFFFF)
        + struct.pack("<I", map_id & 0xFFFFFFFF)
        + write_string(map_name)
    )


def build_game_connect_body(result: int, channel_id: int, direct_token: int) -> bytes:
    # game_service.py compatible 9/2012 body:
    # [i32 result][i32 channel_id][i32 direct_token]
    return struct.pack("<iii", int(result), int(channel_id), int(direct_token))


def build_queue_position_body(position: int) -> bytes:
    return struct.pack("<I", position & 0xFFFFFFFF)


def wrap_catalog_push_body(
    body: bytes,
    *,
    delay_seconds: float = 0.0,
    dedup_nonce: int = 0,
) -> bytes:
    # map_load_message_body_formats.md §1.1:
    # catalog 9/19 S2C push bodies carry an extra [f32 delay][u32 dedup] header.
    return struct.pack("<fI", float(delay_seconds), dedup_nonce & 0xFFFFFFFF) + body


def build_world_object_snapshot_body(
    *,
    actor_id: int,
    position: tuple[float, float, float],
) -> bytes:
    return (
        struct.pack("<3f", *position)
        + IDENTITY_MATRIX_4X4
        + struct.pack("<I", actor_id & 0xFFFFFFFF)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<B", 0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0xFFFFFFFF)
    )


def build_function_power_snapshot_body() -> bytes:
    return struct.pack(
        "<B6dBBB",
        0,
        0.0,
        0.0,
        0.0,
        0.0,
        0.0,
        0.0,
        0,
        0,
        0,
    )


def build_robot_snapshot_body(runtime: MockRobotRuntime) -> bytes:
    world_snapshot = build_world_object_snapshot_body(
        actor_id=runtime.actor_id,
        position=runtime.position,
    )
    part_snapshot = build_world_object_snapshot_body(
        actor_id=runtime.actor_id,
        position=runtime.position,
    )
    return (
        world_snapshot
        + struct.pack("<I", 3)
        # Robot::AddSystemPart maps the first three entries to:
        #   +50 -> RobotBody, +51 -> RobotArmor, +52 -> RobotCore
        + struct.pack("<II", ROBOT_BODY_FLYWEIGHT_ID, runtime.body_object_id)
        + part_snapshot
        + struct.pack("<II", ROBOT_ARMOR_FLYWEIGHT_ID, runtime.armor_object_id)
        + part_snapshot
        + struct.pack("<II", ROBOT_CORE_FLYWEIGHT_ID, runtime.core_object_id)
        + part_snapshot
        + struct.pack("<II", ROBOT_POWER_FUNCTION_ID, runtime.function_object_id)
        + build_function_power_snapshot_body()
        + struct.pack("<I", 0xFFFFFFFF)
        + struct.pack("<I", 0xFFFFFFFF)
        + struct.pack("<I", 0)
        + struct.pack("<f", 0.0)
        + struct.pack("<f", 0.0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<f", 0.0)
        + struct.pack("<I", 0)
        + struct.pack("<3f", *runtime.position)
        + struct.pack("<3f", *runtime.rotation)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
        + struct.pack("<I", 0)
    )


def build_equip_avatar_snapshot_body() -> bytes:
    # Equip::Equip defaults used by WriteSnapshotToAvatar:
    #   durability=100, scale=1, current/owner/link ids=-1, extra_u32=0
    return struct.pack(
        "<ffIIII",
        100.0,
        1.0,
        0xFFFFFFFF,
        0xFFFFFFFF,
        0xFFFFFFFF,
        0,
    )


def build_robot_armor_avatar_snapshot_body() -> bytes:
    return struct.pack("<II", 0, 0)


def build_robot_avatar_snapshot_body() -> bytes:
    # 19/5001 avatar_flag=1 enters Robot::WriteSnapshotToAvatar, which expects
    # an additional tail after the regular robot snapshot:
    #   robot-local head + body avatar + armor avatar + core avatar + float
    return (
        struct.pack("<IIfff", 0, 0, 0.0, 0.0, 0.0)
        + build_equip_avatar_snapshot_body()
        + build_robot_armor_avatar_snapshot_body()
        + build_equip_avatar_snapshot_body()
        + struct.pack("<f", 0.0)
    )


def build_attach_object_body(
    *,
    actor_id: int,
    flyweight_id: int,
    object_id: int,
    snapshot_body: bytes,
    avatar_flag: int = 0,
    avatar_snapshot_body: bytes = b"",
) -> bytes:
    return (
        struct.pack("<I", actor_id & 0xFFFFFFFF)
        + struct.pack("<I", flyweight_id & 0xFFFFFFFF)
        + struct.pack("<I", object_id & 0xFFFFFFFF)
        + snapshot_body
        + struct.pack("<B", avatar_flag & 0xFF)
        + avatar_snapshot_body
    )


def build_character_base_info_body(character: MockCharacter, entity_id: int) -> bytes:
    return (
        struct.pack("<I", character.char_id & 0xFFFFFFFF)
        + write_string(character.name)
        + struct.pack(
            "<IIIII",
            character.camp & 0xFFFFFFFF,
            character.char_type & 0xFFFFFFFF,
            character.level & 0xFFFFFFFF,
            character.exploit & 0xFFFFFFFF,
            entity_id & 0xFFFFFFFF,
        )
    )


def build_character_spawn_body(
    *,
    char_id: int,
    flyweight_id: int,
    world_key: int,
    snapshot_body: bytes,
    has_snapshot: bool = True,
) -> bytes:
    return (
        struct.pack("<I", char_id & 0xFFFFFFFF)
        + struct.pack("<I", flyweight_id & 0xFFFFFFFF)
        + struct.pack("<I", world_key & 0xFFFFFFFF)
        + struct.pack("<B", 1 if has_snapshot else 0)
        + (snapshot_body if has_snapshot else b"")
    )


def build_character_birth_body(actor_id: int) -> bytes:
    return struct.pack("<I", actor_id & 0xFFFFFFFF)


def build_set_control_body(robot_world_key: int, control_char_id: int) -> bytes:
    # map_load_message_body_formats.md §4.6:
    #   [u32 robot_world_key][u32 control_char_id]
    return struct.pack(
        "<II",
        robot_world_key & 0xFFFFFFFF,
        control_char_id & 0xFFFFFFFF,
    )


def build_robot_relive_body(
    robot_id: int,
    *,
    position: tuple[float, float, float],
    rotation: tuple[float, float, float],
) -> bytes:
    return (
        struct.pack("<I", robot_id & 0xFFFFFFFF)
        + struct.pack("<3f", *position)
        + struct.pack("<3f", *rotation)
    )


def build_robot_revived_body(robot_id: int) -> bytes:
    return struct.pack("<I", robot_id & 0xFFFFFFFF)


def build_mock_robot_runtime(
    actor_id: int,
    map_id: int,
    *,
    position: tuple[float, float, float] = DEFAULT_ROBOT_POSITION,
    rotation: tuple[float, float, float] = DEFAULT_ROBOT_ROTATION,
) -> MockRobotRuntime:
    # Reserve 16 ids per actor for robot + part/function sub-objects.
    actor_slot = actor_id & 0xFFFF
    base_object_id = (ROBOT_WORLD_OBJECT_ID_BASE + actor_slot * 16) & 0xFFFFFFFF
    return MockRobotRuntime(
        actor_id=actor_id,
        map_id=map_id,
        robot_id=base_object_id,
        core_object_id=base_object_id + 1,
        body_object_id=base_object_id + 2,
        armor_object_id=base_object_id + 3,
        function_object_id=base_object_id + 4,
        position=position,
        rotation=rotation,
    )


@dataclass
class ConnectionState:
    role: str
    reader: asyncio.StreamReader
    writer: asyncio.StreamWriter
    cipher: ChannelCipher | NullCipher
    checksum_step: int
    checksum_learned: bool
    checksum_enabled: bool = True
    handshake_magic: bytes = DEFAULT_HANDSHAKE_MAGIC
    simple_wait_mode: bool = False
    simple_cfg12: int = 0
    simple_cfg20: int = 0
    simple_first_payload: bytes = b""
    recv_prefetch: bytearray = field(default_factory=bytearray)


class WelkinBinaryServer:
    def __init__(self, login_host: str, login_port: int, gate_host: str, gate_port: int) -> None:
        self.login_host = login_host
        self.login_port = login_port
        self.gate_host = gate_host
        self.gate_port = gate_port

        self.accounts = {
            "admin": "123456",
            "test": "123456",
            "welkin": "welkin123",
        }
        self.characters = [
            MockCharacter(
                char_id=10001,
                name="WelkinR2",
                char_type=1,
                level=3,
                camp=8,
                exploit=1234,
            )
        ]

        self.battlefields: dict[int, MockBattleField] = {
            5002: MockBattleField(
                map_id=5002,
                name="HuShanGaoYuan",
                label="HuShanGaoYuan",
                texture_name="Maps\\Atlas\\BG04_map01.dds",
                scene_name="bg04.reb",
                map_kind=1,
                world_x=2092350,
                world_y=1858462,
                map_pixel_w=2048,
                map_pixel_h=2048,
                range_x=12000.0,
                range_mid=12000.0,
                range_y=12000.0,
                entries=(
                    MockEntryPoint(
                        entry_id=70002,
                        title="Entry-A",
                        desc="Mock Ruins Gate",
                        camp=8,
                        world_x=1000.0,
                        world_y=1000.0,
                    ),
                ),
                reborn_points=(
                    MockRebornPoint(
                        reborn_func_id=700102,
                        reborn_match_id=AIUSER_REBORN_POINT_FUNC_ID,
                        selector_id=70002,
                        ui_x=1000.0,
                        ui_y=1000.0,
                        spawn_x=1000.0,
                        spawn_y=0.0,
                        spawn_z=1000.0,
                    ),
                ),
                battle_points=(
                    MockBattlePoint(world_x=400.0, world_y=1100.0, point_type=1),
                    MockBattlePoint(world_x=1300.0, world_y=700.0, point_type=1),
                ),
                status_total=0,
                status_by_nation=((2, 18), (4, 16), (8, 14)),
            )
        }

        self.mock_game_host = "127.0.0.1"
        self.mock_game_port = 9010

        self.default_map_id = next(iter(self.battlefields.keys()), 0)
        self.last_apply_map_id = self.default_map_id
        self.last_lobby_map_id = self.default_map_id
        self.last_apply_state: Optional[ApplyIntoGameState] = None
        self.apply_states_by_channel_id: dict[int, ApplyIntoGameState] = {}
        self.apply_states_by_direct_token: dict[int, ApplyIntoGameState] = {}
        self.next_push_token = 10000
        self.next_game_default_order_key = 1

        self.next_gate_id = 6000
        self.next_game_channel_id = 100000
        self.next_direct_token = 500000

    async def run(self) -> None:
        login_srv = await asyncio.start_server(self.handle_login_client, self.login_host, self.login_port)
        gate_srv = await asyncio.start_server(self.handle_gate_client, self.gate_host, self.gate_port)
        game_srv = await asyncio.start_server(
            self.handle_game_client,
            self.mock_game_host,
            self.mock_game_port,
        )

        login_addr = ", ".join(str(s.getsockname()) for s in (login_srv.sockets or []))
        gate_addr = ", ".join(str(s.getsockname()) for s in (gate_srv.sockets or []))
        game_addr = ", ".join(str(s.getsockname()) for s in (game_srv.sockets or []))
        map_ids = sorted(self.battlefields.keys())
        print(f"[binary] maps configured: ids={map_ids} default_map_id={self.default_map_id}")
        print(f"[binary] login listening: {login_addr}")
        print(f"[binary] gate  listening: {gate_addr}")
        print(f"[binary] game  listening: {game_addr}")

        async with login_srv, gate_srv, game_srv:
            await asyncio.gather(
                login_srv.serve_forever(),
                gate_srv.serve_forever(),
                game_srv.serve_forever(),
            )

    async def do_handshake(self, role: str, reader: asyncio.StreamReader, writer: asyncio.StreamWriter) -> ConnectionState:
        magic = await reader.readexactly(4)
        allowed_magics = {DEFAULT_HANDSHAKE_MAGIC}
        if role == "game":
            allowed_magics.add(ALT_GAME_HANDSHAKE_MAGIC)
        if magic not in allowed_magics:
            raise ValueError(f"{role}: invalid handshake magic {magic!r}")

        if role == "game" and magic == ALT_GAME_HANDSHAKE_MAGIC:
            # Simple_Wait_Stream_Channel packet (no RSA exchange):
            #   "1001" + u32(payload_len) + [u32(1001), u32(cfg12), u32(cfg20), first_payload...]
            raw_len = await reader.readexactly(4)
            (payload_len,) = struct.unpack("<I", raw_len)
            if payload_len <= 0 or payload_len > MAX_HANDSHAKE_LENGTH:
                raise ValueError(f"{role}: invalid simple handshake payload length {payload_len}")
            payload = await reader.readexactly(payload_len)
            if len(payload) < 12:
                raise ValueError(f"{role}: simple handshake payload too short")

            step, cfg_12, cfg_20 = struct.unpack_from("<III", payload, 0)
            if step != 1001:
                raise ValueError(f"{role}: invalid simple handshake step {step}")
            first_payload = payload[12:]

            head_hex = first_payload[:24].hex(" ") if first_payload else ""
            print(
                f"[{role}] handshake request magic=1001 step={step} cfg12={cfg_12} cfg20={cfg_20} "
                f"first_len={len(first_payload)} first_head={head_hex}"
            )
            print(f"[{role}] handshake ok simple-wait mode")

            return ConnectionState(
                role=role,
                reader=reader,
                writer=writer,
                cipher=NullCipher(),
                # Simple_Wait channel disables stream checksum in current client path.
                checksum_step=cfg_20 & 0xFF,
                checksum_learned=True,
                checksum_enabled=False,
                handshake_magic=magic,
                simple_wait_mode=True,
                simple_cfg12=cfg_12,
                simple_cfg20=cfg_20,
                simple_first_payload=first_payload,
                # first_payload is delivered to on_new_channel callback context;
                # it is not a stream-frame prefix for subsequent recv loop.
                recv_prefetch=bytearray(),
            )

        raw_len = await reader.readexactly(4)
        (payload_len,) = struct.unpack("<I", raw_len)
        if payload_len <= 0 or payload_len > MAX_HANDSHAKE_LENGTH:
            raise ValueError(f"{role}: invalid handshake payload length {payload_len}")

        payload = await reader.readexactly(payload_len)
        if len(payload) < 16:
            raise ValueError(f"{role}: handshake payload too short")

        step, cfg_12, cfg_20, rsa_len = struct.unpack_from("<IIII", payload, 0)
        if step not in (1, 1001):
            raise ValueError(f"{role}: unsupported handshake step {step}")

        pos = 16
        if pos + rsa_len > len(payload):
            raise ValueError(f"{role}: invalid rsa blob length {rsa_len}")

        rsa_blob = payload[pos : pos + rsa_len]
        pos += rsa_len
        first_message = payload[pos:]

        print(
            f"[{role}] handshake request magic={magic.decode('ascii', errors='replace')} "
            f"step={step} cfg12={cfg_12} cfg20={cfg_20} "
            f"rsa_len={rsa_len} first_len={len(first_message)}"
        )

        key_flag = 5
        channel_id = random.randint(1, 32)
        session_key = bytes(secrets.choice(range(32, 127)) for _ in range(16))

        plain = struct.pack("<I", channel_id) + struct.pack("<H", key_flag) + session_key
        encrypted = rsa_encrypt_with_blob(rsa_blob, plain)

        # `1001` variant is observed on game connector; echo the same step value
        # so client-side parser stays on the same handshake branch.
        resp_step = step
        resp_payload = struct.pack("<I", 4 + len(encrypted)) + struct.pack("<I", resp_step) + encrypted
        # Reply with the same handshake magic variant as client request.
        writer.write(magic + resp_payload)
        await writer.drain()

        cipher = ChannelCipher(session_key, key_flag)

        print(
            f"[{role}] handshake ok channel={channel_id} key_flag={key_flag} "
            f"enc_len={len(encrypted)}"
        )

        return ConnectionState(
            role=role,
            reader=reader,
            writer=writer,
            cipher=cipher,
            # In this protocol family, stream checksum step tracks the negotiated
            # channel id. Auto-detect can be ambiguous on encrypted payloads.
            checksum_step=channel_id,
            checksum_learned=True,
            checksum_enabled=True,
            handshake_magic=magic,
            recv_prefetch=bytearray(),
        )

    async def recv_message(self, state: ConnectionState) -> ParsedMessage:
        encrypted_payload, step = await read_stream_frame_prefetched(
            state.reader,
            state.recv_prefetch,
            state.checksum_step,
            learn_checksum_step=not state.checksum_learned,
            checksum_enabled=state.checksum_enabled,
        )
        if not state.checksum_learned:
            state.checksum_step = step
            state.checksum_learned = True
            print(f"[{state.role}] checksum step detected: {step}")

        plain = state.cipher.decrypt(encrypted_payload)
        try:
            msg = parse_message(plain)
        except ValueError as exc:
            if state.simple_wait_mode:
                head = plain[:24].hex(" ")
                print(
                    f"[{state.role}] recv raw len={len(plain)} head={head} "
                    f"parse_error={exc}"
                )
                return ParsedMessage(
                    control=0,
                    catalog=0,
                    mtype=0,
                    token=0,
                    result=None,
                    multi_id=None,
                    body=plain,
                )
            raise
        print(
            f"[{state.role}] recv catalog={msg.catalog} type={msg.mtype} token={msg.token} "
            f"multi={msg.multi_id} body={len(msg.body)}"
        )
        return msg

    async def send_message(self, state: ConnectionState, payload: bytes) -> None:
        encrypted = state.cipher.encrypt(payload)
        frame = pack_stream_frame(
            encrypted,
            state.checksum_step,
            key_flag_bit=True,
            checksum_enabled=state.checksum_enabled,
        )
        state.writer.write(frame)
        await state.writer.drain()

    def alloc_push_token(self) -> int:
        token = self.next_push_token & 0xFFFFFFFF
        self.next_push_token = (self.next_push_token + 1) & 0xFFFFFFFF
        if self.next_push_token == 0:
            self.next_push_token = 1
        return token

    def alloc_game_channel_id(self) -> int:
        channel_id = self.next_game_channel_id & 0xFFFFFFFF
        self.next_game_channel_id = (self.next_game_channel_id + 1) & 0xFFFFFFFF
        if self.next_game_channel_id == 0:
            self.next_game_channel_id = 1
        return channel_id

    def alloc_direct_token(self) -> int:
        direct_token = self.next_direct_token & 0xFFFFFFFF
        self.next_direct_token = (self.next_direct_token + 1) & 0xFFFFFFFF
        if self.next_direct_token == 0:
            self.next_direct_token = 1
        return direct_token

    @staticmethod
    def body_head_hex(body: bytes, limit: int = 24) -> str:
        return body[:limit].hex(" ")

    def map_id_from_entry_id(self, entry_id: int) -> Optional[int]:
        if entry_id <= 0:
            return None
        for field in self.battlefields.values():
            for entry in field.entries:
                if entry.entry_id == entry_id:
                    return field.map_id
        return None

    def remember_lobby_map_id(self, map_id: int) -> None:
        if map_id in self.battlefields:
            self.last_lobby_map_id = map_id

    def resolve_gate_map_id_from_scene_name(self, requested_map_id: int) -> tuple[Optional[int], str]:
        if requested_map_id <= 0:
            return None, ""

        requested_bytes = bytearray(struct.pack("<I", requested_map_id & 0xFFFFFFFF))
        for index, value in enumerate(requested_bytes):
            if 0x41 <= value <= 0x5A:
                requested_bytes[index] = value + 0x20
        normalized_map_id = struct.unpack_from("<I", requested_bytes, 0)[0]

        matched_map_id: Optional[int] = None
        matched_source = ""
        for field in self.battlefields.values():
            scene_bytes = field.scene_name.lower().encode("ascii", errors="ignore")
            for offset in range(0, max(0, len(scene_bytes) - 3)):
                candidate = struct.unpack_from("<I", scene_bytes, offset)[0]
                if candidate != normalized_map_id:
                    continue
                if matched_map_id is not None and matched_map_id != field.map_id:
                    return None, ""
                matched_map_id = field.map_id
                matched_source = (
                    f"scene_name@{offset}:{scene_bytes[offset:offset + 4].decode('ascii')}"
                )
                break
        return matched_map_id, matched_source

    def resolve_gate_map_id(self, requested_map_id: int, body: bytes) -> tuple[int, str]:
        if requested_map_id in self.battlefields:
            return requested_map_id, "request"

        scan_len = min(len(body), 16)
        for offset in range(0, max(0, scan_len - 3), 4):
            candidate = struct.unpack_from("<I", body, offset)[0]
            if candidate in self.battlefields:
                return candidate, f"body@{offset}"

        scene_map_id, scene_source = self.resolve_gate_map_id_from_scene_name(requested_map_id)
        if scene_map_id is not None:
            return scene_map_id, scene_source

        if self.last_apply_map_id in self.battlefields:
            return self.last_apply_map_id, "last_apply"
        if self.last_lobby_map_id in self.battlefields:
            return self.last_lobby_map_id, "last_lobby"
        return self.default_map_id, "default"

    def resolve_runtime_map_name(self, map_id: int) -> str:
        # Keep runtime map name aligned with battle init observer expectations.
        field = self.battlefields.get(map_id)
        if field is None:
            return "Blank.reb"
        return field.scene_name

    def resolve_reborn_points(self, map_id: int) -> list[MockRebornPoint]:
        field = self.battlefields.get(map_id)
        if field is None:
            return []
        if field.reborn_points:
            return list(field.reborn_points)
        derived_points: list[MockRebornPoint] = []
        for index, entry in enumerate(field.entries, start=1):
            # Reuse entry list coordinates as a best-effort spawn source when
            # the map has no explicit reborn configuration yet.
            derived_points.append(
                MockRebornPoint(
                    reborn_func_id=((map_id & 0xFFFF) << 8) | (index & 0xFF),
                    reborn_match_id=AIUSER_REBORN_POINT_FUNC_ID,
                    selector_id=entry.entry_id,
                    ui_x=float(entry.world_x),
                    ui_y=float(entry.world_y),
                    spawn_x=float(entry.world_x),
                    spawn_y=0.0,
                    spawn_z=float(entry.world_y),
                )
            )
        return derived_points

    def resolve_battle_points(self, map_id: int) -> list[MockBattlePoint]:
        field = self.battlefields.get(map_id)
        if field is None:
            return []
        return list(field.battle_points)

    def resolve_selected_reborn_point(
        self,
        *,
        actor_id: int,
        map_id: int,
        entry_id: int,
    ) -> MockRebornPoint:
        points = self.resolve_reborn_points(map_id)
        if entry_id > 0:
            for point in points:
                if point.selector_id == entry_id:
                    return point
        if points:
            return points[0]
        fallback_x, fallback_y, fallback_z = DEFAULT_ROBOT_POSITION
        return MockRebornPoint(
            reborn_func_id=((map_id & 0xFFFF) << 8) | 1,
            reborn_match_id=AIUSER_REBORN_POINT_FUNC_ID,
            selector_id=entry_id if entry_id > 0 else (actor_id & 0xFFFFFFFF),
            ui_x=float(fallback_x),
            ui_y=float(fallback_z),
            spawn_x=float(fallback_x),
            spawn_y=float(fallback_y),
            spawn_z=float(fallback_z),
        )

    def resolve_apply_state_for_game(self, state: ConnectionState) -> Optional[ApplyIntoGameState]:
        direct_token = self.resolve_direct_token(state)
        apply_state = self.apply_states_by_direct_token.get(direct_token)
        if apply_state is not None:
            return apply_state
        if state.simple_cfg12:
            apply_state = self.apply_states_by_channel_id.get(state.simple_cfg12 & 0xFFFFFFFF)
            if apply_state is not None:
                return apply_state
        return self.last_apply_state

    @staticmethod
    def resolve_direct_token(state: ConnectionState) -> int:
        # 1001 direct channel commonly carries direct token in first payload dword.
        if len(state.simple_first_payload) >= 4:
            return struct.unpack_from("<I", state.simple_first_payload, 0)[0]
        return state.simple_cfg12 & 0xFFFFFFFF

    @staticmethod
    def game_clock_seconds() -> float:
        # Game client time-sync messages (9/3051, 9/2001) use the same
        # absolute timer scale as system uptime (seconds).
        return float(ctypes.windll.kernel32.GetTickCount64()) / 1000.0

    @staticmethod
    def make_timeval_body() -> bytes:
        now = time.time()
        sec = int(now)
        usec = int((now - sec) * 1_000_000)
        return struct.pack("<II", sec & 0xFFFFFFFF, usec & 0xFFFFFFFF)

    def alloc_game_default_order_key(self) -> int:
        order_key = self.next_game_default_order_key & 0xFFFFFFFF
        self.next_game_default_order_key = (order_key + 1) & 0xFFFFFFFF
        if self.next_game_default_order_key == 0:
            self.next_game_default_order_key = 1
        return order_key

    async def send_battle_initialize_notify(
        self,
        state: ConnectionState,
        map_id: int,
        map_name: str,
    ) -> None:
        # 19/4050 as notify(type=0) avoids entering request-ack path on client.
        order_key = self.alloc_game_default_order_key()
        body = build_battle_initialize_body(map_id, map_name, order_key=order_key)
        payload = build_notify_message(19, 4050, body)
        await self.send_message(state, payload)
        print(
            "[game ] notify battle initialize "
            f"map_id={map_id} scene={map_name!r} "
            f"order_key={order_key} body={self.body_head_hex(body)}"
        )

    async def send_game_connect_push(self, state: ConnectionState) -> None:
        apply_state = self.resolve_apply_state_for_game(state)
        channel_id = apply_state.channel_id if apply_state is not None else (state.simple_cfg12 & 0xFFFFFFFF)
        direct_token = apply_state.direct_token if apply_state is not None else self.resolve_direct_token(state)
        dedup_nonce = self.alloc_push_token()
        body = wrap_catalog_push_body(
            build_game_connect_body(0, channel_id, direct_token),
            dedup_nonce=dedup_nonce,
        )
        payload = build_push_message(9, 2012, 0xFFFFFFFF, body)
        await self.send_message(state, payload)
        print(
            "[game ] push game-connect "
            f"channel_id={channel_id} direct_token={direct_token} "
            f"dedup_nonce={dedup_nonce}"
        )

    def resolve_runtime_character(self, actor_id: int) -> MockCharacter:
        for character in self.characters:
            if character.char_id == actor_id:
                return character

        if self.characters:
            base = self.characters[0]
            return MockCharacter(
                char_id=actor_id & 0xFFFFFFFF,
                name=base.name,
                char_type=base.char_type,
                level=base.level,
                camp=base.camp,
                exploit=base.exploit,
            )

        return MockCharacter(
            char_id=actor_id & 0xFFFFFFFF,
            name=f"Actor{actor_id & 0xFFFFFFFF}",
            char_type=1,
            level=1,
            camp=8,
            exploit=0,
        )

    async def send_post_battle_runtime_pushes(
        self,
        state: ConnectionState,
        *,
        actor_id: int,
        map_id: int,
    ) -> None:
        actor_id &= 0xFFFFFFFF
        runtime_character = self.resolve_runtime_character(actor_id)
        apply_state = self.resolve_apply_state_for_game(state)
        selected_reborn = self.resolve_selected_reborn_point(
            actor_id=actor_id,
            map_id=map_id,
            entry_id=apply_state.entry_id if apply_state is not None else 0,
        )
        reborn_points = self.resolve_reborn_points(map_id)
        if not reborn_points:
            reborn_points = [selected_reborn]
        battle_points = self.resolve_battle_points(map_id)
        runtime = build_mock_robot_runtime(
            actor_id,
            map_id,
            position=(
                selected_reborn.spawn_x,
                selected_reborn.spawn_y,
                selected_reborn.spawn_z,
            ),
        )
        print(
            "[game ] reborn selected "
            f"map_id={map_id} actor_id={actor_id} "
            f"entry_id={apply_state.entry_id if apply_state is not None else 0} "
            f"reborn_func_id={selected_reborn.reborn_func_id} "
            f"reborn_match_id={selected_reborn.reborn_match_id} "
            f"ui=({selected_reborn.ui_x:.1f}, {selected_reborn.ui_y:.1f}) "
            f"spawn=({selected_reborn.spawn_x:.1f}, {selected_reborn.spawn_y:.1f}, {selected_reborn.spawn_z:.1f}) "
            f"points={len(reborn_points)}"
        )

        snapshot_body = build_robot_snapshot_body(runtime)
        avatar_snapshot_body = build_robot_avatar_snapshot_body()
        attach_body = build_attach_object_body(
            actor_id=actor_id,
            flyweight_id=ROBOT_BASE_FLYWEIGHT_ID,
            object_id=runtime.robot_id,
            snapshot_body=snapshot_body,
            avatar_flag=POST_BATTLE_RUNTIME_ATTACH_AVATAR_FLAG,
            avatar_snapshot_body=(
                avatar_snapshot_body if POST_BATTLE_RUNTIME_ATTACH_AVATAR_FLAG else b""
            ),
        )
        actor_birth_body = build_character_birth_body(actor_id)
        character_baseinfo_body = build_character_base_info_body(runtime_character, runtime.robot_id)
        character_online_body = build_character_online_body(runtime_character)
        control_char_candidates: list[int] = [actor_id]
        if POST_BATTLE_RUNTIME_CONTROL_ACTOR_VARIANTS:
            control_char_candidates.extend(
                [
                    actor_id & 0xFF,
                    actor_id & 0xFFFF,
                    1,
                    2,
                    0,
                ]
            )
        dedup_control_char_candidates: list[int] = []
        for candidate in control_char_candidates:
            candidate &= 0xFFFFFFFF
            if candidate not in dedup_control_char_candidates:
                dedup_control_char_candidates.append(candidate)
        control_char_candidates = dedup_control_char_candidates
        reborn_loc_list_body = build_reborn_loc_list_body(reborn_points)
        occupy_icon_body = build_battle_point_body(battle_points)
        battle_point_body = build_battle_point_body(battle_points)
        select_reborn_body = build_select_reborn_loc_body(
            (
                selected_reborn.spawn_x,
                selected_reborn.spawn_y,
                selected_reborn.spawn_z,
            ),
            selected_reborn.reborn_func_id,
        )
        robot_relive_body = build_robot_relive_body(
            runtime.robot_id,
            position=(
                selected_reborn.spawn_x,
                selected_reborn.spawn_y,
                selected_reborn.spawn_z,
            ),
            rotation=runtime.rotation,
        )
        robot_revived_body = build_robot_revived_body(runtime.robot_id)
        reborn_list_ids = ",".join(str(point.reborn_func_id) for point in reborn_points)
        reborn_match_ids = ",".join(str(point.reborn_match_id) for point in reborn_points)
        print(
            "[game ] attach blueprint "
            f"actor_id={actor_id} robot_id={runtime.robot_id} "
            f"base_fw={ROBOT_BASE_FLYWEIGHT_ID} parts="
            f"{ROBOT_BODY_FLYWEIGHT_ID}/{runtime.body_object_id},"
            f"{ROBOT_ARMOR_FLYWEIGHT_ID}/{runtime.armor_object_id},"
            f"{ROBOT_CORE_FLYWEIGHT_ID}/{runtime.core_object_id} "
            f"func={ROBOT_POWER_FUNCTION_ID}/{runtime.function_object_id} "
            f"snapshot={len(snapshot_body)}B avatar={len(avatar_snapshot_body)}B attach={len(attach_body)}B "
            f"avatar_flag={POST_BATTLE_RUNTIME_ATTACH_AVATAR_FLAG} "
            f"position=({runtime.position[0]:.1f}, {runtime.position[1]:.1f}, {runtime.position[2]:.1f}) "
            f"rotation=({runtime.rotation[0]:.1f}, {runtime.rotation[1]:.1f}, {runtime.rotation[2]:.1f})"
        )
        print(
            "[game ] control/reborn plan "
            f"actor_id={actor_id} robot_id={runtime.robot_id} "
            f"reborn_func_id={selected_reborn.reborn_func_id} "
            f"reborn_match_id={selected_reborn.reborn_match_id} "
            f"entry_selector_id={selected_reborn.selector_id} "
            f"reborn_list=[{reborn_list_ids}] reborn_match_list=[{reborn_match_ids}] "
            f"battle_points={len(battle_points)} "
            "order="
            + " -> ".join(
                (["3001"] if POST_BATTLE_RUNTIME_SEND_ACTOR_BIRTH else [])
                + (["3040"] if POST_BATTLE_RUNTIME_SEND_CHARACTER_BASEINFO else [])
                + (["3041"] if POST_BATTLE_RUNTIME_SEND_CHARACTER_ONLINE else [])
                + (["5001"] if POST_BATTLE_RUNTIME_SEND_ATTACH_ROBOT else [])
                + (
                    [f"3100x{len(control_char_candidates)}"]
                    if POST_BATTLE_RUNTIME_SEND_SET_CONTROL
                    else []
                )
                + (
                    ["5331", "5330", "5330(replay)"]
                    if POST_BATTLE_RUNTIME_SEND_REBORN_SELECTION and POST_BATTLE_RUNTIME_SEND_ATTACH_ROBOT
                    else []
                )
                + (["5600", "5610"] if battle_points else [])
                + (["5108/5109"] if POST_BATTLE_RUNTIME_SEND_ROBOT_SURVIVAL else [])
                + (
                    (
                        [
                            "3100(late)",
                            "5109(late)",
                            "5331(late)",
                            "5330(late)",
                            "5330(late-replay)",
                        ]
                        + (["5600(late)", "5610(late)"] if battle_points else [])
                    )
                    if (
                        POST_BATTLE_RUNTIME_ENABLE_LATE_CONTROL_REPLAY
                        and POST_BATTLE_RUNTIME_SEND_SET_CONTROL
                        and POST_BATTLE_RUNTIME_SEND_ATTACH_ROBOT
                        and POST_BATTLE_RUNTIME_SEND_REBORN_SELECTION
                    )
                    else []
                )
            )
        )

        async def send_runtime_push(label: str, mtype: int, body: bytes) -> None:
            dedup_nonce = self.alloc_push_token()
            wire_body = wrap_catalog_push_body(body, dedup_nonce=dedup_nonce)
            if POST_BATTLE_RUNTIME_MESSAGE_MODE == "notify":
                payload = build_notify_message(19, mtype, wire_body)
            else:
                payload = build_push_message(19, mtype, 0xFFFFFFFF, wire_body)
            await self.send_message(state, payload)
            extra = ""
            if label == "attach-robot":
                extra = (
                    f" attach_fw={ROBOT_BASE_FLYWEIGHT_ID} snapshot={len(snapshot_body)}B"
                    f" avatar={len(avatar_snapshot_body)}B"
                    f" parts={runtime.body_object_id},{runtime.armor_object_id},{runtime.core_object_id}"
                    f" func={runtime.function_object_id}"
                    f" avatar_flag={POST_BATTLE_RUNTIME_ATTACH_AVATAR_FLAG}"
                )
            elif label.startswith("set-control"):
                if len(body) >= 8:
                    control_robot, control_char = struct.unpack_from("<II", body, 0)
                else:
                    control_robot, control_char = runtime.robot_id, actor_id
                extra = (
                    f" control_robot={control_robot}"
                    f" control_char_id={control_char}"
                )
            elif label.startswith("select-reborn-loc"):
                extra = (
                    f" reborn_func_id={selected_reborn.reborn_func_id}"
                    f" reborn_match_id={selected_reborn.reborn_match_id}"
                    f" entry_selector_id={selected_reborn.selector_id}"
                    f" pos=({selected_reborn.spawn_x:.1f}, {selected_reborn.spawn_y:.1f}, {selected_reborn.spawn_z:.1f})"
                )
            elif label.startswith("reborn-loc-list"):
                extra = (
                    f" reborn_points={len(reborn_points)}"
                    f" reborn_ids=[{reborn_list_ids}]"
                    f" reborn_match_ids=[{reborn_match_ids}]"
                )
            elif label.startswith("occupy-icon-list") or label.startswith("battle-point-list"):
                extra = f" count={len(battle_points)}"
            print(
                f"[game ] push {label} type={mtype} "
                f"actor_id={actor_id} robot_id={runtime.robot_id} "
                f"dedup_nonce={dedup_nonce} body={self.body_head_hex(body)}{extra}"
            )

        # Build the local robot/control chain first, publish the reborn-point list,
        # then delay the reborn confirm/revive step until after the map UI has had
        # time to register and consume the list refresh.
        if POST_BATTLE_RUNTIME_SEND_ACTOR_BIRTH:
            await send_runtime_push("actor-birth", 3001, actor_birth_body)
        else:
            print("[game ] skip actor-birth type=3001 reason=isolation-mode")
        if POST_BATTLE_RUNTIME_SEND_CHARACTER_BASEINFO:
            await send_runtime_push("character-baseinfo", 3040, character_baseinfo_body)
        else:
            print("[game ] skip character-baseinfo type=3040 reason=isolation-mode")
        if POST_BATTLE_RUNTIME_SEND_CHARACTER_ONLINE:
            await send_runtime_push("character-online", 3041, character_online_body)
        else:
            print("[game ] skip character-online type=3041 reason=isolation-mode")
        if POST_BATTLE_RUNTIME_SEND_ATTACH_ROBOT:
            await asyncio.sleep(0.03)
            await send_runtime_push("attach-robot", 5001, attach_body)
        else:
            print("[game ] skip attach-robot type=5001 reason=isolation-mode")
        if POST_BATTLE_RUNTIME_SEND_SET_CONTROL:
            await asyncio.sleep(0.05)
            for index, control_char in enumerate(control_char_candidates):
                label = "set-control" if index == 0 else f"set-control-alt{index}"
                await send_runtime_push(
                    label,
                    3100,
                    build_set_control_body(runtime.robot_id, control_char),
                )
                if index + 1 < len(control_char_candidates):
                    await asyncio.sleep(0.03)
        else:
            print("[game ] skip set-control type=3100 reason=isolation-mode")
        if POST_BATTLE_RUNTIME_SEND_REBORN_SELECTION and POST_BATTLE_RUNTIME_SEND_ATTACH_ROBOT:
            await asyncio.sleep(POST_BATTLE_RUNTIME_REBORN_LIST_DELAY)
            await send_runtime_push("reborn-loc-list", 5331, reborn_loc_list_body)
            await asyncio.sleep(POST_BATTLE_RUNTIME_REBORN_CONFIRM_DELAY)
            await send_runtime_push("select-reborn-loc", 5330, select_reborn_body)
            await asyncio.sleep(POST_BATTLE_RUNTIME_REBORN_CONFIRM_REPLAY_DELAY)
            await send_runtime_push("select-reborn-loc-replay", 5330, select_reborn_body)
        elif POST_BATTLE_RUNTIME_SEND_REBORN_SELECTION:
            print("[game ] skip reborn-loc-list/select-reborn type=5331/5330 reason=attach-chain-disabled")
        else:
            print("[game ] skip reborn-loc-list/select-reborn type=5331/5330 reason=layout-not-fully-closed")
        if battle_points:
            await asyncio.sleep(0.05)
            await send_runtime_push("occupy-icon-list", 5600, occupy_icon_body)
            await send_runtime_push("battle-point-list", 5610, battle_point_body)
        else:
            print("[game ] skip occupy-icon/battle-point type=5600/5610 reason=no-map-points")
        if POST_BATTLE_RUNTIME_SEND_ROBOT_SURVIVAL:
            await asyncio.sleep(0.05)
            await send_runtime_push("robot-relive", 5108, robot_relive_body)
            await send_runtime_push("robot-revived", 5109, robot_revived_body)
        else:
            print("[game ] skip robot-survival type=5108/5109 reason=isolation-mode")
        if (
            POST_BATTLE_RUNTIME_ENABLE_LATE_CONTROL_REPLAY
            and POST_BATTLE_RUNTIME_SEND_SET_CONTROL
            and POST_BATTLE_RUNTIME_SEND_ATTACH_ROBOT
            and POST_BATTLE_RUNTIME_SEND_REBORN_SELECTION
        ):
            await asyncio.sleep(POST_BATTLE_RUNTIME_LATE_CONTROL_DELAY)
            for index, control_char in enumerate(control_char_candidates):
                label = (
                    "set-control-late-replay"
                    if index == 0
                    else f"set-control-late-replay-alt{index}"
                )
                await send_runtime_push(
                    label,
                    3100,
                    build_set_control_body(runtime.robot_id, control_char),
                )
                if index + 1 < len(control_char_candidates):
                    await asyncio.sleep(0.03)
            if POST_BATTLE_RUNTIME_SEND_ROBOT_SURVIVAL:
                await asyncio.sleep(0.05)
                await send_runtime_push("robot-revived-late-replay", 5109, robot_revived_body)
            else:
                print("[game ] skip robot-revived-late-replay type=5109 reason=survival-chain-disabled")
            await asyncio.sleep(POST_BATTLE_RUNTIME_LATE_REBORN_DELAY)
            await send_runtime_push("reborn-loc-list-late-replay", 5331, reborn_loc_list_body)
            await asyncio.sleep(0.05)
            await send_runtime_push("select-reborn-loc-late-replay", 5330, select_reborn_body)
            await asyncio.sleep(0.15)
            await send_runtime_push("select-reborn-loc-late-replay-2", 5330, select_reborn_body)
            if battle_points:
                await asyncio.sleep(0.05)
                await send_runtime_push("occupy-icon-list-late-replay", 5600, occupy_icon_body)
                await send_runtime_push("battle-point-list-late-replay", 5610, battle_point_body)
        elif POST_BATTLE_RUNTIME_ENABLE_LATE_CONTROL_REPLAY:
            print("[game ] skip late control/reborn replay reason=required-initial-chain-disabled")

    async def handle_login_client(self, reader: asyncio.StreamReader, writer: asyncio.StreamWriter) -> None:
        peer = writer.get_extra_info("peername")
        print(f"[login] connected: {peer}")

        state: Optional[ConnectionState] = None
        try:
            state = await self.do_handshake("login", reader, writer)
            while True:
                msg = await self.recv_message(state)
                if msg.catalog == 10 and msg.mtype == 10000:
                    await self.handle_login_validate(state, msg)
                else:
                    ack = build_ack_message(
                        msg.catalog,
                        msg.mtype,
                        msg.token,
                        404,
                        b"",
                        multi_id=msg.multi_id,
                    )
                    await self.send_message(state, ack)
        except (asyncio.IncompleteReadError, ConnectionResetError):
            pass
        except OSError as exc:
            if getattr(exc, "winerror", None) not in (64, 1236):
                print(f"[login] error: {exc}")
        except Exception as exc:
            print(f"[login] error: {exc}")
        finally:
            if state is not None:
                state.cipher.close()
            writer.close()
            try:
                await writer.wait_closed()
            except (ConnectionResetError, OSError):
                pass
            print(f"[login] disconnected: {peer}")

    async def handle_login_validate(self, state: ConnectionState, msg: ParsedMessage) -> None:
        try:
            login_server_id, account, password = parse_login_request_body(msg.body)
        except Exception as exc:
            print(f"[login] parse 10/10000 failed: {exc}")
            ack = build_ack_message(10, 10000, msg.token, 1002, b"", multi_id=msg.multi_id)
            await self.send_message(state, ack)
            return

        expect = self.accounts.get(account)
        if expect is None or expect != password:
            print(f"[login] validate failed account={account!r} login_server_id={login_server_id}")
            ack = build_ack_message(10, 10000, msg.token, 1001, b"", multi_id=msg.multi_id)
            await self.send_message(state, ack)
            return

        self.next_gate_id += 1
        gate_id = self.next_gate_id
        gate_ip_u32 = ip_to_u32(self.gate_host)
        body = build_login_success_body(gate_id, gate_ip_u32, self.gate_port, account)

        ack = build_ack_message(10, 10000, msg.token, 0, body, multi_id=msg.multi_id)
        await self.send_message(state, ack)

        print(
            f"[login] validate ok account={account!r} login_server_id={login_server_id} "
            f"gate_id={gate_id} gate={self.gate_host}:{self.gate_port}"
        )

    async def handle_gate_client(self, reader: asyncio.StreamReader, writer: asyncio.StreamWriter) -> None:
        peer = writer.get_extra_info("peername")
        print(f"[gate ] connected: {peer}")

        state: Optional[ConnectionState] = None
        try:
            state = await self.do_handshake("gate", reader, writer)
            while True:
                msg = await self.recv_message(state)
                if msg.catalog == 13 and msg.mtype == 13000:
                    body = build_character_list_body(self.characters)
                    ack = build_ack_message(13, 13000, msg.token, 0, body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print(f"[gate ] character list ok count={len(self.characters)}")
                    continue

                if msg.catalog == 13 and msg.mtype == 13004:
                    try:
                        char_id = parse_character_online_request_body(msg.body)
                    except Exception:
                        char_id = self.characters[0].char_id if self.characters else 0

                    character = next((x for x in self.characters if x.char_id == char_id), None)
                    if character is None:
                        if not self.characters:
                            ack = build_ack_message(13, 13004, msg.token, 1003, b"", multi_id=msg.multi_id)
                            await self.send_message(state, ack)
                            continue
                        character = self.characters[0]

                    body = build_character_online_body(character)
                    ack = build_ack_message(13, 13004, msg.token, 0, body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print(f"[gate ] character online ok char_id={character.char_id}")
                    continue

                if msg.catalog == 14 and msg.mtype == 14004:
                    body = build_quick_suite_list_body_empty()
                    ack = build_ack_message(14, 14004, msg.token, 0, body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print("[gate ] quick-suite list ok count=0")
                    continue

                if msg.catalog == 14 and msg.mtype == 14005:
                    ack = build_ack_message(14, 14005, msg.token, 0, b"", multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print("[gate ] quick-suite save ok")
                    continue

                if msg.catalog == 14 and msg.mtype == 14010:
                    try:
                        char_id = parse_u32_request_body(msg.body, field_name="character exploit")
                    except Exception:
                        char_id = self.characters[0].char_id if self.characters else 0

                    character = next((x for x in self.characters if x.char_id == char_id), None)
                    exploit = character.exploit if character is not None else 0
                    body = build_character_exploit_body(exploit)
                    ack = build_ack_message(14, 14010, msg.token, 0, body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print(f"[gate ] character exploit ok char_id={char_id} exploit={exploit}")
                    continue

                if msg.catalog == 17 and msg.mtype == 17006:
                    fields = list(self.battlefields.values())
                    body = build_world_list_body(fields)
                    ack = build_ack_message(17, 17006, msg.token, 0, body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    map_ids = [field.map_id for field in fields]
                    print(f"[gate ] world list ok count={len(fields)} map_ids={map_ids}")
                    continue

                if msg.catalog == 17 and msg.mtype == 17008:
                    try:
                        raw_map_id = parse_u32_request_body(msg.body, field_name="map info")
                    except Exception:
                        raw_map_id = 0
                    map_id, map_source = self.resolve_gate_map_id(raw_map_id, msg.body)
                    field = self.battlefields.get(map_id)
                    if field is None:
                        ack = build_ack_message(17, 17008, msg.token, 1003, b"", multi_id=msg.multi_id)
                        await self.send_message(state, ack)
                        print(
                            "[gate ] map info fail "
                            f"raw_map_id={raw_map_id} resolved_map_id={map_id} "
                            f"source={map_source} body={self.body_head_hex(msg.body)}"
                        )
                        continue
                    self.remember_lobby_map_id(map_id)
                    reply_body = build_map_info_body(field)
                    ack = build_ack_message(17, 17008, msg.token, 0, reply_body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    ui_x = int((field.world_x / 1000.0) / 1.885)
                    ui_y = int((field.world_y / 1000.0) / 3.134)
                    print(
                        "[gate ] map info ok "
                        f"raw_map_id={raw_map_id} map_id={map_id} source={map_source} "
                        f"kind={field.map_kind} body={self.body_head_hex(msg.body)} "
                        f"world=({field.world_x},{field.world_y}) ui=({ui_x},{ui_y}) "
                        f"texture={field.texture_name}"
                    )
                    continue

                if msg.catalog == 17 and msg.mtype == 17012:
                    try:
                        raw_map_id, camp = parse_entry_list_request_body(msg.body)
                    except Exception:
                        raw_map_id, camp = 0, 0
                    map_id, map_source = self.resolve_gate_map_id(raw_map_id, msg.body)
                    field = self.battlefields.get(map_id)
                    if field is None:
                        ack = build_ack_message(17, 17012, msg.token, 1003, b"", multi_id=msg.multi_id)
                        await self.send_message(state, ack)
                        print(
                            "[gate ] entry list fail "
                            f"raw_map_id={raw_map_id} resolved_map_id={map_id} "
                            f"source={map_source} camp={camp} body={self.body_head_hex(msg.body)}"
                        )
                        continue
                    self.remember_lobby_map_id(map_id)
                    reply_body = build_entry_list_body(list(field.entries), camp)
                    ack = build_ack_message(17, 17012, msg.token, 0, reply_body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    camp_label = CAMP_LABELS.get(camp, f"Unknown({camp})")
                    print(
                        "[gate ] entry list ok "
                        f"raw_map_id={raw_map_id} map_id={map_id} source={map_source} "
                        f"camp={camp} {camp_label} body={self.body_head_hex(msg.body)}"
                    )
                    continue

                if msg.catalog == 17 and msg.mtype == 17068:
                    try:
                        raw_map_id = parse_u32_request_body(msg.body, field_name="battle-point")
                    except Exception:
                        raw_map_id = 0
                    map_id, map_source = self.resolve_gate_map_id(raw_map_id, msg.body)
                    field = self.battlefields.get(map_id)
                    if field is None:
                        ack = build_ack_message(17, 17068, msg.token, 1003, b"", multi_id=msg.multi_id)
                        await self.send_message(state, ack)
                        print(
                            "[gate ] battle points fail "
                            f"raw_map_id={raw_map_id} resolved_map_id={map_id} "
                            f"source={map_source} body={self.body_head_hex(msg.body)}"
                        )
                        continue
                    self.remember_lobby_map_id(map_id)
                    reply_body = build_battle_point_body(list(field.battle_points))
                    ack = build_ack_message(17, 17068, msg.token, 0, reply_body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print(
                        "[gate ] battle points ok "
                        f"raw_map_id={raw_map_id} map_id={map_id} source={map_source} "
                        f"count={len(field.battle_points)} body={self.body_head_hex(msg.body)}"
                    )
                    continue

                if msg.catalog == 18 and msg.mtype == 18021:
                    try:
                        raw_map_id = parse_u32_request_body(msg.body, field_name="map status")
                    except Exception:
                        raw_map_id = 0
                    map_id, map_source = self.resolve_gate_map_id(raw_map_id, msg.body)
                    field = self.battlefields.get(map_id)
                    if field is None:
                        ack = build_ack_message(18, 18021, msg.token, 1003, b"", multi_id=msg.multi_id)
                        await self.send_message(state, ack)
                        print(
                            "[gate ] map status fail "
                            f"raw_map_id={raw_map_id} resolved_map_id={map_id} "
                            f"source={map_source} body={self.body_head_hex(msg.body)}"
                        )
                        continue
                    self.remember_lobby_map_id(map_id)
                    reply_body = build_map_status_body(field.status_total, field.status_by_nation)
                    ack = build_ack_message(18, 18021, msg.token, 0, reply_body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print(
                        "[gate ] map status ok "
                        f"raw_map_id={raw_map_id} map_id={map_id} source={map_source} "
                        f"body={self.body_head_hex(msg.body)}"
                    )
                    continue

                if msg.catalog == 18 and msg.mtype == 18000:
                    try:
                        field1_u32, map_id, mode_or_index, entry_token = parse_apply_into_game_request_body(msg.body)
                    except Exception:
                        field1_u32, map_id, mode_or_index, entry_token = 0, 0, 0, ""
                    entry_id = int(entry_token) if entry_token.isdigit() else 0
                    entry_map_id = self.map_id_from_entry_id(entry_id)
                    if map_id in self.battlefields:
                        selected_map_id = map_id
                        map_source = "request"
                    elif entry_map_id is not None:
                        selected_map_id = entry_map_id
                        map_source = "entry_token"
                    else:
                        selected_map_id, map_source = self.resolve_gate_map_id(map_id, msg.body)
                    channel_id = self.alloc_game_channel_id()
                    direct_token = self.alloc_direct_token()
                    apply_state = ApplyIntoGameState(
                        multi_id=msg.multi_id or 0,
                        actor_id=field1_u32 & 0xFFFFFFFF,
                        map_id=selected_map_id,
                        mode_or_index=mode_or_index & 0xFF,
                        entry_token=entry_token,
                        entry_id=entry_id,
                        channel_id=channel_id,
                        game_ip_u32=ip_to_u32(self.mock_game_host),
                        game_port=self.mock_game_port,
                        direct_token=direct_token,
                    )
                    self.last_apply_map_id = selected_map_id
                    self.remember_lobby_map_id(selected_map_id)
                    self.last_apply_state = apply_state
                    self.apply_states_by_channel_id[channel_id] = apply_state
                    self.apply_states_by_direct_token[direct_token] = apply_state
                    body = build_apply_into_game_body(
                        apply_state.channel_id,
                        apply_state.game_ip_u32,
                        apply_state.game_port,
                        apply_state.direct_token,
                    )
                    ack = build_ack_message(18, 18000, msg.token, 0, body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print(
                        "[gate ] apply into game ok "
                        f"actor_id={apply_state.actor_id} map_id={map_id} selected_map_id={selected_map_id} "
                        f"source={map_source} "
                        f"mode_or_index={mode_or_index} entry_token={entry_token!r} entry_id={entry_id} "
                        f"channel_id={apply_state.channel_id} direct_token={apply_state.direct_token} "
                        f"body={self.body_head_hex(msg.body)}"
                    )
                    continue

                if msg.catalog == 18 and msg.mtype == 18003:
                    body = build_queue_position_body(0)
                    ack = build_ack_message(18, 18003, msg.token, 0, body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print("[gate ] queue position ok pos=0")
                    continue

                if msg.catalog == 18 and msg.mtype == 18004:
                    ack = build_ack_message(18, 18004, msg.token, 0, b"", multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    print("[gate ] cancel queue ok")
                    continue

                ack = build_ack_message(
                    msg.catalog,
                    msg.mtype,
                    msg.token,
                    404,
                    b"",
                    multi_id=msg.multi_id,
                )
                await self.send_message(state, ack)
        except (asyncio.IncompleteReadError, ConnectionResetError):
            pass
        except OSError as exc:
            if getattr(exc, "winerror", None) not in (64, 1236):
                print(f"[gate ] error: {exc}")
        except Exception as exc:
            print(f"[gate ] error: {exc}")
        finally:
            if state is not None:
                state.cipher.close()
            writer.close()
            try:
                await writer.wait_closed()
            except (ConnectionResetError, OSError):
                pass
            print(f"[gate ] disconnected: {peer}")

    async def handle_game_client(self, reader: asyncio.StreamReader, writer: asyncio.StreamWriter) -> None:
        peer = writer.get_extra_info("peername")
        print(f"[game ] connected: {peer}")

        state: Optional[ConnectionState] = None
        game_connect_sent = False
        battle_init_sent = False
        runtime_init_sent = False
        heartbeat_2001_count = 0
        seen_2001 = False
        seen_9001 = False
        runtime_actor_hint = 0
        delayed_init_task: Optional[asyncio.Task[None]] = None

        def active_apply_state() -> Optional[ApplyIntoGameState]:
            if state is None:
                return self.last_apply_state
            return self.resolve_apply_state_for_game(state)

        def active_map_id() -> int:
            apply_state = active_apply_state()
            if apply_state is not None and apply_state.map_id in self.battlefields:
                return apply_state.map_id
            if self.last_apply_map_id in self.battlefields:
                return self.last_apply_map_id
            return self.default_map_id

        def active_actor_id() -> int:
            apply_state = active_apply_state()
            if apply_state is not None:
                return apply_state.actor_id & 0xFFFFFFFF
            if runtime_actor_hint:
                return runtime_actor_hint & 0xFFFFFFFF
            if self.characters:
                return self.characters[0].char_id & 0xFFFFFFFF
            return 0

        async def maybe_send_game_connect(reason: str) -> None:
            nonlocal game_connect_sent
            if game_connect_sent or state is None or writer.is_closing():
                return
            if state.simple_wait_mode and not state.checksum_learned:
                return
            await self.send_game_connect_push(state)
            game_connect_sent = True
            print(f"[game ] game-connect sent reason={reason}")

        async def maybe_send_battle_init(reason: str) -> None:
            nonlocal battle_init_sent, seen_2001, seen_9001
            if battle_init_sent or state is None or writer.is_closing():
                return
            if not game_connect_sent:
                return
            map_id = active_map_id()
            actor_id = active_actor_id()
            map_name = self.resolve_runtime_map_name(map_id)
            await self.send_battle_initialize_notify(state, map_id, map_name)
            battle_init_sent = True
            # Runtime init must wait for a fresh 2001/9001 pair after battle init.
            seen_2001 = False
            seen_9001 = False
            print(f"[game ] battle-init sent reason={reason}")

        async def maybe_send_runtime_init(reason: str) -> None:
            nonlocal runtime_init_sent
            if runtime_init_sent or state is None or writer.is_closing():
                return
            if not battle_init_sent:
                return
            # The first 9/2001 after battle init is the most reliable point
            # observed for injecting local actor/object initialization.
            if not seen_2001:
                return
            actor_id = active_actor_id()
            if actor_id == 0:
                return
            map_id = active_map_id()
            await self.send_post_battle_runtime_pushes(state, actor_id=actor_id, map_id=map_id)
            runtime_init_sent = True
            print(
                f"[game ] runtime-init sent reason={reason} "
                f"actor_id={actor_id} map_id={map_id}"
            )

        async def delayed_init() -> None:
            try:
                # Align with client observer chain:
                # 9/2012 (connect success) -> 19/4050 (battle initialize).
                await asyncio.sleep(0.8)
                await maybe_send_game_connect("timer")
                await asyncio.sleep(0.25)
                await maybe_send_battle_init("timer")
            except asyncio.CancelledError:
                raise
            except Exception as exc:
                print(f"[game ] delayed init error: {exc}")

        try:
            state = await self.do_handshake("game", reader, writer)
            delayed_init_task = asyncio.create_task(delayed_init())

            if state.simple_wait_mode and state.simple_first_payload:
                first_head = state.simple_first_payload[:24].hex(" ")
                print(
                    "[game ] simple first payload "
                    f"len={len(state.simple_first_payload)} head={first_head}"
                )
                if len(state.simple_first_payload) >= 4:
                    direct_token = struct.unpack_from("<I", state.simple_first_payload, 0)[0]
                    apply_state = self.apply_states_by_direct_token.get(direct_token)
                    if apply_state is not None:
                        self.last_apply_state = apply_state
                        self.last_apply_map_id = apply_state.map_id
                        print(
                            "[game ] simple payload direct_token="
                            f"{direct_token} actor_id={apply_state.actor_id} "
                            f"map_id={apply_state.map_id} channel_id={apply_state.channel_id}"
                        )
                    else:
                        print(f"[game ] simple payload direct_token={direct_token} (unmatched)")

            while True:
                msg = await self.recv_message(state)
                is_request = (msg.control & 0x04) != 0 and (msg.control & 0x08) == 0

                if msg.catalog == 9:
                    body_head = msg.body[:24].hex(" ")
                    print(
                        f"[game ] sync recv type={msg.mtype} control=0x{msg.control:02X} "
                        f"body={len(msg.body)} head={body_head}"
                    )

                    if msg.mtype == 3050:
                        actor_id = struct.unpack_from("<I", msg.body, 0)[0] if len(msg.body) >= 4 else None
                        if (actor_id is None or actor_id == 0) and len(msg.body) >= 8:
                            second_actor_id = struct.unpack_from("<I", msg.body, 4)[0]
                            if second_actor_id != 0:
                                actor_id = second_actor_id
                        apply_state = active_apply_state()
                        server_time = self.game_clock_seconds()
                        reply_3051 = build_notify_message(9, 3051, struct.pack("<d", server_time))
                        await self.send_message(state, reply_3051)
                        expected_actor = apply_state.actor_id if apply_state is not None else None
                        print(
                            "[game ] sync reply 3050->3051 "
                            f"actor_id={actor_id} expected_actor_id={expected_actor} t={server_time:.6f}"
                        )
                        if actor_id is not None and actor_id != 0:
                            runtime_actor_hint = actor_id & 0xFFFFFFFF
                        await maybe_send_runtime_init("after-3050-3051")
                        continue

                    if msg.mtype == 2001:
                        seen_2001 = True
                        heartbeat_2001_count += 1
                        server_time = self.game_clock_seconds()
                        seq = struct.unpack_from("<I", msg.body, 0)[0] if len(msg.body) >= 4 else 0
                        if len(msg.body) >= 12:
                            client_time = struct.unpack_from("<d", msg.body, 4)[0]
                        elif len(msg.body) >= 8:
                            client_time = struct.unpack_from("<d", msg.body, 0)[0]
                        else:
                            client_time = server_time
                        # Request body observed: u32 + double (12 bytes).
                        # Reply keeps leading u32 and appends two doubles.
                        reply = build_notify_message(
                            9,
                            2001,
                            struct.pack("<Idd", seq & 0xFFFFFFFF, client_time, server_time),
                        )
                        await self.send_message(state, reply)
                        print(
                            f"[game ] sync reply 2001 seq={seq} "
                            f"client_t={client_time:.6f} "
                            f"server_t={server_time:.6f} count={heartbeat_2001_count}"
                        )
                        if not runtime_init_sent:
                            await maybe_send_runtime_init("after-2001-and-9001-ready")
                        continue

                    if msg.mtype == 9001:
                        seen_9001 = True
                        ping_body = msg.body[:8] if len(msg.body) >= 8 else self.make_timeval_body()
                        reply = build_notify_message(9, 9001, ping_body)
                        await self.send_message(state, reply)
                        print(f"[game ] ping reply 9001 body={len(ping_body)}")
                        if not runtime_init_sent:
                            await maybe_send_runtime_init("after-9001-and-2001-ready")
                        continue

                if is_request and msg.catalog == 19 and msg.mtype == 4050:
                    map_id = active_map_id()
                    actor_id = active_actor_id()
                    map_name = self.resolve_runtime_map_name(map_id)
                    order_key = self.alloc_game_default_order_key()
                    body = build_battle_initialize_body(map_id, map_name, order_key=order_key)
                    ack = build_ack_message(19, 4050, msg.token, 0, body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    if not battle_init_sent:
                        battle_init_sent = True
                        # Runtime init must wait for a fresh 2001/9001 pair after battle init.
                        seen_2001 = False
                        seen_9001 = False
                    print(
                        f"[game ] ack battle initialize token={msg.token} "
                        f"map_id={map_id} scene={map_name!r} "
                        f"order_key={order_key} body={self.body_head_hex(body)}"
                    )
                    if not runtime_init_sent:
                        await maybe_send_runtime_init("after-4050-ack")
                    continue

                if is_request and msg.catalog == 9 and msg.mtype == 2012:
                    apply_state = active_apply_state()
                    channel_id = apply_state.channel_id if apply_state is not None else (state.simple_cfg12 & 0xFFFFFFFF)
                    direct_token = apply_state.direct_token if apply_state is not None else self.resolve_direct_token(state)
                    body = build_game_connect_body(0, channel_id, direct_token)
                    ack = build_ack_message(9, 2012, msg.token, 0, body, multi_id=msg.multi_id)
                    await self.send_message(state, ack)
                    game_connect_sent = True
                    print(
                        f"[game ] ack connect token={msg.token} "
                        f"channel_id={channel_id} direct_token={direct_token}"
                    )
                    if not battle_init_sent:
                        await maybe_send_battle_init("after-2012")
                    continue

                if is_request:
                    ack = build_ack_message(
                        msg.catalog,
                        msg.mtype,
                        msg.token,
                        0,
                        b"",
                        multi_id=msg.multi_id,
                    )
                    await self.send_message(state, ack)
                    print(f"[game ] ack passthrough catalog={msg.catalog} type={msg.mtype}")

                if not game_connect_sent:
                    await maybe_send_game_connect("first-packet")
                if not battle_init_sent:
                    await maybe_send_battle_init("first-packet")
        except (asyncio.IncompleteReadError, ConnectionResetError):
            pass
        except OSError as exc:
            if getattr(exc, "winerror", None) not in (64, 1236):
                print(f"[game ] error: {exc}")
        except Exception as exc:
            print(f"[game ] error: {exc}")
        finally:
            if delayed_init_task is not None:
                delayed_init_task.cancel()
                try:
                    await delayed_init_task
                except asyncio.CancelledError:
                    pass
            if state is not None:
                state.cipher.close()
            writer.close()
            try:
                await writer.wait_closed()
            except (ConnectionResetError, OSError):
                pass
            print(f"[game ] disconnected: {peer}")


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Welkin binary login/gate mock server")
    parser.add_argument("--login-host", default="127.0.0.1")
    parser.add_argument("--login-port", type=int, default=9001)
    parser.add_argument("--gate-host", default="127.0.0.1")
    parser.add_argument("--gate-port", type=int, default=9002)
    return parser.parse_args()


def main() -> None:
    args = parse_args()
    server = WelkinBinaryServer(
        login_host=args.login_host,
        login_port=args.login_port,
        gate_host=args.gate_host,
        gate_port=args.gate_port,
    )
    asyncio.run(server.run())


if __name__ == "__main__":
    main()

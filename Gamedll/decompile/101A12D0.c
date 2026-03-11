/*
 * func-name: ??0EstabDoor@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101a12d0
 * callers: 0x100074af
 * callees: 0x1000524f
 */

GameClient::EstabDoor *__thiscall GameClient::EstabDoor::EstabDoor(
        GameClient::EstabDoor *this,
        const struct GameClient::EstabDoor *a2)
{
  GameClient::Establishment::Establishment(this, a2);
  *(_DWORD *)this = &GameClient::NonControlledEstab::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::NonControlledEstab::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 114) = *((_DWORD *)a2 + 114);
  *((_DWORD *)this + 115) = *((_DWORD *)a2 + 115);
  *((_BYTE *)this + 464) = *((_BYTE *)a2 + 464);
  *(_DWORD *)this = &GameClient::EstabDoor::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::EstabDoor::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 118) = *((_DWORD *)a2 + 118);
  *((_DWORD *)this + 119) = *((_DWORD *)a2 + 119);
  *((_DWORD *)this + 120) = *((_DWORD *)a2 + 120);
  *((_DWORD *)this + 121) = *((_DWORD *)a2 + 121);
  *((_DWORD *)this + 122) = *((_DWORD *)a2 + 122);
  *((_DWORD *)this + 123) = *((_DWORD *)a2 + 123);
  *((_DWORD *)this + 124) = *((_DWORD *)a2 + 124);
  *((_DWORD *)this + 125) = *((_DWORD *)a2 + 125);
  *((_DWORD *)this + 126) = *((_DWORD *)a2 + 126);
  AnimationSet::AnimationSet(
    (GameClient::EstabDoor *)((char *)this + 508),
    (const struct GameClient::EstabDoor *)((char *)a2 + 508));
  AnimationSet::AnimationSet(
    (GameClient::EstabDoor *)((char *)this + 552),
    (const struct GameClient::EstabDoor *)((char *)a2 + 552));
  AnimationSet::AnimationSet(
    (GameClient::EstabDoor *)((char *)this + 596),
    (const struct GameClient::EstabDoor *)((char *)a2 + 596));
  AnimationSet::AnimationSet(
    (GameClient::EstabDoor *)((char *)this + 640),
    (const struct GameClient::EstabDoor *)((char *)a2 + 640));
  AnimationSet::AnimationSet(
    (GameClient::EstabDoor *)((char *)this + 684),
    (const struct GameClient::EstabDoor *)((char *)a2 + 684));
  AnimationSet::AnimationSet(
    (GameClient::EstabDoor *)((char *)this + 728),
    (const struct GameClient::EstabDoor *)((char *)a2 + 728));
  AnimationSet::AnimationSet(
    (GameClient::EstabDoor *)((char *)this + 772),
    (const struct GameClient::EstabDoor *)((char *)a2 + 772));
  return this;
}

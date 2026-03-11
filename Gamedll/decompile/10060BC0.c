/*
 * func-name: ??0Equip@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10060bc0
 * callers: 0x10010555
 * callees: 0x1000cf40, 0x1000e53e, 0x10011d1a, 0x1001a032
 */

GameClient::Equip *__thiscall GameClient::Equip::Equip(GameClient::Equip *this, const struct GameClient::Equip *a2)
{
  GameClient::WorldObject::WorldObject(this, a2);
  *(_DWORD *)this = &GameClient::SystemPart::`vftable';
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *(_DWORD *)this = &GameClient::Equip::`vftable';
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 41);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 42);
  *((_DWORD *)this + 43) = *((_DWORD *)a2 + 43);
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  *((_BYTE *)this + 184) = *((_BYTE *)a2 + 184);
  *((_BYTE *)this + 185) = *((_BYTE *)a2 + 185);
  *((float *)this + 47) = *((float *)a2 + 47);
  *((float *)this + 48) = *((float *)a2 + 48);
  *((_BYTE *)this + 196) = *((_BYTE *)a2 + 196);
  *((_BYTE *)this + 197) = *((_BYTE *)a2 + 197);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_DWORD *)this + 59) = *((_DWORD *)a2 + 59);
  *((float *)this + 60) = *((float *)a2 + 60);
  *((_BYTE *)this + 244) = *((_BYTE *)a2 + 244);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  *((_DWORD *)this + 63) = *((_DWORD *)a2 + 63);
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 64);
  *((_DWORD *)this + 65) = *((_DWORD *)a2 + 65);
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
  *((_DWORD *)this + 67) = *((_DWORD *)a2 + 67);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  sub_1001A032((int)a2 + 276);
  sub_1001A032((int)a2 + 292);
  sub_1000E53E((int)a2 + 308);
  sub_1000E53E((int)a2 + 324);
  sub_1000CF40((char *)a2 + 340);
  sub_1000CF40((char *)a2 + 420);
  sub_1000CF40((char *)a2 + 500);
  sub_1000CF40((char *)a2 + 580);
  sub_1000CF40((char *)a2 + 660);
  return this;
}

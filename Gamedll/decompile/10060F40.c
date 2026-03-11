/*
 * func-name: ??0Weapon@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10060f40
 * callers: 0x1000c220
 * callees: 0x1000b53c, 0x1000cf40, 0x10010555, 0x102c9f65
 */

GameClient::Weapon *__thiscall GameClient::Weapon::Weapon(
        GameClient::Weapon *this,
        const struct GameClient::Weapon *a2)
{
  GameClient::Equip::Equip(this, a2);
  *(_DWORD *)this = &GameClient::Weapon::`vftable';
  *((_DWORD *)this + 185) = *((_DWORD *)a2 + 185);
  *((_DWORD *)this + 186) = *((_DWORD *)a2 + 186);
  *((_BYTE *)this + 748) = *((_BYTE *)a2 + 748);
  *((float *)this + 188) = *((float *)a2 + 188);
  *((_DWORD *)this + 189) = *((_DWORD *)a2 + 189);
  `eh vector copy constructor iterator'((char *)this + 760, (char *)a2 + 760, 0x48u, 2, sub_100162ED, sub_1000602D);
  *((_DWORD *)this + 226) = *((_DWORD *)a2 + 226);
  *((float *)this + 227) = *((float *)a2 + 227);
  *((float *)this + 228) = *((float *)a2 + 228);
  *((float *)this + 229) = *((float *)a2 + 229);
  *((float *)this + 230) = *((float *)a2 + 230);
  *((float *)this + 231) = *((float *)a2 + 231);
  *((float *)this + 232) = *((float *)a2 + 232);
  *((_DWORD *)this + 233) = *((_DWORD *)a2 + 233);
  *((_DWORD *)this + 234) = *((_DWORD *)a2 + 234);
  *((_DWORD *)this + 235) = *((_DWORD *)a2 + 235);
  *((_DWORD *)this + 236) = *((_DWORD *)a2 + 236);
  *((_DWORD *)this + 237) = *((_DWORD *)a2 + 237);
  *((_DWORD *)this + 238) = *((_DWORD *)a2 + 238);
  *((float *)this + 239) = *((float *)a2 + 239);
  *((float *)this + 240) = *((float *)a2 + 240);
  sub_1000B53C((char *)a2 + 964);
  sub_1000CF40((char *)a2 + 1084);
  sub_1000CF40((char *)a2 + 1164);
  sub_1000CF40((char *)a2 + 1244);
  sub_1000CF40((char *)a2 + 1324);
  sub_1000CF40((char *)a2 + 1404);
  return this;
}

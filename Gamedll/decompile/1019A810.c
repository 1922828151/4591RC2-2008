/*
 * func-name: ??0FWeapon@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1019a810
 * callers: 0x10017044
 * callees: 0x1000cf40, 0x10018228, 0x102c9f65
 */

GameClient::FWeapon *__thiscall GameClient::FWeapon::FWeapon(
        GameClient::FWeapon *this,
        const struct GameClient::FWeapon *a2)
{
  GameClient::FEquip::FEquip(this, a2);
  *(_DWORD *)this = &GameClient::FWeapon::`vftable';
  `eh vector copy constructor iterator'(
    (char *)this + 2084,
    (char *)a2 + 2084,
    0xA0u,
    2,
    (void (__thiscall *)(void *, void *))GameClient::WeaponPattern::WeaponPattern,
    (void (__thiscall *)(void *))GameClient::WeaponPattern::~WeaponPattern);
  *((_BYTE *)this + 2404) = *((_BYTE *)a2 + 2404);
  *((_DWORD *)this + 602) = *((_DWORD *)a2 + 602);
  std::string::string((char *)this + 2412, (char *)a2 + 2412);
  std::string::string((char *)this + 2440, (char *)a2 + 2440);
  *((_DWORD *)this + 617) = *((_DWORD *)a2 + 617);
  *((_DWORD *)this + 618) = *((_DWORD *)a2 + 618);
  *((_DWORD *)this + 619) = *((_DWORD *)a2 + 619);
  *((_DWORD *)this + 620) = *((_DWORD *)a2 + 620);
  sub_1000CF40((char *)a2 + 2484);
  sub_1000CF40((char *)a2 + 2564);
  sub_1000CF40((char *)a2 + 2644);
  sub_1000CF40((char *)a2 + 2724);
  sub_1000CF40((char *)a2 + 2804);
  return this;
}

/*
 * func-name: ?IsUsing@Weapon@GameClient@@UAE_NXZ_0
 * func-address: 0x10195110
 * callers: 0x1001a870
 * callees: none
 */

bool __thiscall GameClient::Weapon::IsUsing(GameClient::Weapon *this)
{
  return *((_DWORD *)this + 186) != 0;
}

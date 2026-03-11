/*
 * func-name: ?CanBeTakeUp@Weapon@GameClient@@UAE_NXZ_0
 * func-address: 0x101951c0
 * callers: 0x10012ec7
 * callees: 0x10006447
 */

bool __thiscall GameClient::Weapon::CanBeTakeUp(GameClient::Weapon *this)
{
  bool result; // al

  result = GameClient::Equip::CanBeTakeUp(this);
  if ( result )
    return *((_DWORD *)this + 186) == 0;
  return result;
}

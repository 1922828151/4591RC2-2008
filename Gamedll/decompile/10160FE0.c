/*
 * func-name: ?CanBeTakeUp@Item@GameClient@@UAE_NXZ_0
 * func-address: 0x10160fe0
 * callers: 0x100030bc
 * callees: 0x10006447
 */

bool __thiscall GameClient::Item::CanBeTakeUp(GameClient::Item *this)
{
  bool result; // al

  result = GameClient::Equip::CanBeTakeUp(this);
  if ( result )
    return *((_DWORD *)this + 194) == -1;
  return result;
}

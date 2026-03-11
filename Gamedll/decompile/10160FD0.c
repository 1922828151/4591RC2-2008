/*
 * func-name: ?CanBeUsed@Item@GameClient@@UAE_NXZ_0
 * func-address: 0x10160fd0
 * callers: 0x1000eb7e
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::Item::CanBeUsed(GameClient::Item *this)
{
  return GameClient::Equip::CanBeUsed(this);
}

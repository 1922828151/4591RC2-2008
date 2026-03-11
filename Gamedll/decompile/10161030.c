/*
 * func-name: ?SpecialUse@Item@GameClient@@UAE_NXZ_0
 * func-address: 0x10161030
 * callers: 0x10014051
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::Item::SpecialUse(GameClient::Item *this)
{
  return GameClient::Equip::SpecialUse(this);
}

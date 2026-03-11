/*
 * func-name: ?StopSpecialUse@Item@GameClient@@UAE_NXZ_0
 * func-address: 0x10161040
 * callers: 0x10014d12
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::Item::StopSpecialUse(GameClient::Item *this)
{
  return GameClient::Equip::StopSpecialUse(this);
}

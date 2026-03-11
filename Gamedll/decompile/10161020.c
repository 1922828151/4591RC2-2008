/*
 * func-name: ?StopUse@Item@GameClient@@UAE_NXZ_0
 * func-address: 0x10161020
 * callers: 0x100041ab
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::Item::StopUse(GameClient::Item *this)
{
  return GameClient::Equip::StopUse(this);
}

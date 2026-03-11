/*
 * func-name: ?StopSpecialUse@Weapon@GameClient@@UAE_NXZ_0
 * func-address: 0x10195120
 * callers: 0x10012927
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::Weapon::StopSpecialUse(GameClient::Weapon *this)
{
  return GameClient::Equip::StopSpecialUse(this);
}

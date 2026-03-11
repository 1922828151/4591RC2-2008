/*
 * func-name: ?OnCreate@DamageEquip@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x1014e080
 * callers: 0x1000e0d9
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::DamageEquip::OnCreate(GameClient::DamageEquip *this, struct GameClient::Flyweight *a2)
{
  return GameClient::Item::OnCreate(this, a2);
}

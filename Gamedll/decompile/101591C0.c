/*
 * func-name: ?OnCreate@Equip@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101591c0
 * callers: 0x10006ef6
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::Equip::OnCreate(GameClient::Equip *this, struct GameClient::Flyweight *a2)
{
  return GameClient::SystemPart::OnCreate(this, a2);
}

/*
 * func-name: ?OnCreate@Item@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x10160ea0
 * callers: 0x100163fb
 * callees: none
 */

bool __thiscall GameClient::Item::OnCreate(GameClient::Item *this, struct GameClient::Flyweight *a2)
{
  return a2 && GameClient::Equip::OnCreate(this, a2);
}

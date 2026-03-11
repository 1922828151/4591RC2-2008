/*
 * func-name: ?OnCreate@TransformItem@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x10194a60
 * callers: 0x10002bad
 * callees: 0x100163fb
 */

bool __thiscall GameClient::TransformItem::OnCreate(GameClient::TransformItem *this, struct GameClient::Flyweight *a2)
{
  return GameClient::Item::OnCreate(this, a2);
}

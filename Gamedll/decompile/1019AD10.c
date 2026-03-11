/*
 * func-name: ?OnCreate@WorldObject@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x1019ad10
 * callers: 0x10016121
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::WorldObject::OnCreate(GameClient::WorldObject *this, struct GameClient::Flyweight *a2)
{
  return GameClient::DataObject::OnCreate(this, a2);
}

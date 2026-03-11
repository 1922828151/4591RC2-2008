/*
 * func-name: ?OnCreate@Booty@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x10144250
 * callers: 0x100042aa
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::Booty::OnCreate(GameClient::Booty *this, struct GameClient::Flyweight *a2)
{
  return GameClient::WorldObject::OnCreate(this, a2);
}

/*
 * func-name: ?OnCreate@SystemPart@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x10194820
 * callers: 0x10008b5c
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::SystemPart::OnCreate(GameClient::SystemPart *this, struct GameClient::Flyweight *a2)
{
  return GameClient::WorldObject::OnCreate(this, a2);
}

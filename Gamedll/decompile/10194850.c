/*
 * func-name: ?LoadResource@SystemPart@GameClient@@UAE_NXZ_0
 * func-address: 0x10194850
 * callers: 0x100083dc
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::SystemPart::LoadResource(GameClient::SystemPart *this)
{
  return GameClient::WorldObject::LoadResource(this);
}

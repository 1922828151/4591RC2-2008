/*
 * func-name: ?Disable@SAlarm@GameClient@@UAE_NXZ_0
 * func-address: 0x101d1890
 * callers: 0x100081fc
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::SAlarm::Disable(GameClient::SAlarm *this)
{
  return GameClient::Skill::Disable(this);
}

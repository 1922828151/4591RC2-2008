/*
 * func-name: ?Enable@SAlarm@GameClient@@UAE_NPAVWorldObject@2@@Z_0
 * func-address: 0x101d1880
 * callers: 0x1001639c
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::SAlarm::Enable(GameClient::SAlarm *this, struct GameClient::WorldObject *a2)
{
  return GameClient::Skill::Enable(this, a2);
}

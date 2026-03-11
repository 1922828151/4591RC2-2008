/*
 * func-name: ?Enable@SLock@GameClient@@UAE_NPAVWorldObject@2@@Z_0
 * func-address: 0x101d3960
 * callers: 0x10002789
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::SLock::Enable(GameClient::SLock *this, struct GameClient::WorldObject *a2)
{
  return GameClient::Skill::Enable(this, a2);
}

/*
 * func-name: ?Enable@SOccupy@GameClient@@UAE_NPAVWorldObject@2@@Z_0
 * func-address: 0x101d4690
 * callers: 0x1000b861
 * callees: none
 */

// attributes: thunk
bool __thiscall GameClient::SOccupy::Enable(GameClient::SOccupy *this, struct GameClient::WorldObject *a2)
{
  return GameClient::Skill::Enable(this, a2);
}

/*
 * func-name: ?Instance@EstabManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x101225f0
 * callers: 0x1000adc6
 * callees: 0x10018ac5, 0x102c9f53
 */

struct GameClient::EstabManager *__cdecl GameClient::EstabManager::Instance()
{
  if ( (`GameClient::EstabManager::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `GameClient::EstabManager::Instance'::`2'::`local static guard' |= 1u;
    GameClient::EstabManager::EstabManager((GameClient::EstabManager *)&`GameClient::EstabManager::Instance'::`2'::em);
    atexit(sub_100071A3);
  }
  return (struct GameClient::EstabManager *)&`GameClient::EstabManager::Instance'::`2'::em;
}

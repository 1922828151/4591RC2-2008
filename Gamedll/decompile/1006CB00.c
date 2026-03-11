/*
 * func-name: ?Instance@GroupManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x1006cb00
 * callers: 0x10017c29
 * callees: 0x10014295, 0x102c9f53
 */

struct GameClient::GroupManager *__cdecl GameClient::GroupManager::Instance()
{
  if ( (`GameClient::GroupManager::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `GameClient::GroupManager::Instance'::`2'::`local static guard' |= 1u;
    GameClient::GroupManager::GroupManager((GameClient::GroupManager *)&`GameClient::GroupManager::Instance'::`2'::gm);
    atexit(sub_1000D373);
  }
  return (struct GameClient::GroupManager *)&`GameClient::GroupManager::Instance'::`2'::gm;
}

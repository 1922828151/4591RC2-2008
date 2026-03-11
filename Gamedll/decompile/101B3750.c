/*
 * func-name: ?Instance@EstabControllerManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x101b3750
 * callers: 0x10005803
 * callees: 0x1001708a, 0x102c9f53
 */

struct GameClient::EstabControllerManager *__cdecl GameClient::EstabControllerManager::Instance()
{
  if ( (`GameClient::EstabControllerManager::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `GameClient::EstabControllerManager::Instance'::`2'::`local static guard' |= 1u;
    GameClient::EstabControllerManager::EstabControllerManager((GameClient::EstabControllerManager *)&`GameClient::EstabControllerManager::Instance'::`2'::ecm);
    atexit(sub_1000B965);
  }
  return (struct GameClient::EstabControllerManager *)&`GameClient::EstabControllerManager::Instance'::`2'::ecm;
}

/*
 * func-name: ?Instance@FuncManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x100439a0
 * callers: 0x1000a506
 * callees: 0x10012c74, 0x102c9f53
 */

struct GameClient::FuncManager *__cdecl GameClient::FuncManager::Instance()
{
  if ( (`GameClient::FuncManager::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `GameClient::FuncManager::Instance'::`2'::`local static guard' |= 1u;
    GameClient::FuncManager::FuncManager((GameClient::FuncManager *)&`GameClient::FuncManager::Instance'::`2'::fm);
    atexit(sub_10018142);
  }
  return (struct GameClient::FuncManager *)&`GameClient::FuncManager::Instance'::`2'::fm;
}

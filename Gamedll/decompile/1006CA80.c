/*
 * func-name: ?Instance@ChatManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x1006ca80
 * callers: 0x10003bf2
 * callees: 0x1000eab1, 0x102c9f53
 */

struct GameClient::ChatManager *__cdecl GameClient::ChatManager::Instance()
{
  if ( (`GameClient::ChatManager::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `GameClient::ChatManager::Instance'::`2'::`local static guard' |= 1u;
    GameClient::ChatManager::ChatManager((GameClient::ChatManager *)&`GameClient::ChatManager::Instance'::`2'::cm);
    atexit(sub_1000E408);
  }
  return (struct GameClient::ChatManager *)&`GameClient::ChatManager::Instance'::`2'::cm;
}

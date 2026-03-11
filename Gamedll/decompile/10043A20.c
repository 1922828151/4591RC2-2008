/*
 * func-name: ?Instance@ProductManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x10043a20
 * callers: 0x10010389
 * callees: 0x1000103c, 0x102c9f53
 */

struct GameClient::ProductManager *__cdecl GameClient::ProductManager::Instance()
{
  if ( (`GameClient::ProductManager::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `GameClient::ProductManager::Instance'::`2'::`local static guard' |= 1u;
    GameClient::ProductManager::ProductManager((GameClient::ProductManager *)&`GameClient::ProductManager::Instance'::`2'::pm);
    atexit(sub_10012611);
  }
  return (struct GameClient::ProductManager *)&`GameClient::ProductManager::Instance'::`2'::pm;
}

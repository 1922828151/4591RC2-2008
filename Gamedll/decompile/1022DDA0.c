/*
 * func-name: ?Instance@FlyweightManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x1022dda0
 * callers: 0x1000aff6
 * callees: none
 */

struct GameClient::FlyweightManager *__cdecl GameClient::FlyweightManager::Instance()
{
  return GameClient::FlyweightManager::s_pInstance;
}

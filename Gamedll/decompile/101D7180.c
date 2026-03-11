/*
 * func-name: ?Instance@BattleFieldManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x101d7180
 * callers: 0x10009ae8
 * callees: none
 */

struct GameClient::BattleFieldManager *__cdecl GameClient::BattleFieldManager::Instance()
{
  return GameClient::BattleFieldManager::s_pInstance;
}

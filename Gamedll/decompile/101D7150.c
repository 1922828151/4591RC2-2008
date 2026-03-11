/*
 * func-name: ?DestroyInstance@BattleFieldManager@GameClient@@SAXXZ_0
 * func-address: 0x101d7150
 * callers: 0x1000556a
 * callees: none
 */

void __cdecl GameClient::BattleFieldManager::DestroyInstance()
{
  if ( GameClient::BattleFieldManager::s_pInstance )
  {
    (**(void (__thiscall ***)(GameClient::BattleFieldManager *, int))GameClient::BattleFieldManager::s_pInstance)(
      GameClient::BattleFieldManager::s_pInstance,
      1);
    GameClient::BattleFieldManager::s_pInstance = 0;
  }
}

/*
 * func-name: ?DestroyInstance@RobotManager@GameClient@@SAXXZ_0
 * func-address: 0x10043aa0
 * callers: 0x1000db16
 * callees: 0x100038f0, 0x102c9d50
 */

void __cdecl GameClient::RobotManager::DestroyInstance()
{
  GameClient::RobotManager *v0; // esi

  if ( GameClient::RobotManager::ms_pEquipManager )
  {
    v0 = GameClient::RobotManager::ms_pEquipManager;
    GameClient::RobotManager::~RobotManager(GameClient::RobotManager::ms_pEquipManager);
    operator delete(v0);
    GameClient::RobotManager::ms_pEquipManager = 0;
  }
}

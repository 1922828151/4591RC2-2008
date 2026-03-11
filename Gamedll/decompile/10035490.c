/*
 * func-name: ?Instance@RobotManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x10035490
 * callers: 0x1000a3a8
 * callees: 0x100170c6, 0x102c9d98
 */

struct GameClient::RobotManager *__cdecl GameClient::RobotManager::Instance()
{
  struct GameClient::RobotManager *result; // eax
  GameClient::RobotManager *v1; // eax

  result = GameClient::RobotManager::ms_pEquipManager;
  if ( !GameClient::RobotManager::ms_pEquipManager )
  {
    v1 = (GameClient::RobotManager *)operator new(0x30u);
    if ( v1 )
    {
      result = (struct GameClient::RobotManager *)GameClient::RobotManager::RobotManager(v1);
      GameClient::RobotManager::ms_pEquipManager = result;
    }
    else
    {
      result = 0;
      GameClient::RobotManager::ms_pEquipManager = 0;
    }
  }
  return result;
}

/*
 * func-name: ?DestroyInstance@FRobot@GameClient@@UAEXK@Z_0
 * func-address: 0x102354f0
 * callers: 0x1001a4a6
 * callees: 0x1000a286, 0x1000a3a8, 0x10016784, 0x10019d6c
 */

void __thiscall GameClient::FRobot::DestroyInstance(GameClient::FRobot *this, unsigned int a2)
{
  GameClient::RobotManager *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // eax

  v2 = GameClient::RobotManager::Instance();
  GameClient::RobotManager::RemoveRobot(v2, a2);
  GameClient::DamageManager::RemoveDamageUnit(GameClient::DamageManager::ms_pInstance, a2);
  v3 = (void (__thiscall ***)(_DWORD, int))sub_10016784(a2);
  if ( v3 )
    (**v3)(v3, 1);
}

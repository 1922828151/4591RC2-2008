/*
 * func-name: ?OnYes@RobotSuicideConfirmCallback@GameClient@@EAEXXZ_0
 * func-address: 0x10174a80
 * callers: 0x10008161
 * callees: 0x1000194c, 0x1000a3a8, 0x1000ed13
 */

void __thiscall GameClient::RobotSuicideConfirmCallback::OnYes(GameClient::RobotSuicideConfirmCallback *this)
{
  int v1; // eax
  GameClient::RobotManager *v2; // eax
  struct GameClient::Robot *Robot; // eax
  int v4; // [esp-4h] [ebp-4h]

  v1 = sub_1000194C(0);
  if ( v1 )
  {
    v4 = *(_DWORD *)(v1 + 292);
    v2 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v2, v4);
    if ( Robot )
    {
      if ( !*((_DWORD *)Robot + 90) )
        GameClient::Robot::Suicide(Robot);
    }
  }
}

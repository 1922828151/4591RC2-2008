/*
 * func-name: ?OnAvartarControllerBoxDeleted@Func_RobotReceive@GameClient@@UAEXK@Z_0
 * func-address: 0x101c3470
 * callers: 0x10017e40
 * callees: 0x1000a3a8, 0x1000ed13, 0x10016a4f
 */

void __thiscall GameClient::Func_RobotReceive::OnAvartarControllerBoxDeleted(
        GameClient::Func_RobotReceive *this,
        unsigned int a2)
{
  GameClient::RobotManager *v3; // eax
  struct GameClient::Robot *Robot; // eax
  int v5; // eax

  v3 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v3, a2);
  if ( Robot && *((_DWORD *)Robot + 227) == *((_DWORD *)this + 8) )
  {
    v5 = sub_10016A4F(*((_DWORD *)Robot + 4));
    if ( v5 )
      (*(void (__thiscall **)(GameClient::Func_RobotReceive *, int))(*(_DWORD *)this + 44))(this, v5);
  }
}

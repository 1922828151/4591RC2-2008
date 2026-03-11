/*
 * func-name: ?CanBeActived@Func_Receive@GameClient@@UAE_NPAVLocalCharacter@2@@Z_0
 * func-address: 0x101c0350
 * callers: 0x100152ad
 * callees: 0x1000a1aa, 0x1000a3a8, 0x1000ed13
 */

bool __thiscall GameClient::Func_Receive::CanBeActived(
        GameClient::Func_Receive *this,
        struct GameClient::LocalCharacter *a2)
{
  bool result; // al
  GameClient::RobotManager *v3; // eax
  struct GameClient::Robot *Robot; // eax
  int v5; // [esp-4h] [ebp-8h]

  result = 0;
  if ( GameClient::Function::CanBeActived(this, a2) )
  {
    v5 = *((_DWORD *)a2 + 73);
    v3 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v3, v5);
    if ( Robot )
    {
      if ( *((_DWORD *)Robot + 70) == -1 || *((_DWORD *)Robot + 90) )
        return 1;
    }
  }
  return result;
}

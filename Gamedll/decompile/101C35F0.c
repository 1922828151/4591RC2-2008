/*
 * func-name: ?Recycle@Func_RobotReceive@GameClient@@QAEXPAVLocalCharacter@2@@Z_0
 * func-address: 0x101c35f0
 * callers: 0x10006d5c
 * callees: 0x100077ed, 0x1000a3a8, 0x1000ed13, 0x10013647
 */

void __thiscall GameClient::Func_RobotReceive::Recycle(
        GameClient::Func_RobotReceive *this,
        struct GameClient::LocalCharacter *a2)
{
  GameClient::RobotManager *v2; // eax
  struct GameClient::Robot *Robot; // eax
  int v4; // [esp+8h] [ebp-18h]

  v4 = *((_DWORD *)a2 + 73);
  v2 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v2, v4);
  if ( Robot && !*((_DWORD *)Robot + 90) )
  {
    sub_100077ED((int)&a2, 9, 219, COERCE_INT(0.0), 1, 512);
    j_nullsub_44((int)&a2);
    if ( a2 )
      Outpop::Utility::Ref_Object::release(a2);
  }
}

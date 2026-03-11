/*
 * func-name: ?RequestBoard@Seat@GameClient@@QAE_NPAVLocalCharacter@2@@Z_0
 * func-address: 0x101b0c40
 * callers: 0x100198e9
 * callees: 0x10001b04, 0x100077ed, 0x1000a3a8, 0x1000ed13, 0x10013647, 0x10015eab, 0x100164d2
 */

char __thiscall GameClient::Seat::RequestBoard(GameClient::Seat *this, struct GameClient::LocalCharacter *a2)
{
  GameClient::RobotManager *v4; // eax
  struct GameClient::LocalCharacter *v5; // edx
  int v6; // [esp+8h] [ebp-20h]
  Outpop::Utility::Ref_Object *v7; // [esp+18h] [ebp-10h] BYREF
  int v8; // [esp+24h] [ebp-4h]

  if ( *((_DWORD *)this + 19) != -1 )
    return 0;
  if ( !*((_DWORD *)this + 22) )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 22) + 108))(*((_DWORD *)this + 22)) )
    return 0;
  v6 = *((_DWORD *)a2 + 73);
  v4 = GameClient::RobotManager::Instance();
  if ( !GameClient::RobotManager::GetRobot(v4, v6) || (GameClient::Robot::GetRobotType() & *((_DWORD *)this + 4)) == 0 )
    return 0;
  sub_100077ED((int)&v7, 9, 224, COERCE_INT(0.0), 1, 512);
  v5 = *(struct GameClient::LocalCharacter **)(*((_DWORD *)this + 22) + 12);
  v8 = 0;
  a2 = v5;
  sub_10001B04((int)&a2);
  sub_10015EAB((int)this + 12);
  j_nullsub_44((int)&v7);
  v8 = -1;
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  return 1;
}

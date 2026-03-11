/*
 * func-name: ?RemoveRobot@RobotManager@GameClient@@QAEPAVRobot@2@J@Z_0
 * func-address: 0x1018d3b0
 * callers: 0x1000a286
 * callees: 0x10010e6a, 0x100155a0
 */

struct GameClient::Robot *__thiscall GameClient::RobotManager::RemoveRobot(GameClient::RobotManager *this, int a2)
{
  int v3; // edi
  void *v4; // ebp
  _DWORD *v5; // ebx
  int v6; // ebp
  int v8; // [esp+10h] [ebp-8h] BYREF
  void *v9; // [esp+14h] [ebp-4h]

  sub_10010E6A((int)&v8, (int)&a2);
  v3 = v8;
  v4 = (void *)*((_DWORD *)this + 2);
  if ( !v8 || (GameClient::RobotManager *)v8 != (GameClient::RobotManager *)((char *)this + 4) )
    _invalid_parameter_noinfo();
  v5 = v9;
  if ( v9 == v4 )
    return 0;
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v5 == *(_DWORD **)(v3 + 4) )
    _invalid_parameter_noinfo();
  v6 = v5[3];
  sub_100155A0((int)&v8, v3, v5);
  return (struct GameClient::Robot *)v6;
}

/*
 * func-name: ?SubmitTransform@ControlledEstab@GameClient@@QAEXW4TransStateType@CtlEstabTransState@2@@Z_0
 * func-address: 0x1019d200
 * callers: 0x10011559
 * callees: 0x10001b04, 0x100077ed, 0x1000a3a8, 0x1000e02a, 0x1000ed13, 0x10013647, 0x10016a4f
 */

void __thiscall GameClient::ControlledEstab::SubmitTransform(_DWORD *this, char a2)
{
  int v3; // ecx
  unsigned int v4; // edi
  int v5; // esi
  GameClient::RobotManager *v6; // eax
  struct GameClient::Robot *Robot; // eax
  int v8; // eax
  int v9; // [esp+8h] [ebp-24h]
  Outpop::Utility::Ref_Object *v10; // [esp+18h] [ebp-14h] BYREF
  int v11; // [esp+1Ch] [ebp-10h] BYREF
  int v12; // [esp+28h] [ebp-4h]

  v3 = this[49];
  v4 = *(_DWORD *)(this[115] + 516);
  if ( !v3 || v4 >= (this[50] - v3) >> 2 )
    _invalid_parameter_noinfo();
  v5 = *(_DWORD *)(this[49] + 4 * v4);
  v9 = *(_DWORD *)(v5 + 76);
  v6 = GameClient::RobotManager::Instance();
  Robot = GameClient::RobotManager::GetRobot(v6, v9);
  sub_10016A4F(*((_DWORD *)Robot + 4));
  sub_100077ED((int)&v10, 9, 226, COERCE_INT(0.0), 1, 512);
  v8 = *(_DWORD *)(*(_DWORD *)(v5 + 88) + 12);
  v12 = 0;
  v11 = v8;
  sub_10001B04((int)&v11);
  sub_1000E02A((int)&a2);
  j_nullsub_44((int)&v10);
  v12 = -1;
  if ( v10 )
    Outpop::Utility::Ref_Object::release(v10);
}

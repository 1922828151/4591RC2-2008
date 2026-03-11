/*
 * func-name: ?StopUse@Robot@GameClient@@QAEXXZ_0
 * func-address: 0x10176fe0
 * callers: 0x1000b208
 * callees: 0x1000815c, 0x10009886, 0x1000d67a, 0x1000d8be, 0x1000dd50
 */

void __thiscall GameClient::Robot::StopUse(GameClient::Robot *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  GameClient::CombinRobot *v12; // ecx
  _BYTE v13[4]; // [esp+28h] [ebp-40h] BYREF
  _BYTE v14[48]; // [esp+2Ch] [ebp-3Ch] BYREF
  int v15; // [esp+64h] [ebp-4h]

  if ( *((_DWORD *)this + 57) )
  {
    v2 = *((_DWORD *)this + 43);
    v3 = *(_DWORD *)(v2 + 1748);
    v4 = v2 + 1744;
    v5 = *((_DWORD *)this + 58) - 1;
    if ( !v3 || v5 >= (*(_DWORD *)(v4 + 8) - v3) / 936 )
      _invalid_parameter_noinfo();
    v6 = *(_DWORD *)(936 * v5 + *(_DWORD *)(v4 + 4) + 516);
    v7 = *((_DWORD *)this + 43);
    v8 = *(_DWORD *)(v7 + 1748);
    v9 = v7 + 1744;
    if ( !v8 || *((_DWORD *)this + 58) - 1 >= (unsigned int)((*(_DWORD *)(v9 + 8) - v8) / 936) )
      _invalid_parameter_noinfo();
    if ( v6 == -1 )
    {
      v10 = sub_10009886(*((_DWORD *)this + 58) - 1);
      GameClient::CombinRobot::PlayAnimationUp(
        *((GameClient::CombinRobot **)this + 43),
        *(_DWORD *)(v10 + 48),
        0.5,
        1.0,
        1.0,
        0.0,
        1);
    }
    else
    {
      GameClient::CombinRobot::PlayAnimation(*((GameClient::CombinRobot **)this + 43), v6, 0.0, -1.0, 1.0, 0.0, 1);
    }
    if ( *((_BYTE *)this + 700) )
    {
      v11 = *(_DWORD *)(GameClient::CombinRobot::GetAnimFPV((int)v13, *(_DWORD *)(*((_DWORD *)this + 57) + 8) + 984) + 48);
      v12 = (GameClient::CombinRobot *)*((_DWORD *)this + 43);
      v15 = 0;
      GameClient::CombinRobot::PlayAnimationFPV(v12, v11, 0.0, 1.0, 1.0, 0.0, 1);
      v15 = -1;
      AnimationSet::~AnimationSet((AnimationSet *)v14);
    }
  }
}

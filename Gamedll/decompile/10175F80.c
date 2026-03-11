/*
 * func-name: ?Land@Robot@GameClient@@QAEXABVVector@@@Z_0
 * func-address: 0x10175f80
 * callers: 0x1000a91b
 * callees: 0x10009886, 0x1000d67a, 0x10013c50
 */

void __thiscall GameClient::Robot::Land(GameClient::Robot *this, const struct Vector *a2)
{
  double v3; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  float v7; // [esp+0h] [ebp-1Ch]
  float v8; // [esp+4h] [ebp-18h]
  float v9; // [esp+8h] [ebp-14h]
  float v10; // [esp+Ch] [ebp-10h]
  float v11; // [esp+18h] [ebp-4h]

  if ( *((_DWORD *)this + 88) != 1 && !*((_DWORD *)this + 90) )
  {
    v3 = *((float *)this + 7);
    *((_DWORD *)this + 88) = 0;
    v11 = v3 - *((float *)this + 184);
    if ( v11 < -0.5 )
    {
      if ( !*((_DWORD *)this + 186) && !*((_BYTE *)this + 920) )
      {
        GameClient::CombinRobot::PlayAnimationDown(
          *((GameClient::CombinRobot **)this + 43),
          *(_DWORD *)(*((_DWORD *)this + 43) + 1692),
          0.2,
          1.0,
          1.0,
          0.0,
          1);
        v10 = 0.0;
        v9 = 1.0;
        v8 = 1.0;
        v7 = 0.2;
        if ( *((_DWORD *)this + 57) )
        {
          v4 = sub_10009886(*((_DWORD *)this + 58) - 1);
          GameClient::CombinRobot::PlayAnimationUp(
            *((GameClient::CombinRobot **)this + 43),
            *(_DWORD *)(v4 + 48),
            v7,
            v8,
            v9,
            v10,
            1);
        }
        else
        {
          GameClient::CombinRobot::PlayAnimationUp(
            *((GameClient::CombinRobot **)this + 43),
            *(_DWORD *)(*((_DWORD *)this + 43) + 1660),
            v7,
            v8,
            v9,
            v10,
            1);
        }
      }
      v5 = *((_DWORD *)this + 316);
      if ( v5 )
        (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 36))(0, 0.75);
    }
  }
  *((_DWORD *)this + 183) = *((_DWORD *)this + 6);
  v6 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 184) = *((_DWORD *)this + 7);
  *((_DWORD *)this + 185) = v6;
}

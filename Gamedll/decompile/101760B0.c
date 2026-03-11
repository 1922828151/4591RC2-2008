/*
 * func-name: ?doRobotUpDown@Robot@GameClient@@IAEXXZ_0
 * func-address: 0x101760b0
 * callers: 0x10011879
 * callees: 0x10006005, 0x10009886, 0x1000a8f3, 0x1000d67a, 0x1000eafc, 0x10014669, 0x102c0ed0, 0x102c26d0
 */

void __thiscall GameClient::Robot::doRobotUpDown(GameClient::Robot *this)
{
  double v2; // st7
  int v3; // eax
  int v4; // eax
  float v5; // [esp+18h] [ebp-5Ch]
  float v6[3]; // [esp+1Ch] [ebp-58h] BYREF
  _BYTE v7[12]; // [esp+28h] [ebp-4Ch] BYREF
  _BYTE v8[64]; // [esp+34h] [ebp-40h] BYREF

  if ( *((_BYTE *)this + 700)
    || !*(_DWORD *)(*((_DWORD *)this + 43) + 716)
    || !*((_DWORD *)this + 49)
    || (*((_DWORD *)this + 92) & 0x20) != 0
    || *((_DWORD *)this + 91)
    || *((_DWORD *)this + 90)
    || *((_BYTE *)this + 920) )
  {
    return;
  }
  sub_102C0ED0(v7);
  v6[0] = 0.0;
  v6[1] = -1.0;
  v6[2] = 0.0;
  sub_1000EAFC((int)v6);
  v5 = 0.0 - 1.570796370506287;
  if ( v5 > 1.570796370506287 )
  {
    v2 = 1.5707964;
LABEL_12:
    v5 = v2;
    goto LABEL_13;
  }
  if ( v5 < -1.570796370506287 )
  {
    v2 = -1.5707964;
    goto LABEL_12;
  }
LABEL_13:
  if ( !*((_DWORD *)this + 57) || *((_DWORD *)this + 50) && GameClient::RobotBody::GetRobotType() == 2 )
  {
    if ( *(_DWORD *)(*((_DWORD *)this + 49) + 204) )
    {
      sub_10014669(v8);
      sub_102C26D0(0.0, v5, 0.0);
      GameClient::AdapterActor::SetNodeInfluence(*((_DWORD *)this + 49) + 184, (int)v8);
    }
  }
  else if ( v5 <= 0.2617994 )
  {
    if ( v5 < -0.2617994 && *(_DWORD *)(*((_DWORD *)this + 43) + 716) )
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 43) + 1472) != *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 360) )
      {
        v4 = sub_10009886(*((_DWORD *)this + 58) - 1);
        GameClient::CombinRobot::PlayAnimationUp(
          *((GameClient::CombinRobot **)this + 43),
          *(_DWORD *)(v4 + 360),
          0.2,
          1.0,
          0.0,
          0.0,
          0);
      }
      *(float *)(*((_DWORD *)this + 43) + 1476) = -v5 / 1.570796370506287 * *(float *)(*((_DWORD *)this + 43) + 1480);
      Model::SetAnimPosition(
        *(Model **)(*((_DWORD *)this + 43) + 716),
        *(_DWORD *)(*((_DWORD *)this + 43) + 1472),
        *(float *)(*((_DWORD *)this + 43) + 1476));
    }
  }
  else if ( *(_DWORD *)(*((_DWORD *)this + 43) + 716) )
  {
    if ( *(_DWORD *)(*((_DWORD *)this + 43) + 1472) != *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 308) )
    {
      v3 = sub_10009886(*((_DWORD *)this + 58) - 1);
      GameClient::CombinRobot::PlayAnimationUp(
        *((GameClient::CombinRobot **)this + 43),
        *(_DWORD *)(v3 + 308),
        0.2,
        1.0,
        0.0,
        0.0,
        0);
    }
    *(float *)(*((_DWORD *)this + 43) + 1476) = *(float *)(*((_DWORD *)this + 43) + 1480) * (v5 / 1.570796370506287);
    Model::SetAnimPosition(
      *(Model **)(*((_DWORD *)this + 43) + 716),
      *(_DWORD *)(*((_DWORD *)this + 43) + 1472),
      *(float *)(*((_DWORD *)this + 43) + 1476));
  }
}

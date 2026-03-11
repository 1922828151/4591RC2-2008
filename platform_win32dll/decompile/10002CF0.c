/*
 * func-name: sub_10002CF0
 * func-address: 0x10002cf0
 * callers: 0x10004220
 * callees: 0x10019744
 */

DWORD __stdcall sub_10002CF0(DWORD dwUserIndex, float a2, float a3)
{
  double v3; // st6
  double v4; // st7
  XINPUT_VIBRATION pVibration; // [esp+0h] [ebp-8h] BYREF
  int v7; // [esp+4h] [ebp-4h]

  if ( a2 <= 1.0 )
  {
    if ( a2 < 0.0 )
      a2 = 0.0;
    v3 = 1.0;
    v4 = 0.0;
  }
  else
  {
    v3 = 1.0;
    v4 = 0.0;
    a2 = 1.0;
  }
  if ( a3 <= v3 )
  {
    if ( a3 >= v4 )
      goto LABEL_10;
  }
  else
  {
    v4 = v3;
  }
  a3 = v4;
LABEL_10:
  v7 = (int)(a2 * 65535.0);
  pVibration.wLeftMotorSpeed = v7;
  pVibration.wRightMotorSpeed = (int)(65535.0 * a3);
  return XInputSetState(dwUserIndex, &pVibration);
}

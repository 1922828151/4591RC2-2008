/*
 * func-name: ?CircleLerp@CameraHandler@@SAMMMM@Z_0
 * func-address: 0x100dcbb0
 * callers: 0x10014fce
 * callees: 0x102c9fe0
 */

double __cdecl CameraHandler::CircleLerp(float a1, float a2, float a3)
{
  long double v3; // st5
  long double v4; // st6
  float v6; // [esp+8h] [ebp+8h]
  float v7; // [esp+8h] [ebp+8h]
  float v8; // [esp+8h] [ebp+8h]
  float v9; // [esp+8h] [ebp+8h]
  float v10; // [esp+8h] [ebp+8h]
  float v11; // [esp+8h] [ebp+8h]
  float v12; // [esp+8h] [ebp+8h]

  v6 = a2 - a1;
  v7 = v6 - (double)(int)(v6 / 360.0) * 360.0;
  v3 = v7;
  if ( v7 < 0.0 )
  {
    v8 = v3 + 360.0;
    v3 = v8;
  }
  if ( v3 <= 180.0 )
  {
    v4 = v3;
  }
  else
  {
    v9 = v3 - 360.0;
    v4 = v9;
  }
  v10 = fabs(v4);
  v11 = v10 / 180.0;
  v12 = (v11 + a3) * GDeltaTime;
  if ( v12 > 1.0 )
    v12 = 1.0;
  return (float)(a1 + v4 * v12);
}

/*
 * func-name: sub_1012C460
 * func-address: 0x1012c460
 * callers: 0x1012c590, 0x1012cad0
 * callees: 0x1004c240, 0x101a281a, 0x101a2820
 */

float *__cdecl sub_1012C460(float *a1, float a2)
{
  double v2; // st7
  double v3; // st5
  double v4; // st5
  double v5; // rt1
  double v6; // st6
  double v7; // st5
  double v8; // st7
  float v10; // [esp+0h] [ebp-10h]
  float v11; // [esp+8h] [ebp-8h]
  float v12; // [esp+18h] [ebp+8h]
  float v13; // [esp+18h] [ebp+8h]
  float v14; // [esp+18h] [ebp+8h]
  float v15; // [esp+18h] [ebp+8h]
  float v16; // [esp+18h] [ebp+8h]
  float v17; // [esp+18h] [ebp+8h]

  v2 = a2;
  v3 = 1260.0;
  if ( a2 <= 420.0 || v2 >= 1260.0 )
  {
    v4 = a2;
    if ( a2 >= 420.0 )
      v14 = v4 - 1260.0;
    else
      v14 = v4 + 180.0;
    v13 = v14 / 600.0;
    v5 = v4;
    v3 = 1260.0;
    v2 = v5;
  }
  else
  {
    v12 = v2 - 420.0;
    v13 = v12 / 840.0;
  }
  v6 = v3;
  if ( v2 <= 420.0 )
  {
    v8 = 1.0;
  }
  else
  {
    v7 = v2;
    v8 = 1.0;
    if ( v7 < v6 )
      v13 = 1.0 - v13;
  }
  v15 = (v13 + v13 - v8) * 0.5;
  v16 = v15 * 2.443460941314697 + 1.570796370506287;
  v10 = cos(v16);
  v17 = sin(v16);
  v11 = -v17;
  *a1 = v10;
  a1[1] = v11;
  a1[2] = 0.12;
  sub_1004C240(a1);
  return a1;
}

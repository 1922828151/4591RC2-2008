/*
 * func-name: sub_10132870
 * func-address: 0x10132870
 * callers: 0x101333a0
 * callees: none
 */

BOOL __cdecl sub_10132870(float *a1, float a2, float *a3)
{
  double v3; // st6
  double v4; // st6
  double v5; // st7
  double v6; // st7
  double v7; // st6
  double v8; // st5
  float v10; // [esp+0h] [ebp-18h]
  float v11; // [esp+4h] [ebp-14h]
  float v12; // [esp+8h] [ebp-10h]
  float v13; // [esp+Ch] [ebp-Ch]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]

  if ( *a1 <= 0.0 )
  {
    v10 = *a3;
    v3 = -v10;
  }
  else
  {
    v10 = -*a3;
    v3 = *a3;
  }
  v13 = v3;
  if ( a1[1] <= 0.0 )
  {
    v11 = a3[1];
    v4 = -v11;
  }
  else
  {
    v11 = -a3[1];
    v4 = a3[1];
  }
  v14 = v4;
  if ( a1[2] <= 0.0 )
  {
    v12 = a3[2];
    v5 = -v12;
  }
  else
  {
    v12 = -a3[2];
    v5 = a3[2];
  }
  v15 = v5;
  v6 = a1[1];
  v7 = *a1;
  v8 = a1[2];
  return v10 * v7 + v11 * v6 + v12 * v8 + a2 <= 0.0 && a2 + v8 * v15 + v6 * v14 + v7 * v13 >= 0.0;
}

/*
 * func-name: sub_1007A460
 * func-address: 0x1007a460
 * callers: none
 * callees: none
 */

BOOL __cdecl sub_1007A460(float *a1, float a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6
  float v10; // [esp+0h] [ebp-8h]
  float v11; // [esp+0h] [ebp-8h]
  float v12; // [esp+0h] [ebp-8h]
  float v13; // [esp+4h] [ebp-4h]
  float v14; // [esp+10h] [ebp+8h]

  v13 = 0.0;
  v3 = *a3;
  v4 = a1[4];
  if ( v4 > v3 || (v4 = a1[7], v4 < v3) )
  {
    v10 = v3 - v4;
    v13 = v10 * v10 + 0.0;
  }
  v5 = a3[1];
  v6 = a1[5];
  if ( v6 > v5 || (v6 = a1[8], v6 < v5) )
  {
    v11 = v5 - v6;
    v13 = v11 * v11 + v13;
  }
  v7 = a3[2];
  v8 = a1[6];
  if ( v8 > v7 || (v8 = a1[9], v8 < v7) )
  {
    v12 = v7 - v8;
    v13 = v12 * v12 + v13;
  }
  v14 = a2 * a2;
  return v14 >= (double)v13;
}

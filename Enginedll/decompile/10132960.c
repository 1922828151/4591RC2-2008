/*
 * func-name: sub_10132960
 * func-address: 0x10132960
 * callers: 0x10134090
 * callees: none
 */

int __cdecl sub_10132960(float *a1, float *a2)
{
  double v2; // st7
  double v3; // st5
  double v4; // st3
  double v5; // st2
  double v6; // st6
  double v7; // st1
  double v8; // rt0
  double v9; // st2
  double v10; // st7
  float v12; // [esp+8h] [ebp+8h]
  float v13; // [esp+8h] [ebp+8h]
  float v14; // [esp+8h] [ebp+8h]
  float v15; // [esp+8h] [ebp+8h]
  float v16; // [esp+8h] [ebp+8h]
  float v17; // [esp+8h] [ebp+8h]
  float v18; // [esp+8h] [ebp+8h]
  float v19; // [esp+8h] [ebp+8h]
  float v20; // [esp+8h] [ebp+8h]
  float v21; // [esp+8h] [ebp+8h]
  float v22; // [esp+8h] [ebp+8h]
  float v23; // [esp+8h] [ebp+8h]

  v2 = *a2 - a1[4];
  if ( v2 <= -0.001000000047497451 )
    return 0;
  v3 = *a2 - a1[7];
  if ( v3 >= 0.001000000047497451 )
    return 0;
  v4 = a2[1] - a1[5];
  if ( v4 <= -0.001000000047497451 )
    return 0;
  v5 = a2[1] - a1[8];
  if ( v5 >= 0.001000000047497451 )
    return 0;
  v6 = a2[2] - a1[6];
  if ( v6 <= -0.001000000047497451 )
    return 0;
  v7 = a2[2] - a1[9];
  if ( v7 >= 0.001000000047497451 )
    return 0;
  v8 = v5;
  v9 = v2;
  v10 = v8;
  v12 = v9;
  v13 = fabs(v12);
  if ( v13 < 0.001 )
    return -1;
  v14 = v3;
  v15 = fabs(v14);
  if ( v15 < 0.001 )
    return -1;
  v16 = v4;
  v17 = fabs(v16);
  if ( v17 < 0.001 )
    return -1;
  v18 = v10;
  v19 = fabs(v18);
  if ( v19 >= 0.001 )
  {
    v20 = v6;
    v21 = fabs(v20);
    if ( v21 >= 0.001 )
    {
      v22 = v7;
      v23 = fabs(v22);
      if ( v23 >= 0.001 )
        return 1;
    }
    return -1;
  }
  return -1;
}

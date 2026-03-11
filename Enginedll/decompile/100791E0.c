/*
 * func-name: sub_100791E0
 * func-address: 0x100791e0
 * callers: none
 * callees: none
 */

bool __cdecl sub_100791E0(float a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  float v11; // [esp+0h] [ebp-4h]
  float v12; // [esp+8h] [ebp+4h]

  v11 = a1 * a1;
  v12 = 0.0;
  v4 = *a2;
  if ( *a3 <= v4 )
  {
    if ( *a4 >= v4 )
      goto LABEL_6;
    v5 = *a2 - *a4;
  }
  else
  {
    v5 = *a2 - *a3;
  }
  v12 = v5 * v5 + 0.0;
LABEL_6:
  v6 = a2[1];
  if ( a3[1] <= v6 )
  {
    if ( a4[1] >= v6 )
      goto LABEL_11;
    v7 = a2[1] - a4[1];
  }
  else
  {
    v7 = a2[1] - a3[1];
  }
  v12 = v7 * v7 + v12;
LABEL_11:
  v8 = a2[2];
  if ( a3[2] > v8 )
  {
    v9 = a2[2] - a3[2];
LABEL_15:
    v12 = v9 * v9 + v12;
    return v11 >= (double)v12;
  }
  if ( a4[2] < v8 )
  {
    v9 = a2[2] - a4[2];
    goto LABEL_15;
  }
  return v11 >= (double)v12;
}

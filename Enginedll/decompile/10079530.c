/*
 * func-name: sub_10079530
 * func-address: 0x10079530
 * callers: 0x10079650
 * callees: none
 */

int __cdecl sub_10079530(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v6; // st7
  double v7; // st7
  int v9; // edx
  float *v10; // ecx
  double v11; // st7
  float v12; // [esp+4h] [ebp-Ch]
  float v13; // [esp+8h] [ebp-8h]
  float v14; // [esp+Ch] [ebp-4h]
  float v15; // [esp+14h] [ebp+4h]
  float v16; // [esp+14h] [ebp+4h]
  float v17; // [esp+14h] [ebp+4h]
  float v18; // [esp+14h] [ebp+4h]
  float v19; // [esp+14h] [ebp+4h]
  float v20; // [esp+14h] [ebp+4h]

  v15 = a1[4] * a1[1] + a1[3] * *a1 + a1[5] * a1[2];
  v6 = v15;
  v16 = *a1 * *a2 + a2[1] * a1[1] + a1[2] * a2[2];
  v7 = v6 - v16;
  v17 = *a1 * *a3 + a3[1] * a1[1] + a3[2] * a1[2];
  v18 = v7 / v17;
  *a5 = v18;
  if ( *(int *)a5 < 0 )
    return 0;
  *a4 = v18 * *a3 + *a2;
  a4[1] = a3[1] * *a5 + a2[1];
  v9 = 0;
  v10 = a1 + 5;
  v19 = a3[2] * *a5 + a2[2];
  v11 = v19;
  a4[2] = v19;
  while ( 1 )
  {
    v12 = *a4 - *(v10 - 2);
    v13 = a4[1] - *(v10 - 1);
    v14 = v11 - *v10;
    v20 = v10[7] * v12 + v10[8] * v13 + v10[9] * v14;
    if ( v20 > 0.0 )
      break;
    ++v9;
    v10 += 3;
    if ( v9 >= 3 )
      return 1;
  }
  return 0;
}

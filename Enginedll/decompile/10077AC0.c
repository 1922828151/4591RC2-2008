/*
 * func-name: sub_10077AC0
 * func-address: 0x10077ac0
 * callers: none
 * callees: none
 */

float *__cdecl sub_10077AC0(float *a1, float *a2, float *a3, float a4)
{
  double v5; // st7
  double v6; // st7
  float *result; // eax
  double v8; // st7
  float v9; // [esp+0h] [ebp-18h]
  float v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+8h] [ebp-10h]
  float v12; // [esp+Ch] [ebp-Ch]
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+14h] [ebp-4h]
  float v15; // [esp+1Ch] [ebp+4h]
  float v16; // [esp+1Ch] [ebp+4h]

  v15 = *a1 * *a2 + a1[1] * a2[1] + a1[2] * a2[2];
  v5 = v15;
  if ( v15 >= 0.0 )
    v6 = v5 / a4;
  else
    v6 = v5 * a4;
  v16 = v6;
  result = a3;
  v9 = *a2 * v16;
  v10 = v16 * a2[1];
  v11 = v16 * a2[2];
  v12 = *a1 - v9;
  v13 = a1[1] - v10;
  v8 = a1[2] - v11;
  *a3 = v12;
  a3[1] = v13;
  v14 = v8;
  a3[2] = v14;
  return result;
}

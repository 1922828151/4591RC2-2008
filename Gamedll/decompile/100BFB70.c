/*
 * func-name: sub_100BFB70
 * func-address: 0x100bfb70
 * callers: 0x100133ea
 * callees: 0x102c1270, 0x102c9ea2, 0x102ca08c, 0x102ca092
 */

float *__cdecl sub_100BFB70(float *a1, float a2, float *a3, float *a4)
{
  double v5; // st6
  float *result; // eax
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+10h] [ebp+8h]

  *a1 = 0.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  a1[4] = 0.0;
  a1[5] = 0.0;
  a1[6] = 0.0;
  a1[8] = 0.0;
  a1[9] = 0.0;
  a1[10] = 0.0;
  a1[12] = 0.0;
  a1[13] = 0.0;
  a1[14] = 0.0;
  memset(a1, 0, 0x40u);
  sub_102C1270(1.0);
  a1[15] = 1.0;
  v7 = cos(a2);
  v8 = sin(a2);
  v5 = 1.0 - v7;
  *a1 = *a4 * v5 * *a4 + v7;
  a1[1] = a4[2] * v8 + *a4 * v5 * a4[1];
  a1[2] = *a4 * v5 * a4[2] - a4[1] * v8;
  a1[4] = a4[1] * v5 * *a4 - a4[2] * v8;
  a1[5] = a4[1] * v5 * a4[1] + v7;
  a1[6] = a4[1] * v5 * a4[2] + *a4 * v8;
  a1[8] = a4[2] * v5 * *a4 + a4[1] * v8;
  a1[9] = a4[2] * v5 * a4[1] - v8 * *a4;
  a1[10] = v7 + v5 * a4[2] * a4[2];
  a1[12] = *a3 - *a1 * *a3 - a1[4] * a3[1] - a1[8] * a3[2];
  a1[13] = a3[1] - a1[1] * *a3 - a1[5] * a3[1] - a1[9] * a3[2];
  result = a1;
  a1[14] = a3[2] - a1[2] * *a3 - a1[6] * a3[1] - a1[10] * a3[2];
  return result;
}

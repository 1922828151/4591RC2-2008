/*
 * func-name: sub_10064C70
 * func-address: 0x10064c70
 * callers: 0x10066220
 * callees: 0x101a281a, 0x101a2820
 */

float *__cdecl sub_10064C70(float *a1, float a2, float *a3)
{
  float *result; // eax
  double v4; // st7
  float v5; // [esp+0h] [ebp-8h]
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+10h] [ebp+8h]
  float v9; // [esp+10h] [ebp+8h]
  float v10; // [esp+10h] [ebp+8h]
  float v11; // [esp+10h] [ebp+8h]

  v5 = cos(a2);
  v8 = sin(a2);
  result = a1;
  v6 = v8;
  v9 = *a1 - *a3;
  v7 = a1[1] - a3[1];
  v4 = v9;
  v10 = v9 * v5 - v7 * v6;
  *result = v10 + *a3;
  v11 = v7 * v5 + v6 * v4;
  result[1] = v11 + a3[1];
  return result;
}

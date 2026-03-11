/*
 * func-name: sub_1009D1D0
 * func-address: 0x1009d1d0
 * callers: none
 * callees: 0x101780f8
 */

float *__stdcall sub_1009D1D0(float *a1, float *a2, int a3)
{
  float *result; // eax
  double v5; // st6
  double v6; // st5
  float v7; // [esp+Ch] [ebp+8h]
  float v8; // [esp+Ch] [ebp+8h]
  float v9; // [esp+Ch] [ebp+8h]
  float v10; // [esp+Ch] [ebp+8h]
  float v11; // [esp+Ch] [ebp+8h]
  float v12; // [esp+Ch] [ebp+8h]

  D3DXVec3Normalize(a2, a2);
  result = a1;
  v7 = *a2 * 0.5;
  v8 = v7 + 0.5;
  v5 = v8;
  *a2 = v8;
  v9 = a2[1] * 0.5;
  v10 = v9 + 0.5;
  v6 = v10;
  a2[1] = v10;
  v11 = a2[2] * 0.5;
  v12 = v11 + 0.5;
  a2[2] = v12;
  *a1 = v5;
  a1[1] = v6;
  a1[2] = v12;
  a1[3] = 1.0;
  return result;
}

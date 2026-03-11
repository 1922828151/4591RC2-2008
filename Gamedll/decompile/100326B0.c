/*
 * func-name: sub_100326B0
 * func-address: 0x100326b0
 * callers: 0x10008c06
 * callees: none
 */

float *__thiscall sub_100326B0(float *this, float *a2, float *a3)
{
  float *result; // eax
  double v5; // st7
  float v6; // [esp+8h] [ebp+8h]
  float v7; // [esp+8h] [ebp+8h]
  float v8; // [esp+8h] [ebp+8h]
  float v9; // [esp+8h] [ebp+8h]
  float v10; // [esp+8h] [ebp+8h]

  result = a2;
  v6 = *a3 * *this + a3[1] * this[1] + a3[2] * this[2];
  v7 = v6 + v6;
  v5 = v7;
  v8 = *a3 * v7;
  *a2 = v8 - *this;
  v9 = v5 * a3[1];
  a2[1] = v9 - this[1];
  v10 = v5 * a3[2];
  a2[2] = v10 - this[2];
  return result;
}

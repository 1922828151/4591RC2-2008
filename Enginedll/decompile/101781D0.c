/*
 * func-name: sub_101781D0
 * func-address: 0x101781d0
 * callers: 0x10178c30, 0x1017bb30
 * callees: none
 */

float *__thiscall sub_101781D0(float *this, float *a2, float *a3)
{
  double v4; // st7
  float *result; // eax
  double v6; // st6
  double v7; // st5
  double v8; // st6
  double v9; // st7
  float v10; // [esp+8h] [ebp+8h]
  float v11; // [esp+8h] [ebp+8h]
  float v12; // [esp+8h] [ebp+8h]

  v4 = a3[1];
  result = a2;
  v6 = *a3;
  v7 = a3[2];
  v10 = this[1] * v4 + v6 * *this + this[2] * v7;
  v8 = v4 * v4 + v6 * v6 + v7 * v7;
  v9 = v10;
  v11 = v8;
  v12 = v9 / v11;
  *a2 = *a3 * v12;
  a2[1] = v12 * a3[1];
  a2[2] = v12 * a3[2];
  return result;
}

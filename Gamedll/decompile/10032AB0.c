/*
 * func-name: sub_10032AB0
 * func-address: 0x10032ab0
 * callers: 0x10018c05
 * callees: 0x102c9dbc
 */

float *__thiscall sub_10032AB0(float *this, float *a2)
{
  float *result; // eax
  float v3; // [esp+4h] [ebp-4h]
  float v4; // [esp+4h] [ebp-4h]
  float v5; // [esp+4h] [ebp-4h]

  v3 = this[1] * this[1] + *this * *this + this[2] * this[2] + this[3] * this[3];
  v4 = sqrt(v3);
  result = a2;
  v5 = 1.0 / v4;
  *a2 = *this * v5;
  a2[1] = v5 * this[1];
  a2[2] = this[2] * v5;
  a2[3] = v5 * this[3];
  return result;
}

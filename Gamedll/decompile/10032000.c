/*
 * func-name: sub_10032000
 * func-address: 0x10032000
 * callers: 0x100126d4
 * callees: none
 */

float *__thiscall sub_10032000(float *this, float *a2, float a3)
{
  float *result; // eax
  float v4; // [esp+8h] [ebp+8h]

  result = a2;
  v4 = 1.0 / a3;
  *a2 = *this * v4;
  a2[1] = this[1] * v4;
  a2[2] = v4 * this[2];
  return result;
}

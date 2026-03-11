/*
 * func-name: sub_10031EF0
 * func-address: 0x10031ef0
 * callers: 0x10010613
 * callees: none
 */

float *__thiscall sub_10031EF0(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = a3[2] * this[1] - a3[1] * this[2];
  a2[1] = this[2] * *a3 - *this * a3[2];
  a2[2] = a3[1] * *this - *a3 * this[1];
  return result;
}

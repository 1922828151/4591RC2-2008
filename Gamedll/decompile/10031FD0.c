/*
 * func-name: sub_10031FD0
 * func-address: 0x10031fd0
 * callers: 0x1000d28d
 * callees: none
 */

float *__thiscall sub_10031FD0(float *this, float *a2, float a3)
{
  float *result; // eax

  result = a2;
  *a2 = *this * a3;
  a2[1] = this[1] * a3;
  a2[2] = a3 * this[2];
  return result;
}

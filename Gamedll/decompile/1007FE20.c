/*
 * func-name: sub_1007FE20
 * func-address: 0x1007fe20
 * callers: 0x1001230f
 * callees: none
 */

float *__thiscall sub_1007FE20(float *this, float *a2, float a3)
{
  float *result; // eax

  result = a2;
  *a2 = *this * a3;
  a2[1] = this[1] * a3;
  a2[2] = this[2] * a3;
  a2[3] = a3 * this[3];
  return result;
}

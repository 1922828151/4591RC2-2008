/*
 * func-name: sub_10084970
 * func-address: 0x10084970
 * callers: 0x10017c51
 * callees: none
 */

float *__thiscall sub_10084970(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = *a3 * *this;
  a2[1] = a3[1] * this[1];
  a2[2] = a3[2] * this[2];
  a2[3] = a3[3] * this[3];
  return result;
}

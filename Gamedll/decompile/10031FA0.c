/*
 * func-name: sub_10031FA0
 * func-address: 0x10031fa0
 * callers: 0x10011d6f
 * callees: none
 */

float *__thiscall sub_10031FA0(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = *this - *a3;
  a2[1] = this[1] - a3[1];
  a2[2] = this[2] - a3[2];
  return result;
}

/*
 * func-name: sub_100849B0
 * func-address: 0x100849b0
 * callers: 0x10018381
 * callees: none
 */

float *__thiscall sub_100849B0(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = *a3 + *this;
  a2[1] = a3[1] + this[1];
  a2[2] = a3[2] + this[2];
  a2[3] = a3[3] + this[3];
  return result;
}

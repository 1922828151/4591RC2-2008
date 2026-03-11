/*
 * func-name: sub_10031F70
 * func-address: 0x10031f70
 * callers: 0x10012107
 * callees: none
 */

float *__thiscall sub_10031F70(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = *a3 + *this;
  a2[1] = a3[1] + this[1];
  a2[2] = a3[2] + this[2];
  return result;
}

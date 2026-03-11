/*
 * func-name: sub_10016680
 * func-address: 0x10016680
 * callers: 0x1012de10
 * callees: none
 */

float *__thiscall sub_10016680(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a2 = *a3 + *this;
  a2[1] = a3[1] + this[1];
  a2[2] = a3[2] + this[2];
  a2[3] = a3[3] + this[3];
  return result;
}

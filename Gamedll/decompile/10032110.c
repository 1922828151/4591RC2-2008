/*
 * func-name: sub_10032110
 * func-address: 0x10032110
 * callers: 0x1000d20b
 * callees: none
 */

float *__thiscall sub_10032110(float *this, float *a2)
{
  float *result; // eax

  result = a2;
  *this = *a2 + *this;
  this[1] = a2[1] + this[1];
  this[2] = a2[2] + this[2];
  return result;
}

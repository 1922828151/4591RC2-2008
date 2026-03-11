/*
 * func-name: sub_10001310
 * func-address: 0x10001310
 * callers: 0x10080c60
 * callees: none
 */

float *__thiscall sub_10001310(float *this, float *a2)
{
  float *result; // eax

  result = a2;
  *this = *a2 + *this;
  this[1] = a2[1] + this[1];
  this[2] = a2[2] + this[2];
  return result;
}

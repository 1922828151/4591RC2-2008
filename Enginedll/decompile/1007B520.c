/*
 * func-name: sub_1007B520
 * func-address: 0x1007b520
 * callers: 0x10080c60
 * callees: none
 */

float *__thiscall sub_1007B520(float *this, float *a2)
{
  float *result; // eax

  result = a2;
  *this = *this - *a2;
  this[1] = this[1] - a2[1];
  this[2] = this[2] - a2[2];
  return result;
}

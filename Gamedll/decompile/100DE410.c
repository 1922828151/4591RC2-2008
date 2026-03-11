/*
 * func-name: sub_100DE410
 * func-address: 0x100de410
 * callers: 0x1000e3bd
 * callees: none
 */

float *__thiscall sub_100DE410(float *this, float a2)
{
  float *result; // eax

  result = this;
  *this = *this * a2;
  this[1] = this[1] * a2;
  this[2] = a2 * this[2];
  this[4] = this[4] * a2;
  this[5] = a2 * this[5];
  this[6] = this[6] * a2;
  this[8] = this[8] * a2;
  this[9] = this[9] * a2;
  this[10] = a2 * this[10];
  this[12] = this[12] * a2;
  this[13] = a2 * this[13];
  this[14] = a2 * this[14];
  return result;
}

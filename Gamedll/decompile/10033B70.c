/*
 * func-name: sub_10033B70
 * func-address: 0x10033b70
 * callers: 0x1001371e
 * callees: none
 */

float *__thiscall sub_10033B70(float *this, const void *a2)
{
  float *result; // eax

  result = this;
  *this = 0.0;
  this[1] = 0.0;
  this[2] = 0.0;
  this[4] = 0.0;
  this[5] = 0.0;
  this[6] = 0.0;
  this[8] = 0.0;
  this[9] = 0.0;
  this[10] = 0.0;
  this[12] = 0.0;
  this[13] = 0.0;
  this[14] = 0.0;
  qmemcpy(this, a2, 0x40u);
  return result;
}

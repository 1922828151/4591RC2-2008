/*
 * func-name: sub_10001330
 * func-address: 0x10001330
 * callers: 0x1004d5d0, 0x1004e070, 0x1008ce00, 0x10116db0, 0x10139150, 0x10141cd0, 0x101430d0, 0x10160210
 * callees: none
 */

float *__thiscall sub_10001330(float *this, const void *a2)
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

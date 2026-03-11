/*
 * func-name: sub_100496C0
 * func-address: 0x100496c0
 * callers: 0x10014669
 * callees: 0x102c1270, 0x102c9ea2
 */

float *__thiscall sub_100496C0(float *this)
{
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
  memset(this, 0, 0x40u);
  sub_102C1270(1.0);
  this[15] = 1.0;
  return this;
}

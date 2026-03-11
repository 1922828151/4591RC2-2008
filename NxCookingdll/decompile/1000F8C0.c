/*
 * func-name: sub_1000F8C0
 * func-address: 0x1000f8c0
 * callers: 0x100144e0
 * callees: 0x10018310, 0x10034f10
 */

float *__thiscall sub_1000F8C0(float *this)
{
  this[24] = 0.001;
  this[19] = 0.0;
  this[20] = 0.0;
  this[21] = 0.0;
  this[22] = 0.0;
  this[23] = 0.0;
  sub_10018310(this + 25);
  memset(this, 0, 0x4Cu);
  return this;
}

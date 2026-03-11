/*
 * func-name: sub_1000DE50
 * func-address: 0x1000de50
 * callers: 0x100233a0
 * callees: 0x1000c7e0, 0x100178d0, 0x10018310
 */

float *__thiscall sub_1000DE50(float *this)
{
  *(_DWORD *)this = &ConvexMesh::`vftable';
  sub_100178D0(this + 2);
  this[20] = 0.0;
  sub_10018310(this + 21);
  this[27] = 0.0;
  this[28] = 3.4028235e38;
  this[29] = 3.4028235e38;
  this[30] = 3.4028235e38;
  this[31] = -3.4028235e38;
  this[32] = -3.4028235e38;
  this[33] = -3.4028235e38;
  sub_1000C7E0((_DWORD *)this + 39);
  this[72] = 0.0;
  this[73] = -1.0;
  this[86] = 0.0;
  this[1] = 0.0;
  this[11] = 0.0;
  this[12] = 0.0;
  return this;
}

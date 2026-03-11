/*
 * func-name: sub_1001E1D0
 * func-address: 0x1001e1d0
 * callers: 0x10023310, 0x10023790, 0x100242e0
 * callees: 0x10020170
 */

_DWORD *__thiscall sub_1001E1D0(_DWORD *this, int a2)
{
  sub_10020170(a2);
  this[3] = a2;
  *this = &CollisionHullBuilder::`vftable';
  this[4] = 0;
  return this;
}

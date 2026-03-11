/*
 * func-name: sub_1000C7E0
 * func-address: 0x1000c7e0
 * callers: 0x1000de50
 * callees: 0x1000c920, 0x100145b0
 */

_DWORD *__thiscall sub_1000C7E0(_DWORD *this)
{
  sub_1000C920();
  *this = &CollisionHull::`vftable';
  sub_100145B0(this + 22);
  this[27] = 0;
  this[28] = 0;
  this[29] = 0;
  this[30] = 0;
  this[31] = 0;
  this[32] = 0;
  this[20] = this + 1;
  return this;
}

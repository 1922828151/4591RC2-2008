/*
 * func-name: sub_100F5660
 * func-address: 0x100f5660
 * callers: 0x1001a0c3
 * callees: 0x1001816a
 */

_DWORD *__thiscall sub_100F5660(_DWORD *this, int a2)
{
  sub_1001816A(4);
  *(_DWORD *)(this[1] + this[2]) = a2;
  this[2] += 4;
  return this;
}

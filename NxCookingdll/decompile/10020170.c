/*
 * func-name: sub_10020170
 * func-address: 0x10020170
 * callers: 0x1001e1d0
 * callees: none
 */

_DWORD *__thiscall sub_10020170(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *this = &ConvexHullBuilder::`vftable';
  this[1] = a2;
  *((_WORD *)this + 4) = 0;
  return result;
}

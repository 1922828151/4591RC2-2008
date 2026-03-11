/*
 * func-name: sub_100252F0
 * func-address: 0x100252f0
 * callers: 0x1001fca0, 0x10021280, 0x1002c280, 0x1002c730
 * callees: none
 */

_DWORD *__thiscall sub_100252F0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = this;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[1] = a2;
  *this = a3;
  return result;
}

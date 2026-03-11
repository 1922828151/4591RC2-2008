/*
 * func-name: sub_10117DC0
 * func-address: 0x10117dc0
 * callers: 0x100a0e10
 * callees: none
 */

_DWORD *__thiscall sub_10117DC0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  *((_BYTE *)this + 20) = 1;
  *this = 0x80000000;
  return result;
}

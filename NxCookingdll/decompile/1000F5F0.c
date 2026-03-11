/*
 * func-name: sub_1000F5F0
 * func-address: 0x1000f5f0
 * callers: 0x1000f700
 * callees: none
 */

_DWORD *__thiscall sub_1000F5F0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = &GaussMap::`vftable';
  this[1] = 0;
  this[2] = 0;
  return result;
}

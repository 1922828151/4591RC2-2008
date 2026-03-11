/*
 * func-name: sub_10009D50
 * func-address: 0x10009d50
 * callers: 0x10009920, 0x10009b20
 * callees: none
 */

_DWORD *__thiscall sub_10009D50(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = &SweptVolume::`vftable';
  this[9] = 2;
  return result;
}

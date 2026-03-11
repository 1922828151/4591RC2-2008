/*
 * func-name: sub_10015980
 * func-address: 0x10015980
 * callers: 0x1000e060, 0x1000f160, 0x1000fe90, 0x10011260, 0x1001efc0, 0x10022410, 0x10025310, 0x1002d920, 0x10030940
 * callees: none
 */

_DWORD *__thiscall sub_10015980(_DWORD *this)
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

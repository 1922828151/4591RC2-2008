/*
 * func-name: sub_102C0730
 * func-address: 0x102c0730
 * callers: 0x10034010, 0x100b4940
 * callees: none
 */

_DWORD *__thiscall sub_102C0730(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = &Volume::`vftable';
  this[1] = *a2;
  this[2] = a2[1];
  this[3] = a2[2];
  return result;
}

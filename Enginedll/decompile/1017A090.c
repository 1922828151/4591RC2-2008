/*
 * func-name: sub_1017A090
 * func-address: 0x1017a090
 * callers: 0x10001370, 0x10001440
 * callees: none
 */

_DWORD *__thiscall sub_1017A090(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = &Volume::`vftable';
  this[1] = *a2;
  this[2] = a2[1];
  this[3] = a2[2];
  return result;
}

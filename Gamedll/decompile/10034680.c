/*
 * func-name: sub_10034680
 * func-address: 0x10034680
 * callers: 0x10002211
 * callees: none
 */

_DWORD *__thiscall sub_10034680(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  *a2 = this[1];
  a2[1] = this[2];
  a2[2] = this[3];
  return result;
}

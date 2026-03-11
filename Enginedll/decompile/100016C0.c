/*
 * func-name: sub_100016C0
 * func-address: 0x100016c0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_100016C0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  *a2 = this[1];
  a2[1] = this[2];
  a2[2] = this[3];
  return result;
}

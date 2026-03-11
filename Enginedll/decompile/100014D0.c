/*
 * func-name: sub_100014D0
 * func-address: 0x100014d0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_100014D0(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  *a2 = this[4];
  a2[1] = this[5];
  a2[2] = this[6];
  result = a3;
  *a3 = this[7];
  a3[1] = this[8];
  a3[2] = this[9];
  return result;
}

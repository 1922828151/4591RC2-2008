/*
 * func-name: sub_10109220
 * func-address: 0x10109220
 * callers: 0x10107f00
 * callees: 0x10108a30, 0x10108d30
 */

_DWORD *__thiscall sub_10109220(int *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *result; // eax

  sub_10108A30(a4 + 64, this[2], a4);
  sub_10108D30(this[2] - 64, this[2]);
  result = a2;
  this[2] -= 64;
  a2[1] = a4;
  *a2 = a3;
  return result;
}

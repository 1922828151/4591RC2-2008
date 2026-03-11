/*
 * func-name: sub_100D5240
 * func-address: 0x100d5240
 * callers: 0x100cda90
 * callees: 0x10075ef0, 0x10075f50
 */

_DWORD *__thiscall sub_100D5240(int *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *result; // eax

  sub_10075EF0(a4 + 20, this[2], a4);
  sub_10075F50(this[2] - 20, this[2]);
  result = a2;
  this[2] -= 20;
  a2[1] = a4;
  *a2 = a3;
  return result;
}

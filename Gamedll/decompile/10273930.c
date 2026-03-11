/*
 * func-name: sub_10273930
 * func-address: 0x10273930
 * callers: 0x10008db9
 * callees: 0x10001767, 0x10003dff
 */

_DWORD *__thiscall sub_10273930(int *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *result; // eax

  sub_10001767(a4 + 80, this[2], a4);
  sub_10003DFF(this[2] - 80, this[2]);
  result = a2;
  this[2] -= 80;
  a2[1] = a4;
  *a2 = a3;
  return result;
}

/*
 * func-name: sub_102074D0
 * func-address: 0x102074d0
 * callers: 0x10015037
 * callees: 0x10008206, 0x10017c60
 */

int __thiscall sub_102074D0(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = this[1];
  this[60] = a2;
  sub_10017C60(v3);
  return sub_10008206(a2, (int)this);
}

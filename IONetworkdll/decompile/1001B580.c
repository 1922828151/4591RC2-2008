/*
 * func-name: sub_1001B580
 * func-address: 0x1001b580
 * callers: none
 * callees: 0x1001baf0
 */

int __thiscall sub_1001B580(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  this[10] = a3;
  this[6] = a2;
  v5 = this[12];
  this[11] = a5;
  this[7] = a4;
  return sub_1001BAF0(v5);
}

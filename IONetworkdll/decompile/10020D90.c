/*
 * func-name: sub_10020D90
 * func-address: 0x10020d90
 * callers: none
 * callees: 0x10021100
 */

int __thiscall sub_10020D90(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v5; // eax

  this[9] = a3;
  this[6] = a2;
  v5 = this[12];
  this[11] = a5;
  this[7] = a4;
  return sub_10021100(v5);
}

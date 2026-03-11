/*
 * func-name: sub_10178370
 * func-address: 0x10178370
 * callers: 0x10080c60, 0x1012c590, 0x1012cad0
 * callees: 0x1004c240
 */

int __thiscall sub_10178370(_DWORD *this, int a2)
{
  *(_DWORD *)a2 = *this;
  *(_DWORD *)(a2 + 4) = this[1];
  *(_DWORD *)(a2 + 8) = this[2];
  sub_1004C240((float *)a2);
  return a2;
}

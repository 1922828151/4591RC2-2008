/*
 * func-name: sub_10178340
 * func-address: 0x10178340
 * callers: 0x1016dcd0, 0x1016e600
 * callees: 0x1004c240
 */

int __thiscall sub_10178340(_DWORD *this, int a2)
{
  *(_DWORD *)a2 = this[8];
  *(_DWORD *)(a2 + 4) = this[9];
  *(_DWORD *)(a2 + 8) = this[10];
  sub_1004C240((float *)a2);
  return a2;
}

/*
 * func-name: sub_101783A0
 * func-address: 0x101783a0
 * callers: 0x1012c590, 0x1012cad0
 * callees: 0x1004c240
 */

int __thiscall sub_101783A0(_DWORD *this, int a2)
{
  *(_DWORD *)a2 = this[4];
  *(_DWORD *)(a2 + 4) = this[5];
  *(_DWORD *)(a2 + 8) = this[6];
  sub_1004C240((float *)a2);
  return a2;
}

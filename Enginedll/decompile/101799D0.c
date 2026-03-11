/*
 * func-name: sub_101799D0
 * func-address: 0x101799d0
 * callers: none
 * callees: 0x10179840
 */

int __thiscall sub_101799D0(_DWORD *this, int a2)
{
  sub_10179840(this, (float *)a2);
  *(_DWORD *)(a2 + 48) = this[12];
  *(_DWORD *)(a2 + 52) = this[13];
  *(_DWORD *)(a2 + 56) = this[14];
  return a2;
}

/*
 * func-name: sub_102C2560
 * func-address: 0x102c2560
 * callers: none
 * callees: 0x102c23d0
 */

int __thiscall sub_102C2560(_DWORD *this, int a2)
{
  sub_102C23D0(this, (float *)a2);
  *(_DWORD *)(a2 + 48) = this[12];
  *(_DWORD *)(a2 + 52) = this[13];
  *(_DWORD *)(a2 + 56) = this[14];
  return a2;
}

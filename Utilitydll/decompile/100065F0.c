/*
 * func-name: sub_100065F0
 * func-address: 0x100065f0
 * callers: 0x10003c80, 0x10006550, 0x1000a7c0, 0x1000aca0
 * callees: 0x10007910, 0x10018cf2
 */

void __usercall sub_100065F0(int a1@<esi>)
{
  sub_10007910(a1);
  operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
}

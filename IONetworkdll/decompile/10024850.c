/*
 * func-name: sub_10024850
 * func-address: 0x10024850
 * callers: 0x10022fa0, 0x100247b0, 0x10046710
 * callees: 0x10024f00, 0x1004e870
 */

int __usercall sub_10024850@<eax>(int a1@<esi>)
{
  int result; // eax

  sub_10024F00(a1);
  result = operator delete(*(_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}

/*
 * func-name: sub_100129A0
 * func-address: 0x100129a0
 * callers: 0x10010830
 * callees: 0x10009a40, 0x10012b60
 */

int __usercall sub_100129A0@<eax>(int a1@<esi>)
{
  int result; // eax

  sub_10009A40(a1 + 4);
  sub_10012B60(a1 + 16);
  result = 1;
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  return result;
}

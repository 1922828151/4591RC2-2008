/*
 * func-name: sub_10007FE0
 * func-address: 0x10007fe0
 * callers: 0x1000e080, 0x10010a30
 * callees: 0x10008c20
 */

int __usercall sub_10007FE0@<eax>(int a1@<edi>, int a2@<esi>)
{
  sub_10008C20(a1, a2);
  return a1 + 8 * a2;
}

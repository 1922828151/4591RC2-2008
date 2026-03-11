/*
 * func-name: sub_10025330
 * func-address: 0x10025330
 * callers: 0x1003dba0
 * callees: 0x10025930
 */

int __usercall sub_10025330@<eax>(int a1@<edi>, int a2@<esi>)
{
  sub_10025930(a1, a2);
  return a1 + 8 * a2;
}

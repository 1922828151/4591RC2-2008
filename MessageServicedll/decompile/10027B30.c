/*
 * func-name: sub_10027B30
 * func-address: 0x10027b30
 * callers: 0x1001dfb0
 * callees: 0x100281d0
 */

int __usercall sub_10027B30@<eax>(int a1@<eax>, int a2@<ebx>, int a3@<edi>)
{
  sub_100281D0(a2);
  return a3 - 12 * ((a1 - a2) / 12);
}

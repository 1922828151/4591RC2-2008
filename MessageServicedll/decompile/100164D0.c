/*
 * func-name: sub_100164D0
 * func-address: 0x100164d0
 * callers: 0x10016160
 * callees: 0x10016690
 */

int __usercall sub_100164D0@<eax>(int a1@<eax>, int a2@<ebx>, int a3@<edi>)
{
  sub_10016690(a2, a3);
  return a3 - 108 * ((a1 - a2) / 108);
}

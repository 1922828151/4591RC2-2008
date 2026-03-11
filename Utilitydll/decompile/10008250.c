/*
 * func-name: sub_10008250
 * func-address: 0x10008250
 * callers: 0x10005bc0
 * callees: 0x1000ba30
 */

int __usercall sub_10008250@<eax>(int a1@<eax>, int a2@<ebx>, int a3@<edi>)
{
  sub_1000BA30(a1);
  return a3 + 4 * ((a1 - a2) >> 2);
}

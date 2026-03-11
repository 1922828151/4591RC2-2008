/*
 * func-name: sub_1000B9E0
 * func-address: 0x1000b9e0
 * callers: 0x1000b640
 * callees: 0x1000ba30
 */

int __usercall sub_1000B9E0@<eax>(int a1@<edi>, int a2, int a3, int a4, int a5)
{
  sub_1000BA30(a5);
  return a1 + 4 * ((a5 - a3) >> 2);
}

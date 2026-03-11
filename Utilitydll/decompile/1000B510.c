/*
 * func-name: sub_1000B510
 * func-address: 0x1000b510
 * callers: 0x1000b290, 0x1000b640
 * callees: 0x1000ba90
 */

int __usercall sub_1000B510@<eax>(int a1@<eax>, int a2@<ebx>, int a3@<edi>)
{
  sub_1000BA90(a2);
  return a3 - 4 * ((a1 - a2) >> 2);
}

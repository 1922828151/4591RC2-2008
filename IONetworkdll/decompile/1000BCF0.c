/*
 * func-name: sub_1000BCF0
 * func-address: 0x1000bcf0
 * callers: 0x100148c0
 * callees: 0x1000c5c0
 */

int __usercall sub_1000BCF0@<eax>(int a1@<eax>, int a2@<edi>, int a3@<esi>)
{
  char v5; // [esp+4h] [ebp-8h]
  char v6; // [esp+8h] [ebp-4h]

  v6 = 0;
  v5 = 0;
  sub_1000C5C0(a2, v6, v6, v5);
  return a3 + 4 * ((a1 - a2) >> 2);
}

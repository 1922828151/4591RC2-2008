/*
 * func-name: sub_1000A4B0
 * func-address: 0x1000a4b0
 * callers: 0x100193b0
 * callees: 0x1000b300
 */

int __usercall sub_1000A4B0@<eax>(int a1@<edi>, int a2@<esi>)
{
  sub_1000B300(a1, a2);
  return a1 + 8 * a2;
}

/*
 * func-name: sub_1003BAC0
 * func-address: 0x1003bac0
 * callers: 0x1000b8d0, 0x1003baf0
 * callees: 0x1003c480
 */

int __userpurge sub_1003BAC0@<eax>(int a1@<edi>, int a2@<esi>, int a3)
{
  sub_1003C480(a1, a2);
  return a1 + 4 * a2;
}

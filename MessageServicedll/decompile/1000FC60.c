/*
 * func-name: sub_1000FC60
 * func-address: 0x1000fc60
 * callers: 0x1000fc90
 * callees: 0x10010100
 */

int __userpurge sub_1000FC60@<eax>(int a1@<edi>, int a2@<esi>, int a3)
{
  sub_10010100(a1, a2);
  return a1 + 116 * a2;
}

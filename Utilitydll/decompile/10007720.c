/*
 * func-name: sub_10007720
 * func-address: 0x10007720
 * callers: 0x1000b290
 * callees: 0x10008b70
 */

int __usercall sub_10007720@<eax>(int a1@<edx>, int a2@<edi>, int a3@<esi>)
{
  sub_10008B70(a2, a3, a1);
  return a2 + 4 * a3;
}

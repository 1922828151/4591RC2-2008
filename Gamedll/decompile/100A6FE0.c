/*
 * func-name: sub_100A6FE0
 * func-address: 0x100a6fe0
 * callers: 0x10004714
 * callees: 0x1000ebc9
 */

int __cdecl sub_100A6FE0(int a1, int a2, int a3)
{
  sub_1000EBC9(a1, a2, a3);
  return a3 + 32 * ((a2 - a1) >> 5);
}

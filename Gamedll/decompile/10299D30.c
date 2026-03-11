/*
 * func-name: sub_10299D30
 * func-address: 0x10299d30
 * callers: 0x1000acc2
 * callees: 0x10004840
 */

int __cdecl sub_10299D30(int a1, int a2, int a3)
{
  sub_10004840(a1, a2, a3);
  return a3 + ((a2 - a1) >> 7 << 7);
}

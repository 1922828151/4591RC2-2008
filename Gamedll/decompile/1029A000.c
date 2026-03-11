/*
 * func-name: sub_1029A000
 * func-address: 0x1029a000
 * callers: 0x10011cf2
 * callees: 0x10002c25
 */

int __cdecl sub_1029A000(int a1, int a2, int a3)
{
  sub_10002C25(a1, a2, a3);
  return a3 - ((a2 - a1) >> 7 << 7);
}

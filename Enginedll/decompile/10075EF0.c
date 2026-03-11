/*
 * func-name: sub_10075EF0
 * func-address: 0x10075ef0
 * callers: 0x10076040, 0x100762e0, 0x100d5240
 * callees: 0x10075d00
 */

int __cdecl sub_10075EF0(int a1, int a2, int a3)
{
  sub_10075D00(a1, a2, a3);
  return a3 + 20 * ((a2 - a1) / 20);
}

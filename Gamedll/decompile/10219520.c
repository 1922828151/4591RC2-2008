/*
 * func-name: sub_10219520
 * func-address: 0x10219520
 * callers: 0x1000f99d
 * callees: 0x1000cf77
 */

int __cdecl sub_10219520(int a1, int a2, int a3)
{
  sub_1000CF77(a1, a2, a3);
  return a3 - 16 * ((a2 - a1) >> 4);
}

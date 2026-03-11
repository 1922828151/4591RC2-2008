/*
 * func-name: sub_101F2CC0
 * func-address: 0x101f2cc0
 * callers: 0x1000e6a6
 * callees: 0x1000879c
 */

int __cdecl sub_101F2CC0(int a1, int a2, int a3)
{
  sub_1000879C(a1, a2, a3);
  return a3 - 60 * ((a2 - a1) / 60);
}

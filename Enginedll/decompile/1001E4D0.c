/*
 * func-name: sub_1001E4D0
 * func-address: 0x1001e4d0
 * callers: 0x10020870
 * callees: 0x1001cad0
 */

int __cdecl sub_1001E4D0(int a1, int a2, int a3)
{
  sub_1001CAD0(a1, a2, a3);
  return a3 - 40 * ((a2 - a1) / 40);
}

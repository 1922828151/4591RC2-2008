/*
 * func-name: sub_102059E0
 * func-address: 0x102059e0
 * callers: 0x10013f84
 * callees: 0x10018ee9
 */

int __cdecl sub_102059E0(int a1, int a2, int a3)
{
  sub_10018EE9(a1, a2, a3);
  return a3 - ((a2 - a1) >> 7 << 7);
}

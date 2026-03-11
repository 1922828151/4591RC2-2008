/*
 * func-name: sub_102C4D70
 * func-address: 0x102c4d70
 * callers: none
 * callees: 0x102c32f0
 */

int __cdecl sub_102C4D70(int a1, int a2, int a3)
{
  sub_102C32F0(a1, a2, a3);
  return a3 - ((a2 - a1) >> 6 << 6);
}

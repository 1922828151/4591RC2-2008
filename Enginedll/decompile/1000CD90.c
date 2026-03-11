/*
 * func-name: sub_1000CD90
 * func-address: 0x1000cd90
 * callers: 0x100124c0, 0x10126d70
 * callees: 0x10126790
 */

int __cdecl sub_1000CD90(int a1, int a2, int a3)
{
  sub_10126790(a1, a2, a3);
  return a3 - 32 * ((a2 - a1) >> 5);
}

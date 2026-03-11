/*
 * func-name: sub_10046EE0
 * func-address: 0x10046ee0
 * callers: 0x1000dabc
 * callees: 0x10017e63
 */

int __cdecl sub_10046EE0(int a1, int a2, int a3)
{
  sub_10017E63(a1, a2, a3);
  return a3 + 80 * ((a2 - a1) / 80);
}

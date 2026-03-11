/*
 * func-name: sub_100DC110
 * func-address: 0x100dc110
 * callers: 0x100037a6
 * callees: 0x10017846
 */

int __cdecl sub_100DC110(int a1, int a2, int a3)
{
  sub_10017846(a1, a2, a3);
  return a3 - 120 * ((a2 - a1) / 120);
}

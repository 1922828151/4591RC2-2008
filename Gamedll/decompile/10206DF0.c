/*
 * func-name: sub_10206DF0
 * func-address: 0x10206df0
 * callers: 0x10002f90
 * callees: 0x10002c4d
 */

int __cdecl sub_10206DF0(int a1, int a2, int a3)
{
  sub_10002C4D(a1, a2, a3);
  return a3 - 16 * ((a2 - a1) >> 4);
}

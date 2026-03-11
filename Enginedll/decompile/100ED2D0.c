/*
 * func-name: sub_100ED2D0
 * func-address: 0x100ed2d0
 * callers: 0x100ed7f0
 * callees: 0x100ecdb0
 */

int __cdecl sub_100ED2D0(int a1, int a2, int a3)
{
  sub_100ECDB0(a1, a2, a3);
  return a3 - 124 * ((a2 - a1) / 124);
}

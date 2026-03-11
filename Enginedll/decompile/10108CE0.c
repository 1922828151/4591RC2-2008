/*
 * func-name: sub_10108CE0
 * func-address: 0x10108ce0
 * callers: 0x10109510
 * callees: 0x10108a80
 */

int __cdecl sub_10108CE0(int a1, int a2, int a3)
{
  sub_10108A80(a1, a2, a3);
  return a3 - ((a2 - a1) >> 6 << 6);
}

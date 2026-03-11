/*
 * func-name: sub_10108B70
 * func-address: 0x10108b70
 * callers: 0x10109060
 * callees: 0x10108a30
 */

int __cdecl sub_10108B70(int a1, int a2, int a3)
{
  sub_10108A30(a1, a2, a3);
  return a3 + ((a2 - a1) >> 6 << 6);
}

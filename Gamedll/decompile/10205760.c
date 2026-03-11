/*
 * func-name: sub_10205760
 * func-address: 0x10205760
 * callers: 0x10002dd3
 * callees: 0x10019e5c
 */

int __cdecl sub_10205760(int a1, int a2, int a3)
{
  sub_10019E5C(a1, a2, a3);
  return a3 + ((a2 - a1) >> 7 << 7);
}

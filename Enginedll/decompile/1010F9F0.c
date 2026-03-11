/*
 * func-name: sub_1010F9F0
 * func-address: 0x1010f9f0
 * callers: 0x10110780, 0x101121f0
 * callees: 0x1010eb60
 */

int __cdecl sub_1010F9F0(int a1, int a2, int a3)
{
  sub_1010EB60(a1, a2, a3);
  return a3 + ((a2 - a1) >> 6 << 6);
}

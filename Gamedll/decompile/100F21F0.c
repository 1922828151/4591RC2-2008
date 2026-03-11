/*
 * func-name: sub_100F21F0
 * func-address: 0x100f21f0
 * callers: 0x10002630
 * callees: 0x1000b27b
 */

int __cdecl sub_100F21F0(int a1, int a2, int a3)
{
  sub_1000B27B(a1, a2, a3);
  return a3 - ((a2 - a1) >> 6 << 6);
}

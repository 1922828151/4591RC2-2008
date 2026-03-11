/*
 * func-name: sub_100D4820
 * func-address: 0x100d4820
 * callers: 0x100d5130
 * callees: 0x100d4100
 */

int __cdecl sub_100D4820(int a1, int a2, int a3)
{
  sub_100D4100(a1, a2, a3);
  return a3 - 20 * ((a2 - a1) / 20);
}

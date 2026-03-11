/*
 * func-name: sub_100D8A50
 * func-address: 0x100d8a50
 * callers: 0x100d9280
 * callees: 0x100d7d70
 */

int __cdecl sub_100D8A50(int a1, int a2, int a3)
{
  sub_100D7D70(a1, a2, a3);
  return a3 - 36 * ((a2 - a1) / 36);
}

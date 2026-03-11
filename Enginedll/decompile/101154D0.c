/*
 * func-name: sub_101154D0
 * func-address: 0x101154d0
 * callers: 0x10115740, 0x10115d40
 * callees: 0x101121b0
 */

int __cdecl sub_101154D0(int a1, int a2, int a3)
{
  sub_101121B0(a1, a2, a3);
  return a3 + 32 * ((a2 - a1) >> 5);
}

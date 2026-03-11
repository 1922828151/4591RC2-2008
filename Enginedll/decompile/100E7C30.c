/*
 * func-name: sub_100E7C30
 * func-address: 0x100e7c30
 * callers: 0x100e7e10
 * callees: 0x1001b4d0
 */

int __cdecl sub_100E7C30(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a2; i != a1; sub_1001B4D0((_DWORD *)(i + a3 - a2), i) )
    i -= 96;
  return a3 - 96 * ((a2 - a1) / 96);
}

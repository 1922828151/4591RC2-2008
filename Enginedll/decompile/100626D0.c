/*
 * func-name: sub_100626D0
 * func-address: 0x100626d0
 * callers: 0x10062ab0
 * callees: 0x1000d9a0
 */

int __cdecl sub_100626D0(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 16 )
    sub_1000D9A0(i + a3 - a1, i);
  return a3 + 16 * ((a2 - a1) >> 4);
}

/*
 * func-name: sub_1003C010
 * func-address: 0x1003c010
 * callers: 0x1003c660, 0x1003c8d0, 0x1003cac0
 * callees: 0x1003ba10
 */

int __cdecl sub_1003C010(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 80 )
    sub_1003BA10((_DWORD *)(i + a3 - a1), i);
  return a3 + 80 * ((a2 - a1) / 80);
}

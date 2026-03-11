/*
 * func-name: sub_1015C970
 * func-address: 0x1015c970
 * callers: 0x1015ca90
 * callees: 0x1003ba10
 */

int __cdecl sub_1015C970(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a2; i != a1; sub_1003BA10((_DWORD *)(i + a3 - a2), i) )
    i -= 80;
  return a3 - 80 * ((a2 - a1) / 80);
}

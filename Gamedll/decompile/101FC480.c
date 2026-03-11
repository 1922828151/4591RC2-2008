/*
 * func-name: sub_101FC480
 * func-address: 0x101fc480
 * callers: 0x10016c93
 * callees: 0x1000d369
 */

int __cdecl sub_101FC480(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a1; i != a2; i += 84 )
    sub_1000D369(i);
  return a3 + 84 * ((a2 - a1) / 84);
}

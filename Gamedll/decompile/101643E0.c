/*
 * func-name: sub_101643E0
 * func-address: 0x101643e0
 * callers: 0x10014e3e
 * callees: 0x1001803e
 */

int __cdecl sub_101643E0(int a1, int a2, int a3)
{
  int result; // eax
  int i; // esi
  int v5; // eax

  result = ((a2 - a1) >> 2) - ((a2 - a1) >> 31);
  for ( i = ((a2 - a1) >> 2) / 2; i > 0; result = sub_1001803E(a1, i, (a2 - a1) >> 2, v5, a3) )
    v5 = *(_DWORD *)(a1 + 4 * i-- - 4);
  return result;
}

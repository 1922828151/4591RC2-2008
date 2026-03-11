/*
 * func-name: sub_10017920
 * func-address: 0x10017920
 * callers: 0x10017e30
 * callees: none
 */

char __cdecl sub_10017920(int a1, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a1 + 24) & 0xFFFFFFFE) == 0 )
    ++*a3;
  return 1;
}

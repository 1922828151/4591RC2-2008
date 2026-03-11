/*
 * func-name: sub_10219010
 * func-address: 0x10219010
 * callers: 0x100093fe
 * callees: 0x102c9d50
 */

void __cdecl sub_10219010(int a1, int a2)
{
  int i; // esi

  for ( i = a1; i != a2; i += 16 )
  {
    if ( *(_DWORD *)(i + 4) )
      operator delete(*(void **)(i + 4));
    *(_DWORD *)(i + 4) = 0;
    *(_DWORD *)(i + 8) = 0;
    *(_DWORD *)(i + 12) = 0;
  }
}

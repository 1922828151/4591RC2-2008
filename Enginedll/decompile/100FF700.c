/*
 * func-name: sub_100FF700
 * func-address: 0x100ff700
 * callers: 0x10062ab0, 0x10062b80, 0x10062f70, 0x100fb800, 0x10100210, 0x101006c0
 * callees: 0x101a2500
 */

void __cdecl sub_100FF700(int a1, int a2)
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

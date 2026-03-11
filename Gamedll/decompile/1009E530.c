/*
 * func-name: sub_1009E530
 * func-address: 0x1009e530
 * callers: 0x10010a1e
 * callees: 0x102c9d50
 */

void __cdecl sub_1009E530(int a1, int a2)
{
  int v2; // edi
  int v3; // esi

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = a1 + 104;
    do
    {
      if ( *(_DWORD *)v3 )
        operator delete(*(void **)v3);
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 4) = 0;
      *(_DWORD *)(v3 + 8) = 0;
      v2 += 184;
      v3 += 184;
    }
    while ( v2 != a2 );
  }
}

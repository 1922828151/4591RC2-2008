/*
 * func-name: sub_10052EF0
 * func-address: 0x10052ef0
 * callers: 0x100533c0, 0x100533e0, 0x10053420, 0x10053700, 0x10053800, 0x10053c50, 0x1013fff0, 0x10148a20
 * callees: 0x101a2500
 */

void __cdecl sub_10052EF0(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = a1 + 52;
    do
    {
      if ( *(_DWORD *)v3 )
        operator delete(*(void **)v3);
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 4) = 0;
      *(_DWORD *)(v3 + 8) = 0;
      if ( *(_DWORD *)(v3 - 16) )
        operator delete(*(void **)(v3 - 16));
      *(_DWORD *)(v3 - 16) = 0;
      *(_DWORD *)(v3 - 12) = 0;
      *(_DWORD *)(v3 - 8) = 0;
      if ( *(_DWORD *)(v3 - 32) )
        operator delete(*(void **)(v3 - 32));
      *(_DWORD *)(v3 - 32) = 0;
      *(_DWORD *)(v3 - 28) = 0;
      *(_DWORD *)(v3 - 24) = 0;
      v2 += 104;
      v3 += 104;
    }
    while ( v2 != a2 );
  }
}

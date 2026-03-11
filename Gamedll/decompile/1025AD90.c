/*
 * func-name: sub_1025AD90
 * func-address: 0x1025ad90
 * callers: 0x10003dff
 * callees: 0x102c9d50
 */

void __cdecl sub_1025AD90(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = a1 + 60;
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
      v2 += 80;
      v3 += 80;
    }
    while ( v2 != a2 );
  }
}

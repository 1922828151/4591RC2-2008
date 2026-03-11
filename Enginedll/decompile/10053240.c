/*
 * func-name: sub_10053240
 * func-address: 0x10053240
 * callers: 0x100535f0, 0x10053610, 0x10053650, 0x10053c50, 0x10053de0, 0x10053f70, 0x10144030, 0x10146e00, 0x10147110
 * callees: 0x101a2500
 */

void __cdecl sub_10053240(int a1, int a2)
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
      if ( *(_DWORD *)(v3 - 32) )
        operator delete(*(void **)(v3 - 32));
      *(_DWORD *)(v3 - 32) = 0;
      *(_DWORD *)(v3 - 28) = 0;
      *(_DWORD *)(v3 - 24) = 0;
      v2 += 112;
      v3 += 112;
    }
    while ( v2 != a2 );
  }
}

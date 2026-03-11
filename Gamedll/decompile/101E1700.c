/*
 * func-name: sub_101E1700
 * func-address: 0x101e1700
 * callers: 0x100016a4
 * callees: 0x102c9d50
 */

void __cdecl sub_101E1700(int a1, int a2)
{
  int v2; // ebx
  int v3; // esi

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = a1 + 68;
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
      std::string::~string((void *)(v3 - 60));
      v2 += 80;
      v3 += 80;
    }
    while ( v2 != a2 );
  }
}

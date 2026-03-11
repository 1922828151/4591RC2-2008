/*
 * func-name: sub_10206BD0
 * func-address: 0x10206bd0
 * callers: 0x1000153c
 * callees: 0x102c9d50
 */

void __cdecl sub_10206BD0(int a1, int a2)
{
  int i; // edi
  int v3; // esi
  int j; // ebp

  for ( i = a1; i != a2; i += 16 )
  {
    v3 = *(_DWORD *)(i + 4);
    if ( v3 )
    {
      for ( j = *(_DWORD *)(i + 8); v3 != j; v3 += 128 )
      {
        std::wstring::~wstring((void *)(v3 + 100));
        std::wstring::~wstring((void *)(v3 + 72));
        std::string::~string((void *)(v3 + 4));
      }
      operator delete(*(void **)(i + 4));
    }
    *(_DWORD *)(i + 4) = 0;
    *(_DWORD *)(i + 8) = 0;
    *(_DWORD *)(i + 12) = 0;
  }
}

/*
 * func-name: sub_10075F50
 * func-address: 0x10075f50
 * callers: 0x10075fe0, 0x10076000, 0x10076040, 0x100762e0, 0x100cd9c0, 0x100d5240, 0x100d5290
 * callees: 0x101a2500
 */

void __cdecl sub_10075F50(int a1, int a2)
{
  int i; // edi
  int v3; // esi
  int j; // ebx

  for ( i = a1; i != a2; i += 20 )
  {
    v3 = *(_DWORD *)(i + 4);
    if ( v3 )
    {
      for ( j = *(_DWORD *)(i + 8); v3 != j; v3 += 44 )
        std::wstring::~wstring((void *)(v3 + 12));
      operator delete(*(void **)(i + 4));
    }
    *(_DWORD *)(i + 4) = 0;
    *(_DWORD *)(i + 8) = 0;
    *(_DWORD *)(i + 12) = 0;
  }
}

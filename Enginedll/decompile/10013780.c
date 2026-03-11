/*
 * func-name: sub_10013780
 * func-address: 0x10013780
 * callers: 0x10013eb0, 0x10014bf0, 0x100316c0, 0x10031ec0, 0x10171b80, 0x101768b0, 0x101770d0
 * callees: 0x101a2500
 */

int __cdecl sub_10013780(int a1, int a2)
{
  int i; // esi
  int v3; // edi
  int j; // ebp
  int result; // eax

  for ( i = a1; i != a2; i += 84 )
  {
    v3 = *(_DWORD *)(i + 68);
    if ( v3 )
    {
      for ( j = *(_DWORD *)(i + 72); v3 != j; v3 += 28 )
        std::string::~string(v3);
      operator delete(*(void **)(i + 68));
    }
    *(_DWORD *)(i + 68) = 0;
    *(_DWORD *)(i + 72) = 0;
    *(_DWORD *)(i + 76) = 0;
    std::string::~string(i + 28);
    result = std::string::~string(i);
  }
  return result;
}

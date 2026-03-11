/*
 * func-name: sub_100A6EA0
 * func-address: 0x100a6ea0
 * callers: 0x10001b77
 * callees: 0x102c9d50
 */

void __cdecl sub_100A6EA0(int a1, int a2)
{
  int i; // esi
  char *v3; // edi
  char *j; // ebx
  char *v5; // edi
  char *k; // ebx

  for ( i = a1; i != a2; i += 32 )
  {
    v3 = *(char **)(i + 20);
    if ( v3 )
    {
      for ( j = *(char **)(i + 24); v3 != j; v3 += 28 )
        std::string::~string(v3);
      operator delete(*(void **)(i + 20));
    }
    *(_DWORD *)(i + 20) = 0;
    *(_DWORD *)(i + 24) = 0;
    *(_DWORD *)(i + 28) = 0;
    v5 = *(char **)(i + 4);
    if ( v5 )
    {
      for ( k = *(char **)(i + 8); v5 != k; v5 += 28 )
        std::string::~string(v5);
      operator delete(*(void **)(i + 4));
    }
    *(_DWORD *)(i + 4) = 0;
    *(_DWORD *)(i + 8) = 0;
    *(_DWORD *)(i + 12) = 0;
  }
}

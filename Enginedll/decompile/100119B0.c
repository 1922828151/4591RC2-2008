/*
 * func-name: sub_100119B0
 * func-address: 0x100119b0
 * callers: 0x10013460, 0x10013f40, 0x100eaad0, 0x100edc30, 0x1011b870, 0x1011d270, 0x1011f920
 * callees: 0x101a2500
 */

int __cdecl sub_100119B0(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int result; // eax

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = a1 + 48;
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
      result = std::string::~string(v2);
      v2 += 124;
      v3 += 124;
    }
    while ( v2 != a2 );
  }
  return result;
}

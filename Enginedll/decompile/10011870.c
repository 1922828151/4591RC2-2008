/*
 * func-name: sub_10011870
 * func-address: 0x10011870
 * callers: 0x10013210, 0x10013610, 0x10013650, 0x100149d0, 0x10048c00, 0x1008f580
 * callees: 0x101a2500
 */

int __cdecl sub_10011870(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int result; // eax

  v2 = a1;
  if ( a1 != a2 )
  {
    v3 = a1 + 32;
    do
    {
      if ( *(_DWORD *)v3 )
        operator delete(*(void **)v3);
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 4) = 0;
      *(_DWORD *)(v3 + 8) = 0;
      result = std::string::~string(v2);
      v2 += 44;
      v3 += 44;
    }
    while ( v2 != a2 );
  }
  return result;
}

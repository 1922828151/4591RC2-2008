/*
 * func-name: sub_1003C060
 * func-address: 0x1003c060
 * callers: 0x1003c8b0, 0x1003c8d0, 0x1003c940, 0x1003cac0, 0x1015c650, 0x1015cb30
 * callees: 0x1017a0b0, 0x101a2500
 */

int __cdecl sub_1003C060(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  int result; // eax

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
      result = sub_1017A0B0(v3 - 48);
      v2 += 80;
      v3 += 80;
    }
    while ( v2 != a2 );
  }
  return result;
}

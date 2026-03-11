/*
 * func-name: sub_10263470
 * func-address: 0x10263470
 * callers: 0x1000333c
 * callees: none
 */

int __cdecl sub_10263470(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    std::wstring::operator=(v4, v3);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v3 + 28);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v4 + 36) = *(_DWORD *)(v3 + 36);
    *(_BYTE *)(v4 + 40) = *(_BYTE *)(v3 + 40);
    v3 += 44;
    v4 += 44;
  }
  while ( v3 != a2 );
  return v4;
}

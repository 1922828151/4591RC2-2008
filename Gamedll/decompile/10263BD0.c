/*
 * func-name: sub_10263BD0
 * func-address: 0x10263bd0
 * callers: 0x10014772
 * callees: none
 */

char __cdecl sub_10263BD0(int a1, int a2, int a3)
{
  int i; // esi
  char result; // al

  for ( i = a1; i != a2; i += 44 )
  {
    std::wstring::operator=(i, a3);
    *(_DWORD *)(i + 28) = *(_DWORD *)(a3 + 28);
    *(_DWORD *)(i + 32) = *(_DWORD *)(a3 + 32);
    *(_DWORD *)(i + 36) = *(_DWORD *)(a3 + 36);
    result = *(_BYTE *)(a3 + 40);
    *(_BYTE *)(i + 40) = result;
  }
  return result;
}

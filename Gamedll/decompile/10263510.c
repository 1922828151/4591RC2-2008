/*
 * func-name: sub_10263510
 * func-address: 0x10263510
 * callers: 0x10004eee
 * callees: none
 */

char __cdecl sub_10263510(int a1, int a2)
{
  char result; // al

  if ( a1 )
  {
    std::wstring::wstring(a1, a2);
    *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
    result = *(_BYTE *)(a2 + 40);
    *(_BYTE *)(a1 + 40) = result;
  }
  return result;
}

/*
 * func-name: sub_100D8A10
 * func-address: 0x100d8a10
 * callers: 0x100d97d0
 * callees: none
 */

int __cdecl sub_100D8A10(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 36 )
  {
    std::wstring::operator=(i, a3);
    result = *(_DWORD *)(a3 + 28);
    *(_DWORD *)(i + 28) = result;
    *(_BYTE *)(i + 32) = *(_BYTE *)(a3 + 32);
  }
  return result;
}

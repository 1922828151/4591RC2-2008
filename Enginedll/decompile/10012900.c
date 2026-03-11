/*
 * func-name: sub_10012900
 * func-address: 0x10012900
 * callers: 0x10014bf0
 * callees: 0x10011510
 */

int __cdecl sub_10012900(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 84 )
  {
    std::string::operator=(i, a3);
    std::string::operator=(i + 28, a3 + 28);
    *(_DWORD *)(i + 56) = *(_DWORD *)(a3 + 56);
    *(_DWORD *)(i + 60) = *(_DWORD *)(a3 + 60);
    result = sub_10011510(i + 64, a3 + 64);
    *(_BYTE *)(i + 80) = *(_BYTE *)(a3 + 80);
  }
  return result;
}

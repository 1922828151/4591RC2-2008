/*
 * func-name: sub_100DC090
 * func-address: 0x100dc090
 * callers: 0x10016d1a
 * callees: none
 */

int __cdecl sub_100DC090(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 120 )
  {
    std::string::operator=(i, a3);
    std::string::operator=(i + 28, a3 + 28);
    std::string::operator=(i + 56, a3 + 56);
    std::string::operator=(i + 84, a3 + 84);
    result = *(_DWORD *)(a3 + 112);
    *(_DWORD *)(i + 112) = result;
    *(_DWORD *)(i + 116) = *(_DWORD *)(a3 + 116);
  }
  return result;
}

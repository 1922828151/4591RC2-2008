/*
 * func-name: sub_10108AD0
 * func-address: 0x10108ad0
 * callers: 0x10109510
 * callees: none
 */

int __cdecl sub_10108AD0(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 64 )
  {
    std::string::operator=(i, a3);
    std::string::operator=(i + 28, a3 + 28);
    result = *(_DWORD *)(a3 + 56);
    *(_DWORD *)(i + 56) = result;
    *(_BYTE *)(i + 60) = *(_BYTE *)(a3 + 60);
  }
  return result;
}

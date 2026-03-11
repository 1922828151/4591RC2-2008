/*
 * func-name: sub_10009EC0
 * func-address: 0x10009ec0
 * callers: 0x1000f8d0
 * callees: none
 */

char __cdecl sub_10009EC0(int a1, int a2, int a3)
{
  int i; // esi
  char result; // al

  for ( i = a1; i != a2; i += 96 )
  {
    *(_DWORD *)i = *(_DWORD *)a3;
    std::string::operator=(i + 4, a3 + 4);
    std::string::operator=(i + 32, a3 + 32);
    std::string::operator=(i + 60, a3 + 60);
    *(_DWORD *)(i + 88) = *(_DWORD *)(a3 + 88);
    *(_BYTE *)(i + 92) = *(_BYTE *)(a3 + 92);
    result = *(_BYTE *)(a3 + 93);
    *(_BYTE *)(i + 93) = result;
  }
  return result;
}

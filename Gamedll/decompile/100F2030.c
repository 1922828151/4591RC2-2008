/*
 * func-name: sub_100F2030
 * func-address: 0x100f2030
 * callers: 0x10013877
 * callees: none
 */

char __cdecl sub_100F2030(int a1, int a2, int a3)
{
  int i; // esi
  char result; // al

  for ( i = a1; i != a2; i += 64 )
  {
    std::string::operator=(i, a3);
    std::string::operator=(i + 28, a3 + 28);
    result = *(_BYTE *)(a3 + 56);
    *(_BYTE *)(i + 56) = result;
    *(_DWORD *)(i + 60) = *(_DWORD *)(a3 + 60);
  }
  return result;
}

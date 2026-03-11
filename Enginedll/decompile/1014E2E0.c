/*
 * func-name: sub_1014E2E0
 * func-address: 0x1014e2e0
 * callers: 0x1014f2b0
 * callees: none
 */

int __cdecl sub_1014E2E0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 17 )
  {
    std::string::operator=(i, a3);
    i[7] = a3[7];
    i[8] = a3[8];
    i[9] = a3[9];
    result = std::string::operator=(i + 10, a3 + 10);
  }
  return result;
}

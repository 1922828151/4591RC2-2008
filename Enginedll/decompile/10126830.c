/*
 * func-name: sub_10126830
 * func-address: 0x10126830
 * callers: 0x100124c0, 0x10126d70
 * callees: none
 */

int __cdecl sub_10126830(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 8 )
  {
    *i = *a3;
    result = std::string::operator=(i + 1, a3 + 1);
  }
  return result;
}

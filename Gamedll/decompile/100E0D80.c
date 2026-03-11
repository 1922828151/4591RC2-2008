/*
 * func-name: sub_100E0D80
 * func-address: 0x100e0d80
 * callers: 0x10019e39
 * callees: none
 */

int __cdecl sub_100E0D80(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 23 )
  {
    *i = *a3;
    i[1] = a3[1];
    std::string::operator=(i + 2, a3 + 2);
    std::string::operator=(i + 9, a3 + 9);
    result = std::string::operator=(i + 16, a3 + 16);
  }
  return result;
}

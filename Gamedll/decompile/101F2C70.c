/*
 * func-name: sub_101F2C70
 * func-address: 0x101f2c70
 * callers: 0x1000d6a2
 * callees: none
 */

int __cdecl sub_101F2C70(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 15 )
  {
    *i = *a3;
    std::string::operator=(i + 1, a3 + 1);
    result = std::string::operator=(i + 8, a3 + 8);
  }
  return result;
}

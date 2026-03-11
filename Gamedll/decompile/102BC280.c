/*
 * func-name: sub_102BC280
 * func-address: 0x102bc280
 * callers: 0x10012a53
 * callees: none
 */

int __cdecl sub_102BC280(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 9 )
  {
    *i = *a3;
    result = std::string::operator=(i + 1, a3 + 1);
    i[8] = a3[8];
  }
  return result;
}

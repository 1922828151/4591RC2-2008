/*
 * func-name: sub_102BC2D0
 * func-address: 0x102bc2d0
 * callers: 0x10006b09
 * callees: none
 */

int __cdecl sub_102BC2D0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 10 )
  {
    *i = *a3;
    i[1] = a3[1];
    result = std::string::operator=(i + 2, a3 + 2);
    i[9] = a3[9];
  }
  return result;
}

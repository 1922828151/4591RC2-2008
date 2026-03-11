/*
 * func-name: sub_1001B410
 * func-address: 0x1001b410
 * callers: 0x100265d0
 * callees: none
 */

int __cdecl sub_1001B410(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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

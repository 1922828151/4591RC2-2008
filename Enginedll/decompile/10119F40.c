/*
 * func-name: sub_10119F40
 * func-address: 0x10119f40
 * callers: 0x1011a5d0
 * callees: none
 */

int __cdecl sub_10119F40(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 10 )
  {
    *i = *a3;
    i[1] = a3[1];
    i[2] = a3[2];
    result = std::string::operator=(i + 3, a3 + 3);
  }
  return result;
}

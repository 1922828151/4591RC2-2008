/*
 * func-name: sub_100CE9C0
 * func-address: 0x100ce9c0
 * callers: 0x100d2120
 * callees: none
 */

int __cdecl sub_100CE9C0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 10 )
  {
    *i = *a3;
    i[1] = a3[1];
    i[2] = a3[2];
    result = std::wstring::operator=(i + 3, a3 + 3);
  }
  return result;
}

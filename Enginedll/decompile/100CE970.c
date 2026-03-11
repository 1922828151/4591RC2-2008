/*
 * func-name: sub_100CE970
 * func-address: 0x100ce970
 * callers: 0x100d3260
 * callees: none
 */

int __cdecl sub_100CE970(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 11 )
  {
    *i = *a3;
    i[1] = a3[1];
    i[2] = a3[2];
    std::wstring::operator=(i + 3, a3 + 3);
    result = a3[10];
    i[10] = result;
  }
  return result;
}

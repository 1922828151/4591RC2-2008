/*
 * func-name: sub_10297A60
 * func-address: 0x10297a60
 * callers: 0x1000e48a
 * callees: none
 */

int __cdecl sub_10297A60(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 19 )
  {
    std::wstring::operator=(i, a3);
    std::wstring::operator=(i + 7, a3 + 7);
    i[14] = a3[14];
    i[15] = a3[15];
    i[16] = a3[16];
    result = a3[17];
    i[17] = result;
    i[18] = a3[18];
  }
  return result;
}

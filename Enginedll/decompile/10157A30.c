/*
 * func-name: sub_10157A30
 * func-address: 0x10157a30
 * callers: 0x101586f0, 0x101589f0
 * callees: none
 */

int __cdecl sub_10157A30(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 9 )
  {
    *i = *a3;
    result = std::wstring::operator=(i + 1, a3 + 1);
    i[8] = a3[8];
  }
  return result;
}

/*
 * func-name: sub_102590B0
 * func-address: 0x102590b0
 * callers: 0x1000b460
 * callees: none
 */

int __cdecl sub_102590B0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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

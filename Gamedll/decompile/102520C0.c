/*
 * func-name: sub_102520C0
 * func-address: 0x102520c0
 * callers: 0x10004acf
 * callees: none
 */

int __cdecl sub_102520C0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  if ( a1 )
  {
    *a1 = *a2;
    result = std::wstring::wstring(a1 + 1, a2 + 1);
    a1[8] = a2[8];
  }
  return result;
}

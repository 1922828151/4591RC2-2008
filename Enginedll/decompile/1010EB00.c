/*
 * func-name: sub_1010EB00
 * func-address: 0x1010eb00
 * callers: 0x1010f960
 * callees: none
 */

void __cdecl sub_1010EB00(_DWORD *a1, _DWORD *a2)
{
  if ( a1 )
  {
    *a1 = *a2;
    std::wstring::wstring(a1 + 1, a2 + 1);
  }
}

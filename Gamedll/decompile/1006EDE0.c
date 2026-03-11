/*
 * func-name: sub_1006EDE0
 * func-address: 0x1006ede0
 * callers: 0x1001974a
 * callees: none
 */

int __cdecl sub_1006EDE0(_DWORD *a1, _DWORD *a2)
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

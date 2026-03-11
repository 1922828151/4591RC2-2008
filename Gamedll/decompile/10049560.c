/*
 * func-name: sub_10049560
 * func-address: 0x10049560
 * callers: 0x10003413
 * callees: none
 */

int __cdecl sub_10049560(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
  {
    *a1 = *a2;
    return std::wstring::wstring(a1 + 1, a2 + 1);
  }
  return result;
}

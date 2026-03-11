/*
 * func-name: sub_10280660
 * func-address: 0x10280660
 * callers: 0x10005295
 * callees: none
 */

_DWORD *__cdecl sub_10280660(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

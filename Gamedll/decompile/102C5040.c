/*
 * func-name: sub_102C5040
 * func-address: 0x102c5040
 * callers: 0x102c5900
 * callees: none
 */

_DWORD *__cdecl sub_102C5040(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

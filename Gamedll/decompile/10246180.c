/*
 * func-name: sub_10246180
 * func-address: 0x10246180
 * callers: 0x10001b86
 * callees: none
 */

_DWORD *__cdecl sub_10246180(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

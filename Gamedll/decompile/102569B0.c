/*
 * func-name: sub_102569B0
 * func-address: 0x102569b0
 * callers: 0x10015311
 * callees: none
 */

_DWORD *__cdecl sub_102569B0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

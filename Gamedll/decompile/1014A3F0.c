/*
 * func-name: sub_1014A3F0
 * func-address: 0x1014a3f0
 * callers: 0x1001aa82
 * callees: none
 */

_DWORD *__cdecl sub_1014A3F0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

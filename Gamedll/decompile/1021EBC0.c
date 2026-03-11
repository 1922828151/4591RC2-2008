/*
 * func-name: sub_1021EBC0
 * func-address: 0x1021ebc0
 * callers: 0x1001988f
 * callees: none
 */

_DWORD *__cdecl sub_1021EBC0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

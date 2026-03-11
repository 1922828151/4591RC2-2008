/*
 * func-name: sub_1008E9A0
 * func-address: 0x1008e9a0
 * callers: 0x10010366
 * callees: none
 */

_DWORD *__cdecl sub_1008E9A0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

/*
 * func-name: sub_1025ED70
 * func-address: 0x1025ed70
 * callers: 0x10013435
 * callees: none
 */

_DWORD *__cdecl sub_1025ED70(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

/*
 * func-name: sub_1025EE50
 * func-address: 0x1025ee50
 * callers: 0x1000a07e
 * callees: none
 */

_DWORD *__cdecl sub_1025EE50(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

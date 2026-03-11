/*
 * func-name: sub_1019BCF0
 * func-address: 0x1019bcf0
 * callers: 0x10010d7a
 * callees: none
 */

_DWORD *__cdecl sub_1019BCF0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

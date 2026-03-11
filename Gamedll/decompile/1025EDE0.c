/*
 * func-name: sub_1025EDE0
 * func-address: 0x1025ede0
 * callers: 0x100079b9
 * callees: none
 */

_DWORD *__cdecl sub_1025EDE0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

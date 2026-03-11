/*
 * func-name: sub_1004CD30
 * func-address: 0x1004cd30
 * callers: 0x1000d97c
 * callees: none
 */

_DWORD *__cdecl sub_1004CD30(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

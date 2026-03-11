/*
 * func-name: sub_100F7F90
 * func-address: 0x100f7f90
 * callers: 0x1000fe0c
 * callees: none
 */

_DWORD *__cdecl sub_100F7F90(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}

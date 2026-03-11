/*
 * func-name: sub_10233E10
 * func-address: 0x10233e10
 * callers: 0x10015208
 * callees: none
 */

_DWORD *__cdecl sub_10233E10(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

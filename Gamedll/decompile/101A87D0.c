/*
 * func-name: sub_101A87D0
 * func-address: 0x101a87d0
 * callers: 0x100148c6
 * callees: none
 */

_DWORD *__cdecl sub_101A87D0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

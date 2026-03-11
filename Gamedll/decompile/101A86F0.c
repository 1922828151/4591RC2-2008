/*
 * func-name: sub_101A86F0
 * func-address: 0x101a86f0
 * callers: 0x10017d82
 * callees: none
 */

_DWORD *__cdecl sub_101A86F0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

/*
 * func-name: sub_101A8760
 * func-address: 0x101a8760
 * callers: 0x10016e19
 * callees: none
 */

_DWORD *__cdecl sub_101A8760(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

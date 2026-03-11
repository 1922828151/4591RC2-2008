/*
 * func-name: sub_102410F0
 * func-address: 0x102410f0
 * callers: 0x100011ae
 * callees: none
 */

_DWORD *__cdecl sub_102410F0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

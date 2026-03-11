/*
 * func-name: sub_102807B0
 * func-address: 0x102807b0
 * callers: 0x10003279
 * callees: none
 */

_DWORD *__cdecl sub_102807B0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

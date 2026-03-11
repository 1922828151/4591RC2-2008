/*
 * func-name: sub_10290EF0
 * func-address: 0x10290ef0
 * callers: 0x100141be
 * callees: none
 */

_DWORD *__cdecl sub_10290EF0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

/*
 * func-name: sub_100D6A60
 * func-address: 0x100d6a60
 * callers: 0x10004011
 * callees: none
 */

_DWORD *__cdecl sub_100D6A60(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

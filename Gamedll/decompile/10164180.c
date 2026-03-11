/*
 * func-name: sub_10164180
 * func-address: 0x10164180
 * callers: 0x100183db
 * callees: none
 */

_DWORD *__cdecl sub_10164180(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

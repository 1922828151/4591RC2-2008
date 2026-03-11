/*
 * func-name: sub_1025EBA0
 * func-address: 0x1025eba0
 * callers: 0x100125d0
 * callees: none
 */

_DWORD *__cdecl sub_1025EBA0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; ++result )
  {
    if ( result )
      *result = *v3;
    ++v3;
  }
  return result;
}

/*
 * func-name: sub_1021EA50
 * func-address: 0x1021ea50
 * callers: 0x1000a76d
 * callees: none
 */

_DWORD *__cdecl sub_1021EA50(_DWORD *a1, _DWORD *a2, _DWORD *a3)
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

/*
 * func-name: sub_1004E050
 * func-address: 0x1004e050
 * callers: 0x10005817
 * callees: none
 */

_DWORD *__cdecl sub_1004E050(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

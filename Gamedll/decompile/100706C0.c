/*
 * func-name: sub_100706C0
 * func-address: 0x100706c0
 * callers: 0x1000126c
 * callees: none
 */

_DWORD *__cdecl sub_100706C0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  for ( result = a1; result != a2; result += 2 )
  {
    *result = *a3;
    result[1] = a3[1];
  }
  return result;
}

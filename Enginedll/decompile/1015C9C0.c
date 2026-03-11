/*
 * func-name: sub_1015C9C0
 * func-address: 0x1015c9c0
 * callers: 0x1015cb30
 * callees: 0x1003ba10
 */

_DWORD *__cdecl sub_1015C9C0(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *i; // esi
  _DWORD *result; // eax

  for ( i = a1; i != a2; i += 20 )
    result = sub_1003BA10(i, a3);
  return result;
}

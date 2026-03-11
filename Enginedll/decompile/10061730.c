/*
 * func-name: sub_10061730
 * func-address: 0x10061730
 * callers: 0x10062030, 0x100d2720, 0x1016ad30
 * callees: none
 */

_WORD *__cdecl sub_10061730(_WORD *a1, _WORD *a2, _WORD *a3)
{
  _WORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

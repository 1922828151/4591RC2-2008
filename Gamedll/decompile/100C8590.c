/*
 * func-name: sub_100C8590
 * func-address: 0x100c8590
 * callers: 0x10004a07
 * callees: none
 */

_WORD *__cdecl sub_100C8590(_WORD *a1, _WORD *a2, _WORD *a3)
{
  _WORD *result; // eax

  for ( result = a1; result != a2; ++result )
    *result = *a3;
  return result;
}

/*
 * func-name: sub_10061520
 * func-address: 0x10061520
 * callers: 0x10061dd0, 0x10061e30, 0x10062030
 * callees: none
 */

_WORD *__cdecl sub_10061520(_WORD *a1, _WORD *a2, _WORD *a3)
{
  _WORD *v3; // ecx
  _WORD *result; // eax

  v3 = a1;
  for ( result = a3; v3 != a2; ++result )
  {
    if ( result )
      *result = *v3;
    ++v3;
  }
  return result;
}

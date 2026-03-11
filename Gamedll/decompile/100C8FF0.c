/*
 * func-name: sub_100C8FF0
 * func-address: 0x100c8ff0
 * callers: 0x1000c3f6
 * callees: none
 */

_WORD *__stdcall sub_100C8FF0(_WORD *a1, int a2, _WORD *a3)
{
  int v3; // eax
  _WORD *i; // ecx

  v3 = a2;
  for ( i = a1; v3; ++i )
  {
    *i = *a3;
    --v3;
  }
  return &a1[a2];
}

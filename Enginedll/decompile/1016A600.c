/*
 * func-name: sub_1016A600
 * func-address: 0x1016a600
 * callers: 0x100d2720, 0x1016ad30
 * callees: none
 */

_WORD *__stdcall sub_1016A600(_WORD *a1, int a2, _WORD *a3)
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

/*
 * func-name: sub_1008EBD0
 * func-address: 0x1008ebd0
 * callers: 0x10005bfa
 * callees: none
 */

_DWORD *__stdcall sub_1008EBD0(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // eax
  _DWORD *i; // ecx

  v3 = a2;
  for ( i = a1; v3; ++i )
  {
    *i = *a3;
    --v3;
  }
  return &a1[a2];
}

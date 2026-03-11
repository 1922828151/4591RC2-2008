/*
 * func-name: sub_10291130
 * func-address: 0x10291130
 * callers: 0x10002f4a
 * callees: none
 */

_DWORD *__stdcall sub_10291130(_DWORD *a1, int a2, _DWORD *a3)
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

/*
 * func-name: sub_101A9330
 * func-address: 0x101a9330
 * callers: 0x10010460
 * callees: none
 */

_DWORD *__stdcall sub_101A9330(_DWORD *a1, int a2, _DWORD *a3)
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

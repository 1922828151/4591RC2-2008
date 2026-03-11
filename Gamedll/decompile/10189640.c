/*
 * func-name: sub_10189640
 * func-address: 0x10189640
 * callers: 0x100112a2
 * callees: none
 */

_DWORD *__stdcall sub_10189640(_DWORD *a1, int a2, _DWORD *a3)
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

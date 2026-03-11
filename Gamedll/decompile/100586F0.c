/*
 * func-name: sub_100586F0
 * func-address: 0x100586f0
 * callers: 0x10009728
 * callees: none
 */

_DWORD *__stdcall sub_100586F0(_DWORD *a1, int a2, _DWORD *a3)
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

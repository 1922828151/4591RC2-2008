/*
 * func-name: sub_1025F3F0
 * func-address: 0x1025f3f0
 * callers: 0x10005aab
 * callees: none
 */

_DWORD *__stdcall sub_1025F3F0(_DWORD *a1, int a2, _DWORD *a3)
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

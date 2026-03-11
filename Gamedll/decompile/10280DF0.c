/*
 * func-name: sub_10280DF0
 * func-address: 0x10280df0
 * callers: 0x100178dc
 * callees: none
 */

_DWORD *__stdcall sub_10280DF0(_DWORD *a1, int a2, _DWORD *a3)
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

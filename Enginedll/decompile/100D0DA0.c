/*
 * func-name: sub_100D0DA0
 * func-address: 0x100d0da0
 * callers: 0x100d3260
 * callees: 0x100cf9e0
 */

_DWORD *__stdcall sub_100D0DA0(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_100CF9E0(a1, a2, a3);
  return &a1[11 * a2];
}

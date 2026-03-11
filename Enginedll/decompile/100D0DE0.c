/*
 * func-name: sub_100D0DE0
 * func-address: 0x100d0de0
 * callers: 0x100d2120
 * callees: 0x100cfa90
 */

_DWORD *__stdcall sub_100D0DE0(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_100CFA90(a1, a2, a3);
  return &a1[10 * a2];
}

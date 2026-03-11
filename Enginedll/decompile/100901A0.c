/*
 * func-name: sub_100901A0
 * func-address: 0x100901a0
 * callers: 0x10090a60
 * callees: 0x10090030
 */

_DWORD *__stdcall sub_100901A0(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_10090030(a3, a1, a2, a3);
  return &a1[6 * a2];
}

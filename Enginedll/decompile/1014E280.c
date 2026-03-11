/*
 * func-name: sub_1014E280
 * func-address: 0x1014e280
 * callers: 0x1014f0d0
 * callees: 0x1014e120
 */

_DWORD *__cdecl sub_1014E280(char *a1, char *a2, _DWORD *a3)
{
  sub_1014E120(a1, a2, a3);
  return &a3[17 * ((a2 - a1) / 68)];
}

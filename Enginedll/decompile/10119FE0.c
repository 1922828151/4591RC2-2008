/*
 * func-name: sub_10119FE0
 * func-address: 0x10119fe0
 * callers: 0x1011a450
 * callees: 0x10119ea0
 */

_DWORD *__cdecl sub_10119FE0(char *a1, char *a2, _DWORD *a3)
{
  sub_10119EA0(a1, a2, a3);
  return &a3[10 * ((a2 - a1) / 40)];
}

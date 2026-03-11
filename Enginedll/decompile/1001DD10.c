/*
 * func-name: sub_1001DD10
 * func-address: 0x1001dd10
 * callers: 0x100264d0, 0x10026520, 0x1002c070
 * callees: 0x1001b480
 */

_DWORD *__cdecl sub_1001DD10(char *a1, char *a2, _DWORD *a3)
{
  sub_1001B480(a1, a2, a3);
  return &a3[10 * ((a2 - a1) / 40)];
}

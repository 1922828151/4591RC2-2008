/*
 * func-name: sub_1006D9A0
 * func-address: 0x1006d9a0
 * callers: 0x1006fde0, 0x10070f20
 * callees: 0x1006cb10
 */

_DWORD *__cdecl sub_1006D9A0(char *a1, char *a2, _DWORD *a3)
{
  sub_1006CB10(a1, a2, a3);
  return &a3[11 * ((a2 - a1) / 44)];
}

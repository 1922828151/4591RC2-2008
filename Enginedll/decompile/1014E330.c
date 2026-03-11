/*
 * func-name: sub_1014E330
 * func-address: 0x1014e330
 * callers: 0x1014e820
 * callees: 0x1014e180
 */

_DWORD *__cdecl sub_1014E330(char *a1, char *a2, _DWORD *a3)
{
  sub_1014E180(a1, a2, a3);
  return &a3[-17 * ((a2 - a1) / 68)];
}

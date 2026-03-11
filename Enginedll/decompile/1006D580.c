/*
 * func-name: sub_1006D580
 * func-address: 0x1006d580
 * callers: 0x1006fb80, 0x10070bb0, 0x100d1c70
 * callees: 0x1006ca80
 */

_DWORD *__cdecl sub_1006D580(char *a1, char *a2, _DWORD *a3)
{
  sub_1006CA80(a1, a2, a3);
  return &a3[10 * ((a2 - a1) / 40)];
}

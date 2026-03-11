/*
 * func-name: sub_100CF720
 * func-address: 0x100cf720
 * callers: 0x100d2910, 0x100d3e00, 0x100d3f80
 * callees: 0x100cea00
 */

_DWORD *__cdecl sub_100CF720(char *a1, char *a2, _DWORD *a3)
{
  sub_100CEA00(a1, a2, a3);
  return &a3[9 * ((a2 - a1) / 36)];
}

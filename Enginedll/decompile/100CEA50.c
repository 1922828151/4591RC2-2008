/*
 * func-name: sub_100CEA50
 * func-address: 0x100cea50
 * callers: 0x100cf780
 * callees: 0x100ce620
 */

_DWORD *__cdecl sub_100CEA50(char *a1, char *a2, _DWORD *a3)
{
  sub_100CE620(a1, a2, a3);
  return &a3[-11 * ((a2 - a1) / 44)];
}

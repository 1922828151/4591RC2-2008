/*
 * func-name: sub_100D0040
 * func-address: 0x100d0040
 * callers: 0x100786b0, 0x100d1230, 0x100ff430, 0x10146700, 0x10157d40
 * callees: 0x100785d0
 */

_DWORD *__stdcall sub_100D0040(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_100785D0(a1, a2, a3);
  return &a1[3 * a2];
}

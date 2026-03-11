/*
 * func-name: sub_1008FBE0
 * func-address: 0x1008fbe0
 * callers: 0x10090130
 * callees: 0x1008fb90
 */

_DWORD *__cdecl sub_1008FBE0(char *a1, char *a2, _DWORD *a3)
{
  sub_1008FB90(a1, a2, a3);
  return &a3[-6 * ((a2 - a1) / 24)];
}

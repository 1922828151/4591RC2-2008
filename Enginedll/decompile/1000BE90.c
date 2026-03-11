/*
 * func-name: sub_1000BE90
 * func-address: 0x1000be90
 * callers: 0x1000c5c0, 0x10010060, 0x10012f30
 * callees: 0x1000b900
 */

_DWORD *__cdecl sub_1000BE90(int a1, int a2, _DWORD *a3)
{
  sub_1000B900(a1, a2, a3);
  return &a3[35 * ((a2 - a1) / 140)];
}

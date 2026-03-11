/*
 * func-name: sub_100CEAB0
 * func-address: 0x100ceab0
 * callers: 0x100cf7b0
 * callees: 0x100ce670
 */

_DWORD *__cdecl sub_100CEAB0(int a1, int a2, _DWORD *a3)
{
  sub_100CE670(a1, a2, a3);
  return &a3[-10 * ((a2 - a1) / 40)];
}

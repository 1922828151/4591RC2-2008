/*
 * func-name: sub_10119F80
 * func-address: 0x10119f80
 * callers: 0x1011a0f0
 * callees: 0x10119ef0
 */

_DWORD *__cdecl sub_10119F80(int a1, int a2, _DWORD *a3)
{
  sub_10119EF0(a1, a2, a3);
  return &a3[-10 * ((a2 - a1) / 40)];
}

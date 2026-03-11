/*
 * func-name: sub_1001C9D0
 * func-address: 0x1001c9d0
 * callers: 0x1001eba0
 * callees: 0x1001b5c0
 */

_DWORD *__cdecl sub_1001C9D0(int a1, int a2, _DWORD *a3)
{
  sub_1001B5C0(a1, a2, a3);
  return &a3[-10 * ((a2 - a1) / 40)];
}

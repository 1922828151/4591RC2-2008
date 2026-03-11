/*
 * func-name: sub_10063F70
 * func-address: 0x10063f70
 * callers: 0x10064000
 * callees: 0x10063f00
 */

_DWORD *__cdecl sub_10063F70(int a1, int a2, _DWORD *a3)
{
  sub_10063F00(a1, a2, a3);
  return &a3[-35 * ((a2 - a1) / 140)];
}

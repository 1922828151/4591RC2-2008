/*
 * func-name: sub_10157AD0
 * func-address: 0x10157ad0
 * callers: 0x10157b30
 * callees: 0x101579e0
 */

_DWORD *__cdecl sub_10157AD0(int a1, int a2, _DWORD *a3)
{
  sub_101579E0(a1, a2, a3);
  return &a3[-9 * ((a2 - a1) / 36)];
}

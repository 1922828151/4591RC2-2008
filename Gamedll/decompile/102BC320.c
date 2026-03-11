/*
 * func-name: sub_102BC320
 * func-address: 0x102bc320
 * callers: 0x1000ffa1
 * callees: 0x100027cf
 */

int __cdecl sub_102BC320(int a1, int a2, int a3)
{
  sub_100027CF(a1, a2, a3);
  return a3 - 36 * ((a2 - a1) / 36);
}

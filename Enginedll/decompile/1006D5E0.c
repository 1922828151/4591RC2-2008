/*
 * func-name: sub_1006D5E0
 * func-address: 0x1006d5e0
 * callers: 0x1006fbf0, 0x10070d30
 * callees: 0x1006cad0
 */

int __cdecl sub_1006D5E0(int a1, int a2, int a3)
{
  sub_1006CAD0(a1, a2, a3);
  return a3 + 36 * ((a2 - a1) / 36);
}

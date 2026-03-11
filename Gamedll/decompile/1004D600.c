/*
 * func-name: sub_1004D600
 * func-address: 0x1004d600
 * callers: 0x10003170
 * callees: 0x1000dbc0
 */

int __cdecl sub_1004D600(int a1, int a2, int a3)
{
  sub_1000DBC0(a1, a2, a3);
  return a3 + 56 * ((a2 - a1) / 56);
}

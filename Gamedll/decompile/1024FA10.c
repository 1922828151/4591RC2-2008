/*
 * func-name: sub_1024FA10
 * func-address: 0x1024fa10
 * callers: 0x10002eaf
 * callees: 0x10019303
 */

int __cdecl sub_1024FA10(int a1, int a2, int a3)
{
  sub_10019303(a1, a2, a3);
  return a3 - 4 * ((a2 - a1) >> 2);
}

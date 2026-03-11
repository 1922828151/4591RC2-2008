/*
 * func-name: sub_100A4190
 * func-address: 0x100a4190
 * callers: 0x1000786a
 * callees: 0x10018b29
 */

int __cdecl sub_100A4190(int a1, int a2, int a3)
{
  sub_10018B29(a1, a2, a3);
  return a3 + ((a2 - a1) >> 6 << 6);
}

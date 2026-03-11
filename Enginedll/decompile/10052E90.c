/*
 * func-name: sub_10052E90
 * func-address: 0x10052e90
 * callers: 0x10053210, 0x10053650, 0x10053de0, 0x10053f70
 * callees: 0x10052d30
 */

int __cdecl sub_10052E90(char *a1, char *a2, int a3)
{
  sub_10052D30(a1, a2, a3);
  return a3 + 112 * ((a2 - a1) / 112);
}

/*
 * func-name: sub_10090160
 * func-address: 0x10090160
 * callers: 0x10090820
 * callees: 0x10090000
 */

char *__stdcall sub_10090160(char *a1, int a2, char *a3)
{
  sub_10090000(a3, a1, a2, a3);
  return &a1[32 * a2];
}

/*
 * func-name: sub_10078640
 * func-address: 0x10078640
 * callers: 0x10078950
 * callees: 0x10078610
 */

char *__stdcall sub_10078640(char *a1, int a2, char *a3)
{
  sub_10078610(a3, a1, a2, a3);
  return &a1[64 * a2];
}

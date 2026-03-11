/*
 * func-name: sub_1000DB50
 * func-address: 0x1000db50
 * callers: 0x1000dc90
 * callees: 0x1000cd00
 */

char *__stdcall sub_1000DB50(CREControl *a1, int a2, int a3)
{
  sub_1000CD00(a1, a2, a3);
  return (char *)a1 + 28 * a2;
}

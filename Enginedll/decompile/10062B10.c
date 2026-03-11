/*
 * func-name: sub_10062B10
 * func-address: 0x10062b10
 * callers: 0x10062b80
 * callees: 0x10062710
 */

char *__stdcall sub_10062B10(CREControl *a1, int a2, int a3)
{
  sub_10062710(a1, a2, a3);
  return (char *)a1 + 16 * a2;
}

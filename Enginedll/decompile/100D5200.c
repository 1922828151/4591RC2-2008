/*
 * func-name: sub_100D5200
 * func-address: 0x100d5200
 * callers: 0x100d5290
 * callees: 0x100d5160
 */

char *__stdcall sub_100D5200(CREControl *a1, int a2, int a3)
{
  sub_100D5160(a1, a2, a3);
  return (char *)a1 + 20 * a2;
}

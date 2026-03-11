/*
 * func-name: sub_100E7ED0
 * func-address: 0x100e7ed0
 * callers: 0x100e8600
 * callees: 0x100e7d70
 */

char *__stdcall sub_100E7ED0(CREControl *a1, int a2, int a3)
{
  sub_100E7D70(a1, a2, a3);
  return (char *)a1 + 32 * a2;
}

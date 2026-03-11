/*
 * func-name: sub_100E7E90
 * func-address: 0x100e7e90
 * callers: 0x100e8310
 * callees: 0x100e7ce0
 */

char *__stdcall sub_100E7E90(CREControl *a1, int a2, int a3)
{
  sub_100E7CE0(a1, a2, a3);
  return (char *)a1 + 96 * a2;
}

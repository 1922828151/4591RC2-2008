/*
 * func-name: sub_10048B90
 * func-address: 0x10048b90
 * callers: 0x10048c00
 * callees: 0x10048ab0
 */

char *__stdcall sub_10048B90(CREControl *a1, int a2, int a3)
{
  sub_10048AB0(a1, a2, a3);
  return (char *)a1 + 44 * a2;
}

/*
 * func-name: sub_10100230
 * func-address: 0x10100230
 * callers: 0x101006c0
 * callees: 0x100ffd40
 */

char *__stdcall sub_10100230(CREControl *a1, int a2, int a3)
{
  sub_100FFD40(a1, a2, a3);
  return (char *)a1 + 16 * a2;
}

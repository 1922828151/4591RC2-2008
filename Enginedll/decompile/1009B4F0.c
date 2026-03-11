/*
 * func-name: sub_1009B4F0
 * func-address: 0x1009b4f0
 * callers: 0x1009b880
 * callees: 0x1009b420
 */

char *__stdcall sub_1009B4F0(CREControl *a1, int a2, int a3)
{
  sub_1009B420(a1, a2, a3);
  return (char *)a1 + 104 * a2;
}

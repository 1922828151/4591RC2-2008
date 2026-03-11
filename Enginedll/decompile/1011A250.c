/*
 * func-name: sub_1011A250
 * func-address: 0x1011a250
 * callers: 0x1011a5d0
 * callees: 0x1011a120
 */

char *__stdcall sub_1011A250(CREControl *a1, int a2, _DWORD *a3)
{
  sub_1011A120(a1, a2, a3);
  return (char *)a1 + 40 * a2;
}

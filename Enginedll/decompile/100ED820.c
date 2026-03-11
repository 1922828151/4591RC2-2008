/*
 * func-name: sub_100ED820
 * func-address: 0x100ed820
 * callers: 0x100ed940
 * callees: 0x100ed5c0
 */

char *__stdcall sub_100ED820(CREControl *a1, int a2, _DWORD *a3)
{
  sub_100ED5C0(a1, a2, a3);
  return (char *)a1 + 80 * a2;
}

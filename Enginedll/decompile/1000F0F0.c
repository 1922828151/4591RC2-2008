/*
 * func-name: sub_1000F0F0
 * func-address: 0x1000f0f0
 * callers: 0x100124c0
 * callees: 0x1000cf50
 */

char *__stdcall sub_1000F0F0(CREControl *a1, int a2, _DWORD *a3)
{
  sub_1000CF50(a1, a2, a3);
  return (char *)a1 + 32 * a2;
}

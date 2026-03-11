/*
 * func-name: sub_100F5F30
 * func-address: 0x100f5f30
 * callers: 0x1003e4b0, 0x10062270, 0x100f6bc0
 * callees: 0x10061930
 */

_DWORD *__stdcall sub_100F5F30(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_10061930(a1, a2, a3);
  return &a1[4 * a2];
}

/*
 * func-name: sub_10002780
 * func-address: 0x10002780
 * callers: 0x100024d0
 * callees: 0x10005660
 */

_DWORD *__stdcall sub_10002780(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  a1[3] = a2[3];
  a1[4] = a2[4];
  a1[5] = a2[5];
  a1[6] = a2[6];
  sub_10005660(a1 + 7);
  return a1;
}

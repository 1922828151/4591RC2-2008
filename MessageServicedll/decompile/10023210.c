/*
 * func-name: sub_10023210
 * func-address: 0x10023210
 * callers: 0x100230b0
 * callees: 0x100228c0
 */

_DWORD *__stdcall sub_10023210(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_100228C0(a2 + 1, a1 + 1);
  return a1;
}

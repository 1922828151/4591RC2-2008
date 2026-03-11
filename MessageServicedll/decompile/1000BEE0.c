/*
 * func-name: sub_1000BEE0
 * func-address: 0x1000bee0
 * callers: 0x1000bb00
 * callees: 0x100031b0
 */

_DWORD *__stdcall sub_1000BEE0(_DWORD *a1, int a2)
{
  *a1 = *(_DWORD *)a2;
  sub_100031B0((_BYTE *)(a2 + 4), (int)(a1 + 1));
  return a1;
}

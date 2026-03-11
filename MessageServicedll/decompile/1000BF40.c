/*
 * func-name: sub_1000BF40
 * func-address: 0x1000bf40
 * callers: 0x1000bc30
 * callees: 0x1000c110
 */

_DWORD *__stdcall sub_1000BF40(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_1000C110(a1 + 1);
  return a1;
}

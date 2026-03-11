/*
 * func-name: sub_10003150
 * func-address: 0x10003150
 * callers: 0x100030a0
 * callees: 0x100031b0
 */

_WORD *__stdcall sub_10003150(_WORD *a1, _WORD *a2)
{
  *a1 = *a2;
  sub_100031B0(a1 + 2);
  return a1;
}

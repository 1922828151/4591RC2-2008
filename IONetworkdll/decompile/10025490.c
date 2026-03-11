/*
 * func-name: sub_10025490
 * func-address: 0x10025490
 * callers: 0x10025230
 * callees: 0x10024ca0
 */

_WORD *__stdcall sub_10025490(_WORD *a1, int a2)
{
  *a1 = *(_WORD *)a2;
  sub_10024CA0((_DWORD *)(a2 + 4), (int)(a1 + 2));
  return a1;
}

/*
 * func-name: sub_100EBE00
 * func-address: 0x100ebe00
 * callers: 0x10019d5d
 * callees: 0x10014eac, 0x10015852, 0x1001a906, 0x102c9d86
 */

_DWORD *__thiscall sub_100EBE00(_DWORD *this, int a2)
{
  int *v3; // eax
  int v5; // [esp-18h] [ebp-3Ch]
  int v6; // [esp-10h] [ebp-34h]
  int *v7; // [esp-8h] [ebp-2Ch]
  _DWORD v8[9]; // [esp+0h] [ebp-24h] BYREF

  v8[5] = v8;
  v8[4] = this;
  v3 = (int *)sub_10015852();
  this[1] = v3;
  this[2] = 0;
  v7 = *(int **)(a2 + 4);
  v6 = *v7;
  v5 = *v3;
  v8[8] = 0;
  sub_1001A906((int)this, v5, a2, v6, a2, (int)v7, a2);
  return this;
}

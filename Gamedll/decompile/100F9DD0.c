/*
 * func-name: sub_100F9DD0
 * func-address: 0x100f9dd0
 * callers: 0x1000b57d
 * callees: 0x10009651, 0x1000ecf5, 0x1001760c, 0x102c9d86
 */

_DWORD *__thiscall sub_100F9DD0(_DWORD *this, int a2)
{
  int *v3; // eax
  int v5; // [esp-18h] [ebp-3Ch]
  int v6; // [esp-10h] [ebp-34h]
  int *v7; // [esp-8h] [ebp-2Ch]
  _DWORD v8[9]; // [esp+0h] [ebp-24h] BYREF

  v8[5] = v8;
  v8[4] = this;
  v3 = (int *)sub_10009651();
  this[1] = v3;
  this[2] = 0;
  v7 = *(int **)(a2 + 4);
  v6 = *v7;
  v5 = *v3;
  v8[8] = 0;
  sub_1000ECF5((int)this, v5, a2, v6, a2, (int)v7, a2);
  return this;
}

/*
 * func-name: sub_100EDEF0
 * func-address: 0x100edef0
 * callers: 0x100197e0
 * callees: 0x10007b03, 0x100105f0, 0x10013601, 0x102c9d86
 */

_DWORD *__thiscall sub_100EDEF0(_DWORD *this, int a2)
{
  int *v3; // eax
  int v5; // [esp-18h] [ebp-3Ch]
  int v6; // [esp-10h] [ebp-34h]
  int *v7; // [esp-8h] [ebp-2Ch]
  _DWORD v8[9]; // [esp+0h] [ebp-24h] BYREF

  v8[5] = v8;
  v8[4] = this;
  v3 = (int *)sub_10007B03();
  this[1] = v3;
  this[2] = 0;
  v7 = *(int **)(a2 + 4);
  v6 = *v7;
  v5 = *v3;
  v8[8] = 0;
  sub_10013601((int)this, v5, a2, v6, a2, (int)v7, a2);
  return this;
}

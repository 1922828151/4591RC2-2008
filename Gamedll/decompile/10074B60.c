/*
 * func-name: sub_10074B60
 * func-address: 0x10074b60
 * callers: 0x10010d93
 * callees: 0x100013d9, 0x10004831, 0x10010848, 0x102c9d86
 */

_DWORD *__thiscall sub_10074B60(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD v5[9]; // [esp+0h] [ebp-24h] BYREF

  v5[5] = v5;
  v5[4] = this;
  v3 = sub_100013D9();
  this[1] = v3;
  *(_BYTE *)(v3 + 21) = 1;
  *(_DWORD *)(this[1] + 4) = this[1];
  *(_DWORD *)this[1] = this[1];
  *(_DWORD *)(this[1] + 8) = this[1];
  this[2] = 0;
  v5[8] = 0;
  sub_10010848(a2);
  return this;
}

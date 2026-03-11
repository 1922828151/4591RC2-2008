/*
 * func-name: sub_10074EF0
 * func-address: 0x10074ef0
 * callers: 0x1001938f
 * callees: 0x1000362a, 0x10015401, 0x10016ce8, 0x102c9d86
 */

_DWORD *__thiscall sub_10074EF0(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD v5[9]; // [esp+0h] [ebp-24h] BYREF

  v5[5] = v5;
  v5[4] = this;
  v3 = sub_10015401();
  this[1] = v3;
  *(_BYTE *)(v3 + 17) = 1;
  *(_DWORD *)(this[1] + 4) = this[1];
  *(_DWORD *)this[1] = this[1];
  *(_DWORD *)(this[1] + 8) = this[1];
  this[2] = 0;
  v5[8] = 0;
  sub_1000362A(a2);
  return this;
}

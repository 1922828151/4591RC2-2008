/*
 * func-name: sub_1005B360
 * func-address: 0x1005b360
 * callers: 0x1005ddc0
 * callees: 0x10057610, 0x1005a090, 0x1005a110, 0x101a2522
 */

_DWORD *__thiscall sub_1005B360(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  v5[4] = v5;
  v5[3] = this;
  v3 = sub_10057610();
  this[1] = v3;
  *((_BYTE *)v3 + 45) = 1;
  *(_DWORD *)(this[1] + 4) = this[1];
  *(_DWORD *)this[1] = this[1];
  *(_DWORD *)(this[1] + 8) = this[1];
  this[2] = 0;
  v5[7] = 0;
  sub_1005A090(this, a2);
  return this;
}

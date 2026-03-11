/*
 * func-name: sub_1006FF40
 * func-address: 0x1006ff40
 * callers: 0x100710d0
 * callees: 0x1006cf30, 0x1006f8f0, 0x1006f970, 0x101a2522
 */

_DWORD *__thiscall sub_1006FF40(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  v5[4] = v5;
  v5[3] = this;
  v3 = sub_1006CF30();
  this[1] = v3;
  *((_BYTE *)v3 + 81) = 1;
  *(_DWORD *)(this[1] + 4) = this[1];
  *(_DWORD *)this[1] = this[1];
  *(_DWORD *)(this[1] + 8) = this[1];
  this[2] = 0;
  v5[7] = 0;
  sub_1006F8F0(this, a2);
  return this;
}

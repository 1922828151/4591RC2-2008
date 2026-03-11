/*
 * func-name: sub_1002C4A0
 * func-address: 0x1002c4a0
 * callers: 0x10030270
 * callees: 0x1001daf0, 0x10026f20, 0x1002dc70, 0x101a2522
 */

_DWORD *__thiscall sub_1002C4A0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  v5[4] = v5;
  v5[3] = this;
  v3 = sub_1001DAF0();
  this[1] = v3;
  *((_BYTE *)v3 + 49) = 1;
  *(_DWORD *)(this[1] + 4) = this[1];
  *(_DWORD *)this[1] = this[1];
  *(_DWORD *)(this[1] + 8) = this[1];
  this[2] = 0;
  v5[7] = 0;
  sub_10026F20(this, a2);
  return this;
}

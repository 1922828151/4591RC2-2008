/*
 * func-name: sub_1005B2D0
 * func-address: 0x1005b2d0
 * callers: 0x1005ddc0
 * callees: 0x100575d0, 0x10059f40, 0x1005b670, 0x101a2522
 */

_DWORD *__thiscall sub_1005B2D0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  v5[4] = v5;
  v5[3] = this;
  v3 = sub_100575D0();
  this[1] = v3;
  *((_BYTE *)v3 + 53) = 1;
  *(_DWORD *)(this[1] + 4) = this[1];
  *(_DWORD *)this[1] = this[1];
  *(_DWORD *)(this[1] + 8) = this[1];
  this[2] = 0;
  v5[7] = 0;
  sub_10059F40(this, a2);
  return this;
}

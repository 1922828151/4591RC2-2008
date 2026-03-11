/*
 * func-name: sub_100D0D10
 * func-address: 0x100d0d10
 * callers: 0x100d2aa0
 * callees: 0x100ced70, 0x100d02a0, 0x100d0320, 0x101a2522
 */

_DWORD *__thiscall sub_100D0D10(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD v5[8]; // [esp+0h] [ebp-20h] BYREF

  v5[4] = v5;
  v5[3] = this;
  v3 = sub_100CED70();
  this[1] = v3;
  *((_BYTE *)v3 + 21) = 1;
  *(_DWORD *)(this[1] + 4) = this[1];
  *(_DWORD *)this[1] = this[1];
  *(_DWORD *)(this[1] + 8) = this[1];
  this[2] = 0;
  v5[7] = 0;
  sub_100D02A0(this, a2);
  return this;
}

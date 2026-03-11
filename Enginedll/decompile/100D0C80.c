/*
 * func-name: sub_100D0C80
 * func-address: 0x100d0c80
 * callers: 0x100d2aa0
 * callees: 0x100ced70, 0x100d0150, 0x100d1c30, 0x101a2522
 */

_DWORD *__thiscall sub_100D0C80(_DWORD *this, int a2)
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
  sub_100D0150(this, a2);
  return this;
}

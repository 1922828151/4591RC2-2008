/*
 * func-name: sub_10075070
 * func-address: 0x10075070
 * callers: 0x10075e80
 * callees: 0x10057610, 0x100ced70
 */

_DWORD *__thiscall sub_10075070(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // eax

  v2 = sub_10057610();
  this[1] = v2;
  *((_BYTE *)v2 + 45) = 1;
  *(_DWORD *)(this[1] + 4) = this[1];
  *(_DWORD *)this[1] = this[1];
  *(_DWORD *)(this[1] + 8) = this[1];
  this[2] = 0;
  v3 = sub_100CED70(this + 3);
  this[4] = v3;
  *(_BYTE *)(v3 + 21) = 1;
  *(_DWORD *)(this[4] + 4) = this[4];
  *(_DWORD *)this[4] = this[4];
  *(_DWORD *)(this[4] + 8) = this[4];
  this[5] = 0;
  return this;
}

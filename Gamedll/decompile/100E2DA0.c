/*
 * func-name: sub_100E2DA0
 * func-address: 0x100e2da0
 * callers: 0x1000c090
 * callees: 0x1001165d, 0x10019556
 */

_DWORD *__thiscall sub_100E2DA0(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax

  v2 = this + 1;
  *this = &CInputHandler::`vftable';
  v3 = sub_10019556();
  v2[1] = v3;
  *(_BYTE *)(v3 + 33) = 1;
  *(_DWORD *)(v2[1] + 4) = v2[1];
  *(_DWORD *)v2[1] = v2[1];
  *(_DWORD *)(v2[1] + 8) = v2[1];
  v2[2] = 0;
  v4 = sub_1001165D();
  this[5] = v4;
  *(_BYTE *)(v4 + 21) = 1;
  *(_DWORD *)(this[5] + 4) = this[5];
  *(_DWORD *)this[5] = this[5];
  *(_DWORD *)(this[5] + 8) = this[5];
  this[6] = 0;
  return this;
}

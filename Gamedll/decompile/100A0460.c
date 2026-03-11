/*
 * func-name: sub_100A0460
 * func-address: 0x100a0460
 * callers: 0x10002653
 * callees: 0x1000166d, 0x1001080c
 */

_DWORD *__thiscall sub_100A0460(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // eax
  int v4; // eax

  v2 = this + 2;
  *this = &FXWrapperManager::`vftable';
  this[1] = 0;
  v3 = sub_1001080C();
  v2[1] = v3;
  *(_BYTE *)(v3 + 21) = 1;
  *(_DWORD *)(v2[1] + 4) = v2[1];
  *(_DWORD *)v2[1] = v2[1];
  *(_DWORD *)(v2[1] + 8) = v2[1];
  v2[2] = 0;
  v4 = sub_1000166D();
  this[6] = v4;
  *(_BYTE *)(v4 + 45) = 1;
  *(_DWORD *)(this[6] + 4) = this[6];
  *(_DWORD *)this[6] = this[6];
  *(_DWORD *)(this[6] + 8) = this[6];
  this[7] = 0;
  this[8] = -1;
  return this;
}

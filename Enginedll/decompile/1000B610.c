/*
 * func-name: sub_1000B610
 * func-address: 0x1000b610
 * callers: 0x1000cde0, 0x10010f10, 0x10063fd0, 0x100640a0
 * callees: none
 */

_DWORD *__thiscall sub_1000B610(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  qmemcpy(this, a2, 0x61u);
  this[25] = &Volume::`vftable';
  this[26] = a2[26];
  this[27] = a2[27];
  this[28] = a2[28];
  this[25] = &BBox::`vftable';
  this[29] = a2[29];
  this[30] = a2[30];
  this[31] = a2[31];
  this[32] = a2[32];
  this[33] = a2[33];
  this[34] = a2[34];
  return result;
}

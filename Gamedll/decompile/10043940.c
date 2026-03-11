/*
 * func-name: sub_10043940
 * func-address: 0x10043940
 * callers: 0x100155aa
 * callees: none
 */

_DWORD *__thiscall sub_10043940(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = &Volume::`vftable';
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  *this = &BBox::`vftable';
  this[4] = a2[4];
  this[5] = a2[5];
  this[6] = a2[6];
  this[7] = a2[7];
  this[8] = a2[8];
  this[9] = a2[9];
  return result;
}

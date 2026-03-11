/*
 * func-name: sub_100ECC60
 * func-address: 0x100ecc60
 * callers: 0x100ed330, 0x100ed5c0, 0x100ed940
 * callees: 0x10022040
 */

_DWORD *__thiscall sub_100ECC60(_DWORD *this, _DWORD *a2)
{
  sub_10022040(this, (int)a2);
  this[4] = a2[4];
  this[5] = a2[5];
  this[6] = a2[6];
  this[7] = a2[7];
  this[8] = a2[8];
  this[9] = a2[9];
  this[10] = &Volume::`vftable';
  this[11] = a2[11];
  this[12] = a2[12];
  this[13] = a2[13];
  this[10] = &BBox::`vftable';
  this[14] = a2[14];
  this[15] = a2[15];
  this[16] = a2[16];
  this[17] = a2[17];
  this[18] = a2[18];
  this[19] = a2[19];
  return this;
}

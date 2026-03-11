/*
 * func-name: sub_1009D890
 * func-address: 0x1009d890
 * callers: 0x10126010
 * callees: 0x10136290
 */

_DWORD *__thiscall sub_1009D890(_DWORD *this, int a2)
{
  *this = &CBaseMap8::`vftable';
  Texture::Texture((Texture *)(this + 1));
  this[44] = a2;
  this[43] = a2;
  this[42] = a2;
  this[40] = 0;
  *this = &CFalloffMap::`vftable';
  this[41] = 28;
  return this;
}

/*
 * func-name: sub_1009D850
 * func-address: 0x1009d850
 * callers: 0x10126010
 * callees: 0x10136290
 */

_DWORD *__thiscall sub_1009D850(_DWORD *this)
{
  *this = &CBaseMap8::`vftable';
  Texture::Texture((Texture *)(this + 1));
  this[41] = 21;
  this[40] = 0;
  *this = &CNormalizerMap8::`vftable';
  this[42] = 256;
  return this;
}

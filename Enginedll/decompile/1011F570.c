/*
 * func-name: sub_1011F570
 * func-address: 0x1011f570
 * callers: 0x1011abe0
 * callees: 0x10001720, 0x100108d0
 */

_DWORD *__thiscall sub_1011F570(_DWORD *this)
{
  ISave::ISave((ISave *)this);
  *this = &XMLSave::`vftable';
  XMLSystem::XMLSystem((XMLSystem *)(this + 24));
  this[47] = 0;
  this[48] = 0;
  this[23] = 0;
  return this;
}

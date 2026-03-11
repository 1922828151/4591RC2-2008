/*
 * func-name: sub_100408A0
 * func-address: 0x100408a0
 * callers: 0x100ef520, 0x1011aa80, 0x1011aff0
 * callees: 0x10001720
 */

_DWORD *__thiscall sub_100408A0(_DWORD *this)
{
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  *((_BYTE *)this + 44) = 0;
  *this = &XMLLoad::`vftable';
  std::string::string(this + 14);
  XMLSystem::XMLSystem((XMLSystem *)(this + 21));
  this[44] = 0;
  this[45] = 0;
  return this;
}

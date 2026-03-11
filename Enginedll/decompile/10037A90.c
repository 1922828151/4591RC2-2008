/*
 * func-name: sub_10037A90
 * func-address: 0x10037a90
 * callers: none
 * callees: 0x10001720, 0x1003bee0
 */

_DWORD *__thiscall sub_10037A90(_DWORD *this)
{
  char v3; // [esp+Bh] [ebp-11h] BYREF
  _DWORD *v4; // [esp+Ch] [ebp-10h]
  int v5; // [esp+18h] [ebp-4h]

  v4 = this;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[8] = 0;
  this[9] = 0;
  this[10] = 0;
  *((_BYTE *)this + 44) = 0;
  v5 = 1;
  *this = &SubareaXMLLoad::`vftable';
  std::string::string(this + 14);
  XMLSystem::XMLSystem((XMLSystem *)(this + 21));
  LOBYTE(v5) = 3;
  sub_1003BEE0(&v3, &v3);
  this[44] = 0;
  this[45] = 0;
  return this;
}

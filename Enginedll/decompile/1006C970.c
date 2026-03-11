/*
 * func-name: sub_1006C970
 * func-address: 0x1006c970
 * callers: 0x1006d4e0
 * callees: none
 */

_DWORD *__thiscall sub_1006C970(_DWORD *this, _DWORD *a2)
{
  std::string::string(this, a2);
  this[7] = a2[7];
  this[8] = a2[8];
  this[9] = a2[9];
  std::string::string(this + 10, a2 + 10);
  return this;
}

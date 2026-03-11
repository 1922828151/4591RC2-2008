/*
 * func-name: sub_1020E3F0
 * func-address: 0x1020e3f0
 * callers: 0x10008c88
 * callees: none
 */

_DWORD *__thiscall sub_1020E3F0(_DWORD *this, _DWORD *a2)
{
  *this = *a2;
  std::string::string(this + 1, a2 + 1);
  this[8] = a2[8];
  std::string::string(this + 9, a2 + 9);
  this[16] = a2[16];
  this[17] = a2[17];
  return this;
}

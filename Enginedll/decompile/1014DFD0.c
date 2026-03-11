/*
 * func-name: sub_1014DFD0
 * func-address: 0x1014dfd0
 * callers: 0x1014e390, 0x1014e850, 0x1014f2b0
 * callees: none
 */

_DWORD *__thiscall sub_1014DFD0(_DWORD *this, _DWORD *a2)
{
  std::string::string(this, a2);
  this[7] = a2[7];
  this[8] = a2[8];
  this[9] = a2[9];
  std::string::string(this + 10, a2 + 10);
  return this;
}

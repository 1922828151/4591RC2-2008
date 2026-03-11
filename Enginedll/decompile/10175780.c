/*
 * func-name: sub_10175780
 * func-address: 0x10175780
 * callers: 0x10174d80
 * callees: none
 */

_DWORD *__thiscall sub_10175780(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  *this = *a2;
  this[1] = *a3;
  std::string::string(this + 2, a3 + 1);
  this[9] = a3[8];
  this[10] = a3[9];
  return this;
}

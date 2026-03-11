/*
 * func-name: sub_100CE470
 * func-address: 0x100ce470
 * callers: 0x100d35b0, 0x100d36c0, 0x100d37d0, 0x100d38e0, 0x100d39f0, 0x100d3b00
 * callees: none
 */

_DWORD *__thiscall sub_100CE470(_DWORD *this, int a2, _DWORD *a3)
{
  std::string::string(this, a2);
  this[7] = *a3;
  this[8] = a3[1];
  this[9] = a3[2];
  std::string::string(this + 10, a3 + 3);
  return this;
}

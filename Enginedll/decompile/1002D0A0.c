/*
 * func-name: sub_1002D0A0
 * func-address: 0x1002d0a0
 * callers: 0x10031570, 0x10174d80
 * callees: 0x10020910, 0x101a2500
 */

int __thiscall sub_1002D0A0(_DWORD *this)
{
  _DWORD *v2; // esi

  v2 = this + 7;
  sub_10020910(this + 7);
  operator delete((void *)v2[1]);
  v2[1] = 0;
  return std::string::~string(this);
}

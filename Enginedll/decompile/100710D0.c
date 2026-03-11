/*
 * func-name: sub_100710D0
 * func-address: 0x100710d0
 * callers: 0x10071230, 0x100751a0
 * callees: 0x1000f380, 0x1006ff40
 */

_DWORD *__thiscall sub_100710D0(_DWORD *this, int a2)
{
  *this = &PropertyHolder::`vftable';
  sub_1006FF40(this + 1, a2 + 4);
  std::string::string(this + 4, a2 + 16);
  sub_1000F380((int)(this + 11), a2 + 44);
  return this;
}

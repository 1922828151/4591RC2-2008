/*
 * func-name: sub_1009B6E0
 * func-address: 0x1009b6e0
 * callers: 0x10099a20
 * callees: 0x1009b530
 */

_BYTE *__thiscall sub_1009B6E0(_BYTE *this, int a2)
{
  sub_1009B530((int)this, (_DWORD *)a2);
  std::string::operator=(this + 16, a2 + 16);
  std::string::operator=(this + 44, a2 + 44);
  this[72] = *(_BYTE *)(a2 + 72);
  std::string::operator=(this + 76, a2 + 76);
  return this;
}

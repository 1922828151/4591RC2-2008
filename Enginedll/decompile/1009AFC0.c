/*
 * func-name: sub_1009AFC0
 * func-address: 0x1009afc0
 * callers: 0x10097910, 0x10099fc0, 0x1009b080, 0x1009b420, 0x1009b880
 * callees: 0x1009ade0
 */

_BYTE *__thiscall sub_1009AFC0(_BYTE *this, int a2)
{
  sub_1009ADE0((int)this, a2);
  std::string::string(this + 16, a2 + 16);
  std::string::string(this + 44, a2 + 44);
  this[72] = *(_BYTE *)(a2 + 72);
  std::string::string(this + 76, a2 + 76);
  return this;
}

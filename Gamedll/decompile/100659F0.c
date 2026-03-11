/*
 * func-name: ??4Flyweight@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x100659f0
 * callers: 0x10007f0e
 * callees: 0x100124bd
 */

_DWORD *__thiscall GameClient::Flyweight::operator=(_DWORD *this, int a2)
{
  std::string::operator=(this + 1, a2 + 4);
  sub_100124BD(a2 + 32);
  this[12] = *(_DWORD *)(a2 + 48);
  std::string::operator=(this + 13, a2 + 52);
  std::string::operator=(this + 20, a2 + 80);
  return this;
}

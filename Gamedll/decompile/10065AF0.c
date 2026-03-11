/*
 * func-name: ??4FProduct@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10065af0
 * callers: 0x10011ad1
 * callees: 0x100124bd
 */

_DWORD *__thiscall GameClient::FProduct::operator=(_DWORD *this, int a2)
{
  std::string::operator=(this + 1, a2 + 4);
  sub_100124BD(a2 + 32);
  this[12] = *(_DWORD *)(a2 + 48);
  std::string::operator=(this + 13, a2 + 52);
  std::string::operator=(this + 20, a2 + 80);
  this[27] = *(_DWORD *)(a2 + 108);
  std::string::operator=(this + 28, a2 + 112);
  std::string::operator=(this + 35, a2 + 140);
  std::string::operator=(this + 42, a2 + 168);
  return this;
}

/*
 * func-name: ??4FFunction@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10065a50
 * callers: 0x1000978c
 * callees: 0x100124bd
 */

_DWORD *__thiscall GameClient::FFunction::operator=(_DWORD *this, int a2)
{
  std::string::operator=(this + 1, a2 + 4);
  sub_100124BD(a2 + 32);
  this[12] = *(_DWORD *)(a2 + 48);
  std::string::operator=(this + 13, a2 + 52);
  std::string::operator=(this + 20, a2 + 80);
  return this;
}

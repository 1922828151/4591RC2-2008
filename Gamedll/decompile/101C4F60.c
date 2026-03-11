/*
 * func-name: ??4FFunc_Sheild@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101c4f60
 * callers: 0x10018bdd
 * callees: 0x100124bd
 */

_DWORD *__thiscall GameClient::FFunc_Sheild::operator=(_DWORD *this, int a2)
{
  std::string::operator=(this + 1, a2 + 4);
  sub_100124BD(a2 + 32);
  this[12] = *(_DWORD *)(a2 + 48);
  std::string::operator=(this + 13, a2 + 52);
  std::string::operator=(this + 20, a2 + 80);
  std::string::operator=(this + 27, a2 + 108);
  return this;
}

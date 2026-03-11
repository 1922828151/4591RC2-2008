/*
 * func-name: ??4FFunc_Store@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101ca220
 * callers: 0x1000cd24
 * callees: 0x100124bd
 */

_DWORD *__thiscall GameClient::FFunc_Store::operator=(_DWORD *this, _DWORD *a2)
{
  std::string::operator=(this + 1, a2 + 1);
  sub_100124BD((int)(a2 + 8));
  this[12] = a2[12];
  std::string::operator=(this + 13, a2 + 13);
  std::string::operator=(this + 20, a2 + 20);
  this[27] = a2[27];
  this[28] = a2[28];
  return this;
}

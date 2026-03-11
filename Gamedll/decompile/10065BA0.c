/*
 * func-name: ??4FProductInfo@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10065ba0
 * callers: 0x1000c36f
 * callees: 0x100124bd
 */

_DWORD *__thiscall GameClient::FProductInfo::operator=(_DWORD *this, _DWORD *a2)
{
  std::string::operator=(this + 1, a2 + 1);
  sub_100124BD((int)(a2 + 8));
  this[12] = a2[12];
  std::string::operator=(this + 13, a2 + 13);
  std::string::operator=(this + 20, a2 + 20);
  this[27] = a2[27];
  this[28] = a2[28];
  this[29] = a2[29];
  std::string::operator=(this + 30, a2 + 30);
  std::string::operator=(this + 37, a2 + 37);
  std::string::operator=(this + 44, a2 + 44);
  std::string::operator=(this + 51, a2 + 51);
  std::string::operator=(this + 58, a2 + 58);
  return this;
}

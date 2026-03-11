/*
 * func-name: ??4FSystemPart@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10065d40
 * callers: 0x100102b7
 * callees: 0x10011ad1
 */

_DWORD *__thiscall GameClient::FSystemPart::operator=(_DWORD *this, _DWORD *a2)
{
  GameClient::FProduct::operator=((int)a2);
  this[49] = a2[49];
  this[50] = a2[50];
  this[51] = a2[51];
  this[52] = a2[52];
  std::string::operator=(this + 53, a2 + 53);
  this[60] = a2[60];
  std::string::operator=(this + 61, a2 + 61);
  return this;
}

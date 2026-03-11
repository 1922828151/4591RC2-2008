/*
 * func-name: ??4FSeat@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10128e20
 * callers: 0x1000ce0a
 * callees: 0x10006a0a, 0x1000d5c1, 0x100124bd
 */

_DWORD *__thiscall GameClient::FSeat::operator=(_DWORD *this, _DWORD *a2)
{
  std::string::operator=(this + 1, a2 + 1);
  sub_100124BD((int)(a2 + 8));
  this[12] = a2[12];
  std::string::operator=(this + 13, a2 + 13);
  std::string::operator=(this + 20, a2 + 20);
  this[27] = a2[27];
  std::string::operator=(this + 28, a2 + 28);
  std::string::operator=(this + 35, a2 + 35);
  this[42] = a2[42];
  this[43] = a2[43];
  sub_10006A0A((int)(a2 + 44));
  sub_1000D5C1((int)(a2 + 48));
  qmemcpy(this + 52, a2 + 52, 0x44u);
  return this;
}

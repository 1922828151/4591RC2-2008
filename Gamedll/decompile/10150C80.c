/*
 * func-name: ??4Item@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10150c80
 * callers: 0x100024cd
 * callees: 0x10009345
 */

_DWORD *__thiscall GameClient::Item::operator=(_DWORD *this, _DWORD *a2)
{
  GameClient::Equip::operator=((int)a2);
  std::string::operator=(this + 185, a2 + 185);
  this[192] = a2[192];
  this[193] = a2[193];
  this[194] = a2[194];
  return this;
}

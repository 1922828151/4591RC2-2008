/*
 * func-name: ??4TransformItem@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10194cb0
 * callers: 0x100186c4
 * callees: 0x10009345
 */

_DWORD *__thiscall GameClient::TransformItem::operator=(_DWORD *this, _DWORD *a2)
{
  GameClient::Equip::operator=((int)a2);
  std::string::operator=(this + 185, a2 + 185);
  this[192] = a2[192];
  this[193] = a2[193];
  this[194] = a2[194];
  this[195] = a2[195];
  return this;
}

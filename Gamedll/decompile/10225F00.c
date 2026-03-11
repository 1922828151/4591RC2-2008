/*
 * func-name: ??4?$ProductorTemplate@VFDamageEquip@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10225f00
 * callers: 0x10003ba7
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FDamageEquip>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

/*
 * func-name: ??4?$ProductorTemplate@VFProductInfo@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10234c50
 * callers: 0x10012ab2
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FProductInfo>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

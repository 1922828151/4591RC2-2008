/*
 * func-name: ??4?$ProductorTemplate@VFItem@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1022d580
 * callers: 0x10002a0e
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FItem>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

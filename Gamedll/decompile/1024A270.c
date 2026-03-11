/*
 * func-name: ??4?$ProductorTemplate@VFAura@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1024a270
 * callers: 0x1000628a
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FAura>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

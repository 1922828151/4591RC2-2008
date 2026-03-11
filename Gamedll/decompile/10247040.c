/*
 * func-name: ??4?$ProductorTemplate@VFAArmor@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10247040
 * callers: 0x100040c0
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FAArmor>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

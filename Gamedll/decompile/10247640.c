/*
 * func-name: ??4?$ProductorTemplate@VFACapability@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10247640
 * callers: 0x10005c3b
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FACapability>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

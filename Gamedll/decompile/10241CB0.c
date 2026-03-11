/*
 * func-name: ??4?$ProductorTemplate@VFTransformItem@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10241cb0
 * callers: 0x1000a1af
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FTransformItem>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

/*
 * func-name: ??4?$ProductorTemplate@VFSeat@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1023ed40
 * callers: 0x1000f146
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FSeat>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

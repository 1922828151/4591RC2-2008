/*
 * func-name: ??4?$ProductorTemplate@VFSAlarm@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1024acc0
 * callers: 0x10019baf
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FSAlarm>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

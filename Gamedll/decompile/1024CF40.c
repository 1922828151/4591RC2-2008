/*
 * func-name: ??4?$ProductorTemplate@VFSOccupy@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1024cf40
 * callers: 0x10007379
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FSOccupy>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

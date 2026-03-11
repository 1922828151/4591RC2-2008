/*
 * func-name: ??4?$ProductorTemplate@VFASummon@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10249d40
 * callers: 0x10003c74
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FASummon>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

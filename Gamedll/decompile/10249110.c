/*
 * func-name: ??4?$ProductorTemplate@VFARetrieval@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10249110
 * callers: 0x100129db
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FARetrieval>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

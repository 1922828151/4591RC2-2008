/*
 * func-name: ??4?$ProductorTemplate@VFAEnergy@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10247f40
 * callers: 0x1000a871
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FAEnergy>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

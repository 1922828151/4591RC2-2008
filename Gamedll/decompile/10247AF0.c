/*
 * func-name: ??4?$ProductorTemplate@VFADamage@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10247af0
 * callers: 0x10014db2
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FADamage>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

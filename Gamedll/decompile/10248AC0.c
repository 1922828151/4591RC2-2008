/*
 * func-name: ??4?$ProductorTemplate@VFARepair@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10248ac0
 * callers: 0x1000439a
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FARepair>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

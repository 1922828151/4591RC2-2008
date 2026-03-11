/*
 * func-name: ??4?$ProductorTemplate@VFWeapon@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10242170
 * callers: 0x10008af3
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FWeapon>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

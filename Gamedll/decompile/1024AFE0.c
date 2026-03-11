/*
 * func-name: ??4?$ProductorTemplate@VFSkill@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1024afe0
 * callers: 0x10018cf0
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FSkill>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

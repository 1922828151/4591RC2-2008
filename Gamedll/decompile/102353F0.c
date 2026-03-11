/*
 * func-name: ??4?$ProductorTemplate@VFRobot@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x102353f0
 * callers: 0x1000fc59
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FRobot>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

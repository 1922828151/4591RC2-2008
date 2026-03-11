/*
 * func-name: ??4?$ProductorTemplate@VFBullet@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10223b00
 * callers: 0x100178fa
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FBullet>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}

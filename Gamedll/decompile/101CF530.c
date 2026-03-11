/*
 * func-name: ??4FAAlarm@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101cf530
 * callers: 0x1000569b
 * callees: 0x10009395
 */

char *__thiscall GameClient::FAAlarm::operator=(char *this, int a2)
{
  GameClient::FAura::operator=(a2);
  std::string::operator=(this + 260, a2 + 260);
  return this;
}

/*
 * func-name: ??0FAAlarm@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101cf4a0
 * callers: 0x100130b1
 * callees: 0x1000ed77
 */

GameClient::FAAlarm *__thiscall GameClient::FAAlarm::FAAlarm(
        GameClient::FAAlarm *this,
        const struct GameClient::FAAlarm *a2)
{
  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FAAlarm::`vftable';
  std::string::string((char *)this + 260, (char *)a2 + 260);
  return this;
}

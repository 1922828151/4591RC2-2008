/*
 * func-name: ??0SAlarm@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d1970
 * callers: 0x1001183d
 * callees: 0x10007fae
 */

GameClient::SAlarm *__thiscall GameClient::SAlarm::SAlarm(
        GameClient::SAlarm *this,
        const struct GameClient::SAlarm *a2)
{
  GameClient::Skill::Skill(this, a2);
  *(_DWORD *)this = &GameClient::SAlarm::`vftable';
  return this;
}

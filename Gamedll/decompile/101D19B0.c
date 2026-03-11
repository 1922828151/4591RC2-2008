/*
 * func-name: ??0FSAlarm@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d19b0
 * callers: 0x100152fd
 * callees: 0x1001ac76
 */

GameClient::FSAlarm *__thiscall GameClient::FSAlarm::FSAlarm(
        GameClient::FSAlarm *this,
        const struct GameClient::FSAlarm *a2)
{
  GameClient::FSkill::FSkill(this, a2);
  *(_DWORD *)this = &GameClient::FSAlarm::`vftable';
  return this;
}

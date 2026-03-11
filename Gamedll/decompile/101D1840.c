/*
 * func-name: ??1SAlarm@GameClient@@UAE@XZ_0
 * func-address: 0x101d1840
 * callers: 0x10016437
 * callees: none
 */

void __thiscall GameClient::SAlarm::~SAlarm(GameClient::Skill *this)
{
  *(_DWORD *)this = &GameClient::SAlarm::`vftable';
  GameClient::Skill::~Skill(this);
}

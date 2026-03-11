/*
 * func-name: ??1FSAlarm@GameClient@@UAE@XZ_0
 * func-address: 0x1024ad00
 * callers: 0x10013043
 * callees: none
 */

void __thiscall GameClient::FSAlarm::~FSAlarm(GameClient::FSkill *this)
{
  *(_DWORD *)this = &GameClient::FSAlarm::`vftable';
  GameClient::FSkill::~FSkill(this);
}

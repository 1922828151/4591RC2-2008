/*
 * func-name: ??1AAlarm@GameClient@@UAE@XZ_0
 * func-address: 0x101cef90
 * callers: 0x10014533
 * callees: none
 */

void __thiscall GameClient::AAlarm::~AAlarm(GameClient::Aura *this)
{
  *(_DWORD *)this = &GameClient::AAlarm::`vftable';
  GameClient::Aura::~Aura(this);
}

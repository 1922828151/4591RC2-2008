/*
 * func-name: ??1FAAlarm@GameClient@@UAE@XZ_0
 * func-address: 0x10246cd0
 * callers: 0x100051d2
 * callees: 0x1000925f
 */

void __thiscall GameClient::FAAlarm::~FAAlarm(GameClient::FAAlarm *this)
{
  *(_DWORD *)this = &GameClient::FAAlarm::`vftable';
  std::string::~string((char *)this + 260);
  GameClient::FAura::~FAura(this);
}

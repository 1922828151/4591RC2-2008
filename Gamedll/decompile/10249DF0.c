/*
 * func-name: ??1FASummon@GameClient@@UAE@XZ_0
 * func-address: 0x10249df0
 * callers: 0x10012ee5
 * callees: 0x1000925f
 */

void __thiscall GameClient::FASummon::~FASummon(GameClient::FASummon *this)
{
  *(_DWORD *)this = &GameClient::FASummon::`vftable';
  std::string::~string((char *)this + 260);
  GameClient::FAura::~FAura(this);
}

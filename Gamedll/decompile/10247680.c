/*
 * func-name: ??1FACapability@GameClient@@UAE@XZ_0
 * func-address: 0x10247680
 * callers: 0x10014b8c
 * callees: none
 */

void __thiscall GameClient::FACapability::~FACapability(GameClient::FAura *this)
{
  *(_DWORD *)this = &GameClient::FACapability::`vftable';
  GameClient::FAura::~FAura(this);
}

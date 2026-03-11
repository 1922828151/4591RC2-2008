/*
 * func-name: ??1FARepair@GameClient@@UAE@XZ_0
 * func-address: 0x10248d30
 * callers: 0x1000c810
 * callees: none
 */

void __thiscall GameClient::FARepair::~FARepair(GameClient::FAura *this)
{
  *(_DWORD *)this = &GameClient::FARepair::`vftable';
  GameClient::FAura::~FAura(this);
}

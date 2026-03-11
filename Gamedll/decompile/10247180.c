/*
 * func-name: ??1FAArmor@GameClient@@UAE@XZ_0
 * func-address: 0x10247180
 * callers: 0x10016c2f
 * callees: none
 */

void __thiscall GameClient::FAArmor::~FAArmor(GameClient::FAura *this)
{
  *(_DWORD *)this = &GameClient::FAArmor::`vftable';
  GameClient::FAura::~FAura(this);
}

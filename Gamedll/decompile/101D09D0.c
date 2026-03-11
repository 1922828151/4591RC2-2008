/*
 * func-name: ??1ASummon@GameClient@@UAE@XZ_0
 * func-address: 0x101d09d0
 * callers: 0x10009ea8
 * callees: none
 */

void __thiscall GameClient::ASummon::~ASummon(GameClient::Aura *this)
{
  *(_DWORD *)this = &GameClient::ASummon::`vftable';
  GameClient::Aura::~Aura(this);
}

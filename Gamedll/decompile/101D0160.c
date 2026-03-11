/*
 * func-name: ??1ARepair@GameClient@@UAE@XZ_0
 * func-address: 0x101d0160
 * callers: 0x1000970f
 * callees: none
 */

void __thiscall GameClient::ARepair::~ARepair(GameClient::Aura *this)
{
  *(_DWORD *)this = &GameClient::ARepair::`vftable';
  GameClient::Aura::~Aura(this);
}

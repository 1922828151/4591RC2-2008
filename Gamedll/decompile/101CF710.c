/*
 * func-name: ??1ACapability@GameClient@@UAE@XZ_0
 * func-address: 0x101cf710
 * callers: 0x1000ebf1
 * callees: none
 */

void __thiscall GameClient::ACapability::~ACapability(GameClient::Aura *this)
{
  *(_DWORD *)this = &GameClient::ACapability::`vftable';
  GameClient::Aura::~Aura(this);
}

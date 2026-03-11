/*
 * func-name: ??1AEnergy@GameClient@@UAE@XZ_0
 * func-address: 0x101cfb30
 * callers: 0x10017a21
 * callees: none
 */

void __thiscall GameClient::AEnergy::~AEnergy(GameClient::Aura *this)
{
  *(_DWORD *)this = &GameClient::AEnergy::`vftable';
  GameClient::Aura::~Aura(this);
}

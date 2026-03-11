/*
 * func-name: ??1AMovement@GameClient@@UAE@XZ_0
 * func-address: 0x101cfd10
 * callers: 0x10001983
 * callees: none
 */

void __thiscall GameClient::AMovement::~AMovement(GameClient::Aura *this)
{
  *(_DWORD *)this = &GameClient::AMovement::`vftable';
  GameClient::Aura::~Aura(this);
}

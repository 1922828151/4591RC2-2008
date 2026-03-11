/*
 * func-name: ??1ADamage@GameClient@@UAE@XZ_0
 * func-address: 0x101cf960
 * callers: 0x100170e4
 * callees: none
 */

void __thiscall GameClient::ADamage::~ADamage(GameClient::Aura *this)
{
  *(_DWORD *)this = &GameClient::ADamage::`vftable';
  GameClient::Aura::~Aura(this);
}

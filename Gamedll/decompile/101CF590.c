/*
 * func-name: ??1AArmor@GameClient@@UAE@XZ_0
 * func-address: 0x101cf590
 * callers: 0x1000f7e0
 * callees: none
 */

void __thiscall GameClient::AArmor::~AArmor(GameClient::Aura *this)
{
  *(_DWORD *)this = &GameClient::AArmor::`vftable';
  GameClient::Aura::~Aura(this);
}

/*
 * func-name: ??1ARetrieval@GameClient@@UAE@XZ_0
 * func-address: 0x101d04b0
 * callers: 0x10019033
 * callees: none
 */

void __thiscall GameClient::ARetrieval::~ARetrieval(GameClient::Aura *this)
{
  *(_DWORD *)this = &GameClient::ARetrieval::`vftable';
  GameClient::Aura::~Aura(this);
}

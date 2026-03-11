/*
 * func-name: ??0ADamage@GameClient@@QAE@K@Z_0
 * func-address: 0x101cf940
 * callers: 0x1000e8ef
 * callees: 0x10001154
 */

GameClient::ADamage *__thiscall GameClient::ADamage::ADamage(GameClient::ADamage *this, unsigned int a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ADamage::`vftable';
  return this;
}

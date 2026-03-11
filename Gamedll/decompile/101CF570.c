/*
 * func-name: ??0AArmor@GameClient@@QAE@K@Z_0
 * func-address: 0x101cf570
 * callers: 0x1001320a
 * callees: 0x10001154
 */

GameClient::AArmor *__thiscall GameClient::AArmor::AArmor(GameClient::AArmor *this, unsigned int a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::AArmor::`vftable';
  return this;
}

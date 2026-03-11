/*
 * func-name: ??0ASummon@GameClient@@QAE@K@Z_0
 * func-address: 0x101d09a0
 * callers: 0x100175cb
 * callees: 0x10001154
 */

GameClient::ASummon *__thiscall GameClient::ASummon::ASummon(GameClient::ASummon *this, unsigned int a2)
{
  GameClient::Aura::Aura(this, a2);
  *((_DWORD *)this + 39) = -1;
  *((_DWORD *)this + 40) = -1;
  *(_DWORD *)this = &GameClient::ASummon::`vftable';
  return this;
}

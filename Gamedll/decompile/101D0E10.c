/*
 * func-name: ??0ASummon@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d0e10
 * callers: 0x10015d25
 * callees: 0x10014cd6
 */

GameClient::ASummon *__thiscall GameClient::ASummon::ASummon(
        GameClient::ASummon *this,
        const struct GameClient::ASummon *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ASummon::`vftable';
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 40);
  return this;
}

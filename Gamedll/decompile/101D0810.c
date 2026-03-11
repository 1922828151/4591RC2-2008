/*
 * func-name: ??0ASearch@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d0810
 * callers: 0x1001832c
 * callees: 0x10014cd6
 */

GameClient::ASearch *__thiscall GameClient::ASearch::ASearch(
        GameClient::ASearch *this,
        const struct GameClient::ASearch *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ASearch::`vftable';
  return this;
}

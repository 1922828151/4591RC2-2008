/*
 * func-name: ??0FASearch@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10249c30
 * callers: 0x10011e0f
 * callees: 0x1000ed77
 */

GameClient::FASearch *__thiscall GameClient::FASearch::FASearch(
        GameClient::FASearch *this,
        const struct GameClient::FASearch *a2)
{
  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FASearch::`vftable';
  return this;
}

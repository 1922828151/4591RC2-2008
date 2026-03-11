/*
 * func-name: ??0EnterEstabEffectArea@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1011edd0
 * callers: 0x1000bf73
 * callees: none
 */

GameClient::EnterEstabEffectArea *__thiscall GameClient::EnterEstabEffectArea::EnterEstabEffectArea(
        GameClient::EnterEstabEffectArea *this,
        const struct GameClient::EnterEstabEffectArea *a2)
{
  GameClient::EnterEstabEffectArea *result; // eax

  result = this;
  *(_DWORD *)this = &GameClient::EnterEstabEffectArea::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}

/*
 * func-name: ??0ARetrieval@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d04e0
 * callers: 0x10005dd5
 * callees: 0x10014cd6
 */

GameClient::ARetrieval *__thiscall GameClient::ARetrieval::ARetrieval(
        GameClient::ARetrieval *this,
        const struct GameClient::ARetrieval *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ARetrieval::`vftable';
  return this;
}

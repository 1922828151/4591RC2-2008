/*
 * func-name: ??0AArmor@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101cf600
 * callers: 0x1000d17a
 * callees: 0x10014cd6
 */

GameClient::AArmor *__thiscall GameClient::AArmor::AArmor(
        GameClient::AArmor *this,
        const struct GameClient::AArmor *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::AArmor::`vftable';
  return this;
}

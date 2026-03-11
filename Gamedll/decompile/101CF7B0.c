/*
 * func-name: ??0ACapability@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101cf7b0
 * callers: 0x1000575e
 * callees: 0x10014cd6
 */

GameClient::ACapability *__thiscall GameClient::ACapability::ACapability(
        GameClient::ACapability *this,
        const struct GameClient::ACapability *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ACapability::`vftable';
  return this;
}

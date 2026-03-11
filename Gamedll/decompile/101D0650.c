/*
 * func-name: ??0ASatelliteCapability@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d0650
 * callers: 0x1000b433
 * callees: 0x10014cd6
 */

GameClient::ASatelliteCapability *__thiscall GameClient::ASatelliteCapability::ASatelliteCapability(
        GameClient::ASatelliteCapability *this,
        const struct GameClient::ASatelliteCapability *a2)
{
  GameClient::Aura::Aura(this, a2);
  *(_DWORD *)this = &GameClient::ASatelliteCapability::`vftable';
  return this;
}

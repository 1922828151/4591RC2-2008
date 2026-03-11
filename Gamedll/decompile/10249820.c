/*
 * func-name: ??0FASatelliteCapability@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10249820
 * callers: 0x10013250
 * callees: 0x1000ed77
 */

GameClient::FASatelliteCapability *__thiscall GameClient::FASatelliteCapability::FASatelliteCapability(
        GameClient::FASatelliteCapability *this,
        const struct GameClient::FASatelliteCapability *a2)
{
  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FASatelliteCapability::`vftable';
  return this;
}

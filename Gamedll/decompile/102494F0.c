/*
 * func-name: ??0?$ProductorTemplate@VFASatelliteCapability@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x102494f0
 * callers: 0x1000ee49
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FASatelliteCapability>::ProductorTemplate<GameClient::FASatelliteCapability>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FASatelliteCapability>::`vftable';
  return this;
}

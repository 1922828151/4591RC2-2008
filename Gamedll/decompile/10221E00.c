/*
 * func-name: ??0?$ProductorTemplate@VFAircraftVehicle@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10221e00
 * callers: 0x100177d8
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FAircraftVehicle>::ProductorTemplate<GameClient::FAircraftVehicle>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FAircraftVehicle>::`vftable';
  return this;
}

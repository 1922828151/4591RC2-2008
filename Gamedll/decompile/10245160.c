/*
 * func-name: ??0?$ProductorTemplate@VFWheelVehicle@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10245160
 * callers: 0x1000bd4d
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FWheelVehicle>::ProductorTemplate<GameClient::FWheelVehicle>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FWheelVehicle>::`vftable';
  return this;
}

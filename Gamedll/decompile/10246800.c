/*
 * func-name: ??0?$ProductorTemplate@VFWheelVehicleWheel@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10246800
 * callers: 0x10018e3f
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FWheelVehicleWheel>::ProductorTemplate<GameClient::FWheelVehicleWheel>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FWheelVehicleWheel>::`vftable';
  return this;
}

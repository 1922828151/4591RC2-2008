/*
 * func-name: ??0?$ProductorTemplate@VFPedrailVehicleWheel@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10234490
 * callers: 0x1001a672
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FPedrailVehicleWheel>::ProductorTemplate<GameClient::FPedrailVehicleWheel>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FPedrailVehicleWheel>::`vftable';
  return this;
}

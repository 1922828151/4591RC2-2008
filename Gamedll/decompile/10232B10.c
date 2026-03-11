/*
 * func-name: ??0?$ProductorTemplate@VFPedrailVehicle@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10232b10
 * callers: 0x10002815
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FPedrailVehicle>::ProductorTemplate<GameClient::FPedrailVehicle>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FPedrailVehicle>::`vftable';
  return this;
}

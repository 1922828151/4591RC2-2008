/*
 * func-name: ??0?$ProductorTemplate@VFSuspendVehicle@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1023fdf0
 * callers: 0x10013377
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FSuspendVehicle>::ProductorTemplate<GameClient::FSuspendVehicle>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FSuspendVehicle>::`vftable';
  return this;
}

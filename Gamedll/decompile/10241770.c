/*
 * func-name: ??0?$ProductorTemplate@VFSuspendVehicleWheel@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10241770
 * callers: 0x1000600f
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FSuspendVehicleWheel>::ProductorTemplate<GameClient::FSuspendVehicleWheel>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FSuspendVehicleWheel>::`vftable';
  return this;
}

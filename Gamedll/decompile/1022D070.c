/*
 * func-name: ??0?$ProductorTemplate@VFFunc_VehicleReceive@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1022d070
 * callers: 0x10003bc5
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FFunc_VehicleReceive>::ProductorTemplate<GameClient::FFunc_VehicleReceive>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FFunc_VehicleReceive>::`vftable';
  return this;
}

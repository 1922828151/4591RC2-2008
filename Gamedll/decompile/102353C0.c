/*
 * func-name: ??0?$ProductorTemplate@VFRobot@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x102353c0
 * callers: 0x100107ee
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FRobot>::ProductorTemplate<GameClient::FRobot>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FRobot>::`vftable';
  return this;
}

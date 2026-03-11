/*
 * func-name: ??0?$ProductorTemplate@VFAMovement@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10248490
 * callers: 0x1000d2d3
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FAMovement>::ProductorTemplate<GameClient::FAMovement>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FAMovement>::`vftable';
  return this;
}

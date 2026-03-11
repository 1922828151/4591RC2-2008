/*
 * func-name: ??0?$ProductorTemplate@VFEstabDoor@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10229b00
 * callers: 0x1000e44e
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FEstabDoor>::ProductorTemplate<GameClient::FEstabDoor>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FEstabDoor>::`vftable';
  return this;
}

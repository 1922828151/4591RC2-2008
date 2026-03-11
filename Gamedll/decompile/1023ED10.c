/*
 * func-name: ??0?$ProductorTemplate@VFSeat@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1023ed10
 * callers: 0x1001281e
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FSeat>::ProductorTemplate<GameClient::FSeat>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FSeat>::`vftable';
  return this;
}

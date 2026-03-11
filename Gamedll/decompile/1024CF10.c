/*
 * func-name: ??0?$ProductorTemplate@VFSOccupy@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1024cf10
 * callers: 0x1000c6a8
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FSOccupy>::ProductorTemplate<GameClient::FSOccupy>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FSOccupy>::`vftable';
  return this;
}

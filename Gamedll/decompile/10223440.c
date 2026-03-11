/*
 * func-name: ??0?$ProductorTemplate@VFBooty@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10223440
 * callers: 0x100071b7
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FBooty>::ProductorTemplate<GameClient::FBooty>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FBooty>::`vftable';
  return this;
}

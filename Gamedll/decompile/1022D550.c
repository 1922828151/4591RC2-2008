/*
 * func-name: ??0?$ProductorTemplate@VFItem@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1022d550
 * callers: 0x1000b316
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FItem>::ProductorTemplate<GameClient::FItem>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FItem>::`vftable';
  return this;
}

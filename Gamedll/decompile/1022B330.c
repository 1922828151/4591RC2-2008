/*
 * func-name: ??0?$ProductorTemplate@VFFunc_Power@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1022b330
 * callers: 0x100120ee
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FFunc_Power>::ProductorTemplate<GameClient::FFunc_Power>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FFunc_Power>::`vftable';
  return this;
}

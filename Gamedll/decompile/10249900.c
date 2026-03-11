/*
 * func-name: ??0?$ProductorTemplate@VFASearch@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10249900
 * callers: 0x1000f0d3
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FASearch>::ProductorTemplate<GameClient::FASearch>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FASearch>::`vftable';
  return this;
}

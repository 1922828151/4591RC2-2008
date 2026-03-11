/*
 * func-name: ??0?$ProductorTemplate@VFAura@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1024a240
 * callers: 0x10005f1a
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FAura>::ProductorTemplate<GameClient::FAura>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FAura>::`vftable';
  return this;
}

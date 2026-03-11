/*
 * func-name: ??0?$ProductorTemplate@VFAArmor@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10247010
 * callers: 0x10012da0
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FAArmor>::ProductorTemplate<GameClient::FAArmor>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FAArmor>::`vftable';
  return this;
}

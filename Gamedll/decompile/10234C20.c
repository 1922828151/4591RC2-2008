/*
 * func-name: ??0?$ProductorTemplate@VFProductInfo@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10234c20
 * callers: 0x1000b447
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FProductInfo>::ProductorTemplate<GameClient::FProductInfo>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FProductInfo>::`vftable';
  return this;
}

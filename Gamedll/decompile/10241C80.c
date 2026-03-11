/*
 * func-name: ??0?$ProductorTemplate@VFTransformItem@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10241c80
 * callers: 0x10004412
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FTransformItem>::ProductorTemplate<GameClient::FTransformItem>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FTransformItem>::`vftable';
  return this;
}

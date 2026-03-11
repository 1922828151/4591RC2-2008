/*
 * func-name: ??0?$ProductorTemplate@VFASummon@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10249d10
 * callers: 0x1001a6f4
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FASummon>::ProductorTemplate<GameClient::FASummon>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FASummon>::`vftable';
  return this;
}

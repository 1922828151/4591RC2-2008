/*
 * func-name: ??0?$ProductorTemplate@VFNonControlledEstab@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10232020
 * callers: 0x10010ef6
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FNonControlledEstab>::ProductorTemplate<GameClient::FNonControlledEstab>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FNonControlledEstab>::`vftable';
  return this;
}

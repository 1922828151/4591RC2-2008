/*
 * func-name: ??0?$ProductorTemplate@VFWeapon@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10242140
 * callers: 0x1001411e
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FWeapon>::ProductorTemplate<GameClient::FWeapon>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FWeapon>::`vftable';
  return this;
}

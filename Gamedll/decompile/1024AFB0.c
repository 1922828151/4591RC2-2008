/*
 * func-name: ??0?$ProductorTemplate@VFSkill@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1024afb0
 * callers: 0x1000c44b
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FSkill>::ProductorTemplate<GameClient::FSkill>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FSkill>::`vftable';
  return this;
}

/*
 * func-name: ??0?$ProductorTemplate@VFAEnergy@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10247f10
 * callers: 0x100020cc
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FAEnergy>::ProductorTemplate<GameClient::FAEnergy>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FAEnergy>::`vftable';
  return this;
}

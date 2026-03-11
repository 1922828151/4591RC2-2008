/*
 * func-name: ??0?$ProductorTemplate@VFARepair@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10248a90
 * callers: 0x10012d8c
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FARepair>::ProductorTemplate<GameClient::FARepair>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FARepair>::`vftable';
  return this;
}

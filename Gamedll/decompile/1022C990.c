/*
 * func-name: ??0?$ProductorTemplate@VFFunc_Sheild@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1022c990
 * callers: 0x1000d3d7
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::ProductorTemplate<GameClient::FFunc_Sheild>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::`vftable';
  return this;
}

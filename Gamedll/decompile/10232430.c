/*
 * func-name: ??0?$ProductorTemplate@VFOccupyIcon@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10232430
 * callers: 0x10015285
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<FOccupyIcon>::ProductorTemplate<FOccupyIcon>(_DWORD *this, int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<FOccupyIcon>::`vftable';
  return this;
}

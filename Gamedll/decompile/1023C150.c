/*
 * func-name: ??0?$ProductorTemplate@VFRobotCore@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1023c150
 * callers: 0x1000ce14
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FRobotCore>::ProductorTemplate<GameClient::FRobotCore>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FRobotCore>::`vftable';
  return this;
}

/*
 * func-name: ??0?$ProductorTemplate@VFRobotFramework@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1023c750
 * callers: 0x10016013
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FRobotFramework>::ProductorTemplate<GameClient::FRobotFramework>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FRobotFramework>::`vftable';
  return this;
}

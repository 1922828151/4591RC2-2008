/*
 * func-name: ??0?$ProductorTemplate@VFRobotBody@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10238500
 * callers: 0x100114e6
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FRobotBody>::ProductorTemplate<GameClient::FRobotBody>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FRobotBody>::`vftable';
  return this;
}

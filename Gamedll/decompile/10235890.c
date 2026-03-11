/*
 * func-name: ??0?$ProductorTemplate@VFRobotArmor@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10235890
 * callers: 0x1001599c
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FRobotArmor>::ProductorTemplate<GameClient::FRobotArmor>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FRobotArmor>::`vftable';
  return this;
}

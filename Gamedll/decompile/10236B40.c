/*
 * func-name: ??1?$ProductorTemplate@VFRobotArmor@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10236b40
 * callers: 0x10016fa9
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FRobotArmor>::~ProductorTemplate<GameClient::FRobotArmor>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FRobotArmor>::`vftable';
  GameClient::Productor::~Productor(this);
}

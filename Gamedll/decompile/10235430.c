/*
 * func-name: ??1FRobot@GameClient@@UAE@XZ_0
 * func-address: 0x10235430
 * callers: 0x100097b9
 * callees: none
 */

void __thiscall GameClient::FRobot::~FRobot(GameClient::FRobot *this)
{
  *(_DWORD *)this = &GameClient::FRobot::`vftable';
  GameClient::Flyweight::~Flyweight(this);
}

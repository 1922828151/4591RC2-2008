/*
 * func-name: ??1RobotBody@GameClient@@UAE@XZ_0
 * func-address: 0x1018c550
 * callers: 0x10007298
 * callees: none
 */

void __thiscall GameClient::RobotBody::~RobotBody(GameClient::RobotBody *this)
{
  *(_DWORD *)this = &GameClient::RobotBody::`vftable';
  GameClient::SystemPart::~SystemPart(this);
}

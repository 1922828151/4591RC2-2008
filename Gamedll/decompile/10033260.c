/*
 * func-name: ?GetRobotBody@Robot@GameClient@@QBEPAVRobotBody@2@XZ_0
 * func-address: 0x10033260
 * callers: 0x1000d986
 * callees: none
 */

struct GameClient::RobotBody *__thiscall GameClient::Robot::GetRobotBody(GameClient::Robot *this)
{
  return (struct GameClient::RobotBody *)*((_DWORD *)this + 50);
}

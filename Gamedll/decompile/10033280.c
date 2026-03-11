/*
 * func-name: ?GetRobotCore@Robot@GameClient@@QBEPAVRobotCore@2@XZ_0
 * func-address: 0x10033280
 * callers: 0x1000a99d
 * callees: none
 */

struct GameClient::RobotCore *__thiscall GameClient::Robot::GetRobotCore(GameClient::Robot *this)
{
  return (struct GameClient::RobotCore *)*((_DWORD *)this + 52);
}

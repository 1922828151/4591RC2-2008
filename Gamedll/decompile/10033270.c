/*
 * func-name: ?GetRobotArmor@Robot@GameClient@@QBEPAVRobotArmor@2@XZ_0
 * func-address: 0x10033270
 * callers: 0x10010721
 * callees: none
 */

struct GameClient::RobotArmor *__thiscall GameClient::Robot::GetRobotArmor(GameClient::Robot *this)
{
  return (struct GameClient::RobotArmor *)*((_DWORD *)this + 51);
}

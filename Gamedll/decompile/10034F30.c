/*
 * func-name: ??4RobotPartModel@FRobotBody@GameClient@@QAEAAU012@ABU012@@Z_0
 * func-address: 0x10034f30
 * callers: 0x1001108b
 * callees: none
 */

char *__thiscall GameClient::FRobotBody::RobotPartModel::operator=(char *this, int a2)
{
  std::string::operator=(this, a2);
  std::string::operator=(this + 28, a2 + 28);
  return this;
}

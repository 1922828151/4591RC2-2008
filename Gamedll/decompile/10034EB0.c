/*
 * func-name: ??0RobotPartModel@FRobotBody@GameClient@@QAE@ABU012@@Z_0
 * func-address: 0x10034eb0
 * callers: 0x10001460
 * callees: none
 */

GameClient::FRobotBody::RobotPartModel *__thiscall GameClient::FRobotBody::RobotPartModel::RobotPartModel(
        GameClient::FRobotBody::RobotPartModel *this,
        const struct GameClient::FRobotBody::RobotPartModel *a2)
{
  std::string::string(this, a2);
  std::string::string((char *)this + 28, (char *)a2 + 28);
  return this;
}

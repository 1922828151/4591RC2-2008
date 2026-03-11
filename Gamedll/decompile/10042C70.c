/*
 * func-name: sub_10042C70
 * func-address: 0x10042c70
 * callers: 0x1000878d
 * callees: 0x10001460
 */

int __cdecl sub_10042C70(GameClient::FRobotBody::RobotPartModel *a1, struct GameClient::FRobotBody::RobotPartModel *a2)
{
  int result; // eax

  if ( a1 )
    return GameClient::FRobotBody::RobotPartModel::RobotPartModel(a1, a2);
  return result;
}

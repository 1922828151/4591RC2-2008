/*
 * func-name: ?RemoveRobot@RobotManager@GameClient@@QAEPAVRobot@2@PAV32@@Z_0
 * func-address: 0x1018d430
 * callers: 0x1000c658
 * callees: none
 */

struct GameClient::Robot *__thiscall GameClient::RobotManager::RemoveRobot(
        GameClient::RobotManager *this,
        struct GameClient::Robot *a2)
{
  struct GameClient::Robot *result; // eax

  result = a2;
  if ( a2 )
    return GameClient::RobotManager::RemoveRobot(this, *((_DWORD *)a2 + 3));
  return result;
}

/*
 * func-name: ?SetPostureState@Robot@GameClient@@QAEXW4RobotPosture@12@@Z_0
 * func-address: 0x10033380
 * callers: 0x1001a7c1
 * callees: none
 */

int __thiscall GameClient::Robot::SetPostureState(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[88] = a2;
  return result;
}

/*
 * func-name: ?SetMovementState@Robot@GameClient@@QAEXW4RobotMovement@12@@Z_0
 * func-address: 0x10033390
 * callers: 0x10003c7e
 * callees: none
 */

int __thiscall GameClient::Robot::SetMovementState(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[89] = a2;
  return result;
}

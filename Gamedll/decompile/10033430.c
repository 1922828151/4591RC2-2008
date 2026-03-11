/*
 * func-name: ?DisableState@Robot@GameClient@@QAEXW4RobotOtherState@12@@Z_0
 * func-address: 0x10033430
 * callers: 0x10010681
 * callees: none
 */

int __thiscall GameClient::Robot::DisableState(_DWORD *this, int a2)
{
  int result; // eax

  result = ~a2;
  this[92] &= ~a2;
  return result;
}

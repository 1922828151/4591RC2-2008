/*
 * func-name: ?GetOffsetSteadyCoefficient@Robot@GameClient@@QBEMXZ_0
 * func-address: 0x101733f0
 * callers: 0x100017cb
 * callees: none
 */

double __thiscall GameClient::Robot::GetOffsetSteadyCoefficient(GameClient::Robot *this)
{
  GameClient::RobotCore *v1; // ecx

  v1 = (GameClient::RobotCore *)*((_DWORD *)this + 52);
  if ( v1 )
    return GameClient::RobotCore::GetOffsetSteadyCoefficient(v1);
  else
    return 0.0;
}

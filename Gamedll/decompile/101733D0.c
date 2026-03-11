/*
 * func-name: ?GetRecoilSteadyCoefficient@Robot@GameClient@@QBEMXZ_0
 * func-address: 0x101733d0
 * callers: 0x1000b78a
 * callees: none
 */

double __thiscall GameClient::Robot::GetRecoilSteadyCoefficient(GameClient::Robot *this)
{
  GameClient::RobotBody *v1; // ecx

  v1 = (GameClient::RobotBody *)*((_DWORD *)this + 50);
  if ( v1 )
    return GameClient::RobotBody::GetRecoilSteadyCoefficient(v1);
  else
    return 0.0;
}

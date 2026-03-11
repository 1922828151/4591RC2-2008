/*
 * func-name: ?GetEnergy@Robot@GameClient@@QBEMXZ_0
 * func-address: 0x10173210
 * callers: 0x10007766
 * callees: none
 */

double __thiscall GameClient::Robot::GetEnergy(GameClient::Robot *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 48);
  if ( !v1 )
    return 0.0;
  return (float)*(double *)(v1 + 48);
}

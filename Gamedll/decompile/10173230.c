/*
 * func-name: ?GetExEnergy@Robot@GameClient@@QBEMXZ_0
 * func-address: 0x10173230
 * callers: 0x10008260
 * callees: none
 */

double __thiscall GameClient::Robot::GetExEnergy(GameClient::Robot *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 48);
  if ( !v1 )
    return 0.0;
  return (float)*(double *)(v1 + 56);
}

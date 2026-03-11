/*
 * func-name: ?GetMaxEnergy@Robot@GameClient@@QBEMXZ_0
 * func-address: 0x10173290
 * callers: 0x10005f8d
 * callees: none
 */

double __thiscall GameClient::Robot::GetMaxEnergy(GameClient::Robot *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 48);
  if ( !v1 )
    return 0.0;
  return (float)(*(double *)(v1 + 80) + *(double *)(v1 + 64));
}

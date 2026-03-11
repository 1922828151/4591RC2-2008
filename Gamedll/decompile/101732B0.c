/*
 * func-name: ?GetMaxExEnergy@Robot@GameClient@@QBEMXZ_0
 * func-address: 0x101732b0
 * callers: 0x10004d09
 * callees: none
 */

double __thiscall GameClient::Robot::GetMaxExEnergy(GameClient::Robot *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 48);
  if ( !v1 )
    return 0.0;
  return (float)(*(double *)(v1 + 88) + *(double *)(v1 + 72));
}

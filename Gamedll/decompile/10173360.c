/*
 * func-name: ?UpdateMalice@Robot@GameClient@@QAEXM@Z_0
 * func-address: 0x10173360
 * callers: 0x10003017
 * callees: none
 */

void __thiscall GameClient::Robot::UpdateMalice(GameClient::Robot *this, float a2)
{
  if ( a2 <= 0.0 )
  {
    *((_DWORD *)this + 92) &= ~0x400u;
    *((float *)this + 103) = 0.0;
  }
  else
  {
    *((_DWORD *)this + 92) |= 0x400u;
    *((float *)this + 103) = a2;
  }
}

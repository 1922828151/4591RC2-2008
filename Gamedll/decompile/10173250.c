/*
 * func-name: ?SetEnergy@Robot@GameClient@@QAEXM@Z_0
 * func-address: 0x10173250
 * callers: 0x10016fb3
 * callees: 0x10004f0c
 */

void __thiscall GameClient::Robot::SetEnergy(GameClient::Robot *this, float a2)
{
  GameClient::Func_Power *v2; // ecx

  v2 = (GameClient::Func_Power *)*((_DWORD *)this + 48);
  if ( v2 )
    GameClient::Func_Power::SetEnergy(v2, a2);
}

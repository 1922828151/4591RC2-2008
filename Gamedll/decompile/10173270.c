/*
 * func-name: ?SetExEnergy@Robot@GameClient@@QAEXM@Z_0
 * func-address: 0x10173270
 * callers: 0x10015d1b
 * callees: 0x1000209a
 */

void __thiscall GameClient::Robot::SetExEnergy(GameClient::Robot *this, float a2)
{
  GameClient::Func_Power *v2; // ecx

  v2 = (GameClient::Func_Power *)*((_DWORD *)this + 48);
  if ( v2 )
    GameClient::Func_Power::SetHyperEnergy(v2, a2);
}

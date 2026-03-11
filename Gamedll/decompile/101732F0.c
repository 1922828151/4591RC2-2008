/*
 * func-name: ?UseExEnergy@Robot@GameClient@@QBEXM@Z_0
 * func-address: 0x101732f0
 * callers: 0x10009070
 * callees: 0x100110b8
 */

void __thiscall GameClient::Robot::UseExEnergy(GameClient::Robot *this, float a2)
{
  GameClient::Func_Power *v2; // ecx

  v2 = (GameClient::Func_Power *)*((_DWORD *)this + 48);
  if ( v2 )
    GameClient::Func_Power::UseHyperEnergy(v2, a2);
}

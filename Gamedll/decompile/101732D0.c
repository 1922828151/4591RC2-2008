/*
 * func-name: ?UseEnergy@Robot@GameClient@@QBEXM@Z_0
 * func-address: 0x101732d0
 * callers: 0x10004421
 * callees: 0x100146eb
 */

void __thiscall GameClient::Robot::UseEnergy(GameClient::Robot *this, float a2)
{
  GameClient::Func_Power *v2; // ecx

  v2 = (GameClient::Func_Power *)*((_DWORD *)this + 48);
  if ( v2 )
    GameClient::Func_Power::UseEnergy(v2, a2);
}

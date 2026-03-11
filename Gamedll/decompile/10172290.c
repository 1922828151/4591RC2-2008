/*
 * func-name: ?GetMaxEnergy@Func_Power@GameClient@@QAEMXZ_0
 * func-address: 0x10172290
 * callers: 0x1000ded1
 * callees: none
 */

double __thiscall GameClient::Func_Power::GetMaxEnergy(GameClient::Func_Power *this)
{
  return (float)(*((double *)this + 10) + *((double *)this + 8));
}

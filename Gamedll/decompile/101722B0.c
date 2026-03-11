/*
 * func-name: ?GetMaxHyperEnergy@Func_Power@GameClient@@QAEMXZ_0
 * func-address: 0x101722b0
 * callers: 0x10006d43
 * callees: none
 */

double __thiscall GameClient::Func_Power::GetMaxHyperEnergy(GameClient::Func_Power *this)
{
  return (float)(*((double *)this + 11) + *((double *)this + 9));
}

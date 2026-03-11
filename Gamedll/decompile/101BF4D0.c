/*
 * func-name: ?SetHyperEnergy@Func_Power@GameClient@@QAEXM@Z_0
 * func-address: 0x101bf4d0
 * callers: 0x1000209a
 * callees: none
 */

void __thiscall GameClient::Func_Power::SetHyperEnergy(GameClient::Func_Power *this, float a2)
{
  *((double *)this + 7) = a2;
  if ( *((double *)this + 9) + *((double *)this + 11) < a2 )
    *((double *)this + 7) = *((double *)this + 11) + *((double *)this + 11);
}

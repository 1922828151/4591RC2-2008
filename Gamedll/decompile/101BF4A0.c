/*
 * func-name: ?SetEnergy@Func_Power@GameClient@@QAEXM@Z_0
 * func-address: 0x101bf4a0
 * callers: 0x10004f0c
 * callees: none
 */

void __thiscall GameClient::Func_Power::SetEnergy(GameClient::Func_Power *this, float a2)
{
  double v2; // st6

  *((double *)this + 6) = a2;
  v2 = *((double *)this + 10) + *((double *)this + 8);
  if ( v2 < a2 )
    *((double *)this + 6) = v2;
}

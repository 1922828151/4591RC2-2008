/*
 * func-name: ?SetHeat@Func_Power@GameClient@@QAEXM@Z_0
 * func-address: 0x101bf500
 * callers: 0x1001766b
 * callees: none
 */

void __thiscall GameClient::Func_Power::SetHeat(GameClient::Func_Power *this, float a2)
{
  *((float *)this + 42) = a2;
  if ( *((float *)this + 45) < (double)a2 )
    *((float *)this + 42) = *((float *)this + 45);
}

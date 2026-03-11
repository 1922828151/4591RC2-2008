/*
 * func-name: ?UseEnergy@Func_Power@GameClient@@QAE_NM@Z_0
 * func-address: 0x101bf590
 * callers: 0x100146eb
 * callees: none
 */

bool __thiscall GameClient::Func_Power::UseEnergy(GameClient::Func_Power *this, float a2)
{
  bool result; // al

  if ( a2 > *((double *)this + 6) )
    return 0;
  result = 1;
  *((double *)this + 6) = *((double *)this + 6) - a2;
  return result;
}

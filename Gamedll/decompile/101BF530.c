/*
 * func-name: ?InputEnergy@Func_Power@GameClient@@QAEMMM@Z_0
 * func-address: 0x101bf530
 * callers: 0x10007b1c
 * callees: none
 */

double __thiscall GameClient::Func_Power::InputEnergy(GameClient::Func_Power *this, float a2, float a3)
{
  double result; // st7
  float v4; // [esp+8h] [ebp+8h]
  float v5; // [esp+8h] [ebp+8h]

  v4 = a3 * *((double *)this + 14);
  result = v4;
  if ( a2 < (double)v4 )
    result = a2;
  if ( result + *((double *)this + 6) > *((double *)this + 8) )
  {
    v5 = *((double *)this + 8) - *((double *)this + 6);
    result = v5;
  }
  *((double *)this + 6) = result + *((double *)this + 6);
  return result;
}

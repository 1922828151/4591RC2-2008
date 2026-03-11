/*
 * func-name: ?UseHyperEnergy@Func_Power@GameClient@@QAE_NM@Z_0
 * func-address: 0x101bf5b0
 * callers: 0x100110b8
 * callees: none
 */

bool __thiscall GameClient::Func_Power::UseHyperEnergy(GameClient::Func_Power *this, float a2)
{
  double v2; // st7
  bool result; // al
  float v4; // [esp+4h] [ebp+4h]

  v2 = a2;
  if ( a2 > *((double *)this + 7) || 0.0 == v2 || *((float *)this + 46) < (double)*((float *)this + 42) )
    return 0;
  *((double *)this + 7) = *((double *)this + 7) - v2;
  v4 = v2 * *((float *)this + 43) + *((float *)this + 42);
  *((float *)this + 42) = v4;
  if ( *((float *)this + 45) < (double)v4 )
    *((float *)this + 42) = *((float *)this + 45);
  result = 1;
  *((float *)this + 53) = *(float *)&GSeconds;
  return result;
}

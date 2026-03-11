/*
 * func-name: ?GenerateHyperEnergy@Func_Power@GameClient@@IAEXM@Z_0
 * func-address: 0x101bf680
 * callers: 0x10018525
 * callees: none
 */

void __thiscall GameClient::Func_Power::GenerateHyperEnergy(GameClient::Func_Power *this, float a2)
{
  double v2; // st7
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+4h] [ebp+4h]
  float v5; // [esp+4h] [ebp+4h]

  if ( *((_BYTE *)this + 144) && *(float *)&GSeconds - *((float *)this + 53) >= 0.5 )
  {
    v3 = a2 * *((double *)this + 19);
    v2 = v3;
    if ( v3 > *((double *)this + 6) )
    {
      v4 = *((double *)this + 6);
      v2 = v4;
    }
    if ( v2 * *((double *)this + 20) + *((double *)this + 7) > *((double *)this + 9) )
    {
      v5 = (*((double *)this + 9) - *((double *)this + 7)) / *((double *)this + 20);
      v2 = v5;
    }
    *((double *)this + 6) = *((double *)this + 6) - v2;
    *((double *)this + 7) = v2 * *((double *)this + 20) + *((double *)this + 7);
  }
}

/*
 * func-name: ?GenerateEnergy@Func_Power@GameClient@@IAEXM@Z_0
 * func-address: 0x101bf640
 * callers: 0x10004caa
 * callees: none
 */

void __thiscall GameClient::Func_Power::GenerateEnergy(GameClient::Func_Power *this, float a2)
{
  double v2; // st7
  float v3; // [esp+4h] [ebp+4h]

  if ( *((_BYTE *)this + 128) )
  {
    v3 = a2 * *((double *)this + 17);
    v2 = v3 + *((double *)this + 6);
    *((double *)this + 6) = v2;
    if ( v2 > *((double *)this + 8) )
      *((double *)this + 6) = *((double *)this + 8);
  }
}

/*
 * func-name: ?OnCreate@Func_Power@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101bf290
 * callers: 0x1001aad7
 * callees: 0x1000ee1c
 */

bool __thiscall GameClient::Func_Power::OnCreate(GameClient::Func_Power *this, struct GameClient::Flyweight *a2)
{
  bool result; // al
  double v4; // st7
  double v5; // st7

  result = GameClient::DataObject::OnCreate(this, a2);
  if ( result )
  {
    v4 = *((float *)a2 + 27);
    *((double *)this + 6) = v4;
    *((double *)this + 4) = v4;
    v5 = *((float *)a2 + 28);
    *((double *)this + 7) = v5;
    *((double *)this + 5) = v5;
    *((_BYTE *)this + 112) = *((_BYTE *)a2 + 116);
    *((double *)this + 15) = *((float *)a2 + 30);
    *((_BYTE *)this + 128) = *((_BYTE *)a2 + 124);
    *((double *)this + 17) = *((float *)a2 + 32);
    result = 1;
    *((double *)this + 18) = *((float *)a2 + 33);
    *((float *)this + 39) = *((float *)a2 + 34);
    *((float *)this + 40) = *((float *)a2 + 35);
    *((float *)this + 41) = *((float *)a2 + 36);
    *((float *)this + 42) = *((float *)a2 + 37);
  }
  return result;
}

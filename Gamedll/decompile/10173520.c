/*
 * func-name: ?ShowDamage@Robot@GameClient@@QAEXABVVector@@K@Z_0
 * func-address: 0x10173520
 * callers: 0x100072b1
 * callees: 0x10006a19, 0x1000a097, 0x1000aff6, 0x1000eed0, 0x10012c29, 0x102c07a0, 0x102c0ed0, 0x102c9dbc
 */

void __thiscall GameClient::Robot::ShowDamage(GameClient::Robot *this, const struct Vector *a2, unsigned int a3)
{
  GameClient::FlyweightManager *v4; // eax
  float *Flyweight; // eax
  CameraHandler *v6; // eax
  float v7; // eax
  float v8; // ecx
  int v9; // eax
  float v10; // [esp+0h] [ebp-28h]
  float v11; // [esp+10h] [ebp-18h] BYREF
  float v12; // [esp+14h] [ebp-14h]
  float v13; // [esp+18h] [ebp-10h]
  float v14; // [esp+1Ch] [ebp-Ch] BYREF
  float v15; // [esp+20h] [ebp-8h]
  float v16; // [esp+24h] [ebp-4h]
  float v17; // [esp+30h] [ebp+8h]
  float v18; // [esp+30h] [ebp+8h]
  float v19; // [esp+30h] [ebp+8h]

  if ( GameClient::WorldObject::IsLocal(this) )
  {
    v4 = GameClient::FlyweightManager::Instance();
    Flyweight = (float *)GameClient::FlyweightManager::GetFlyweight(v4, a3);
    if ( Flyweight )
    {
      v11 = *((float *)this + 6) - *(float *)a2;
      v12 = *((float *)this + 7) - *((float *)a2 + 1);
      v13 = *((float *)this + 8) - *((float *)a2 + 2);
      v17 = v11 * v11 + v12 * v12 + v13 * v13;
      v18 = sqrt(v17);
      if ( Flyweight[46] > (double)v18 )
      {
        v11 = 0.0;
        v12 = Flyweight[48];
        v13 = 0.0;
        v14 = 0.0;
        v19 = 1.0 - v18 / Flyweight[46];
        v15 = v19 * Flyweight[47];
        v16 = 0.0;
        v10 = Flyweight[49];
        v6 = CameraHandler::Instance();
        CameraHandler::ShakeCamera(v6, (struct Vector *)&v14, (struct Vector *)&v11, v10);
      }
    }
    if ( *((_DWORD *)this + 372) )
    {
      *(float *)(*((_DWORD *)this + 372) + 32) = 1.0;
      *(float *)(*((_DWORD *)this + 372) + 36) = 0.0;
      v7 = *((float *)a2 + 1);
      v8 = *((float *)a2 + 2);
      v14 = *(float *)a2;
      v15 = v7;
      v16 = v8;
      v9 = sub_102C0ED0(&v11);
      *(float *)(*((_DWORD *)this + 372) + 40) = sub_102C07A0(v9, &v14);
    }
  }
}

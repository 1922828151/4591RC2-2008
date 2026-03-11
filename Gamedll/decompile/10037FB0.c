/*
 * func-name: sub_10037FB0
 * func-address: 0x10037fb0
 * callers: 0x1000a484
 * callees: 0x10003ca1, 0x1000aff6, 0x10012c29, 0x1001a0f5, 0x102c9ea8
 */

float *__thiscall sub_10037FB0(float *this, int a2)
{
  int v3; // eax
  void *v4; // edi
  GameClient::FlyweightManager *v5; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  struct GameClient::Flyweight *v7; // ebp
  GameClient::FlyweightManager *v8; // eax
  int v9; // ebp
  unsigned int v11; // [esp-4h] [ebp-2Ch]
  int v12; // [esp+14h] [ebp-14h]

  v3 = a2;
  v4 = this + 3;
  *this = 1.0;
  *((_DWORD *)this + 1) = v3;
  this[4] = 0.0;
  this[5] = 0.0;
  this[6] = 0.0;
  this[12] = 60.0;
  this[7] = 0.0;
  *((_DWORD *)this + 10) = 202310;
  this[13] = 0.0;
  *((_DWORD *)this + 11) = 202311;
  this[2] = 0.0;
  this[9] = 0.0;
  v5 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v5, 0x31646u);
  v11 = *((_DWORD *)this + 11);
  v7 = Flyweight;
  v8 = GameClient::FlyweightManager::Instance();
  a2 = (int)GameClient::FlyweightManager::GetFlyweight(v8, v11);
  v9 = _RTDynamicCast(
         v7,
         0,
         &GameClient::Flyweight `RTTI Type Descriptor',
         &GameClient::FRobotBody `RTTI Type Descriptor',
         0);
  v12 = _RTDynamicCast(
          a2,
          0,
          &GameClient::Flyweight `RTTI Type Descriptor',
          &GameClient::FRobotArmor `RTTI Type Descriptor',
          0);
  a2 = 202310;
  sub_1001A0F5(v4, (int)&a2);
  a2 = 202311;
  sub_1001A0F5(v4, (int)&a2);
  a2 = 202001;
  sub_1001A0F5(v4, (int)&a2);
  a2 = 203001;
  sub_1001A0F5(v4, (int)&a2);
  a2 = 203201;
  sub_1001A0F5(v4, (int)&a2);
  sub_10003CA1(
    v4,
    *(_DWORD *)(v9 + 308) + *(_DWORD *)(v12 + 332) + *(_DWORD *)(v12 + 336) + *(_DWORD *)(v9 + 304) + 3,
    -1);
  this[8] = 0.0;
  return this;
}

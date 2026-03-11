/*
 * func-name: sub_10037CB0
 * func-address: 0x10037cb0
 * callers: 0x100112c5
 * callees: 0x10003ca1, 0x1000735b, 0x1000aff6, 0x10012c29, 0x1001ac58, 0x102c9ea8
 */

_DWORD *__thiscall sub_10037CB0(_DWORD *this, int a2)
{
  _DWORD *result; // eax
  int v4; // eax
  GameClient::FlyweightManager *v5; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  int v7; // ecx
  struct GameClient::Flyweight *v8; // edi
  GameClient::FlyweightManager *v9; // eax
  struct GameClient::Flyweight *v10; // ebp
  int v11; // edi
  _DWORD *v12; // ebx
  int v13; // ebp
  unsigned int i; // edi
  int v15; // ecx
  int v16; // ecx
  _DWORD *v17; // ebp
  unsigned int v18; // [esp-10h] [ebp-18h]
  unsigned int v19; // [esp-10h] [ebp-18h]

  result = (_DWORD *)this[2];
  if ( result != this + 10 && result == this + 60 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    if ( !v4 || !((*(_DWORD *)(a2 + 8) - v4) >> 2) )
      _invalid_parameter_noinfo();
    v18 = **(_DWORD **)(a2 + 4);
    v5 = GameClient::FlyweightManager::Instance();
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v5, v18);
    v7 = *(_DWORD *)(a2 + 4);
    v8 = Flyweight;
    if ( !v7 || (unsigned int)((*(_DWORD *)(a2 + 8) - v7) >> 2) <= 1 )
      _invalid_parameter_noinfo();
    v19 = *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4);
    v9 = GameClient::FlyweightManager::Instance();
    v10 = GameClient::FlyweightManager::GetFlyweight(v9, v19);
    v11 = _RTDynamicCast(
            v8,
            0,
            &GameClient::Flyweight `RTTI Type Descriptor',
            &GameClient::FRobotBody `RTTI Type Descriptor',
            0);
    v12 = this + 79;
    v13 = _RTDynamicCast(
            v10,
            0,
            &GameClient::Flyweight `RTTI Type Descriptor',
            &GameClient::FRobotArmor `RTTI Type Descriptor',
            0);
    sub_1000735B(v12);
    sub_10003CA1(
      v12,
      *(_DWORD *)(v11 + 308) + *(_DWORD *)(v13 + 332) + *(_DWORD *)(v13 + 336) + *(_DWORD *)(v11 + 304) + 3,
      -1);
    for ( i = 0; i < sub_1001AC58(); ++i )
    {
      v15 = *(_DWORD *)(a2 + 4);
      if ( !v15 || i >= (*(_DWORD *)(a2 + 8) - v15) >> 2 )
        _invalid_parameter_noinfo();
      v16 = v12[1];
      v17 = (_DWORD *)(4 * i + *(_DWORD *)(a2 + 4));
      if ( !v16 || i >= (v12[2] - v16) >> 2 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(v12[1] + 4 * i) = *v17;
    }
    result = this;
    this[3] = this + 10;
  }
  return result;
}

/*
 * func-name: ?IsEquipMatchingRobotSystem@CRobotRoofUI@@AAE_NK@Z_0
 * func-address: 0x10282e10
 * callers: 0x100131c9
 * callees: 0x1000aff6, 0x1000e7b4, 0x100103c0, 0x10011766, 0x10012c29, 0x102c9d50
 */

bool __thiscall CRobotRoofUI::IsEquipMatchingRobotSystem(CRobotRoofUI *this, struct GameClient::FSystemPart *a2)
{
  GameClient::FlyweightManager *v3; // eax
  GameClient::FlyweightManager *v4; // eax
  struct GameClient::Flyweight *v5; // eax
  GameClient::FlyweightManager *v6; // eax
  struct GameClient::Flyweight *v7; // edi
  GameClient::FlyweightManager *v8; // eax
  struct GameClient::Flyweight *v9; // ebp
  unsigned int i; // edi
  int v11; // ecx
  int v12; // ecx
  GameClient::FlyweightManager *v13; // eax
  unsigned int j; // edi
  int v15; // ecx
  int v16; // ecx
  GameClient::FlyweightManager *v17; // eax
  struct GameClient::FSystemPart *v18; // esi
  bool v19; // bl
  unsigned int v21; // [esp-4h] [ebp-3Ch]
  unsigned int v22; // [esp-4h] [ebp-3Ch]
  unsigned int v23; // [esp-4h] [ebp-3Ch]
  unsigned int v24; // [esp-4h] [ebp-3Ch]
  unsigned int v25; // [esp-4h] [ebp-3Ch]
  int v26; // [esp+14h] [ebp-24h] BYREF
  struct GameClient::FSystemPart *Flyweight; // [esp+18h] [ebp-20h]
  int v28; // [esp+1Ch] [ebp-1Ch] BYREF
  void *v29; // [esp+20h] [ebp-18h]
  int v30; // [esp+24h] [ebp-14h]
  int v31; // [esp+28h] [ebp-10h]
  int v32; // [esp+34h] [ebp-4h]
  struct GameClient::FSystemPart *v33; // [esp+3Ch] [ebp+4h]

  v3 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v3, (unsigned int)a2);
  if ( !Flyweight )
    return 0;
  v21 = *((_DWORD *)this + 979);
  v4 = GameClient::FlyweightManager::Instance();
  v5 = GameClient::FlyweightManager::GetFlyweight(v4, v21);
  v22 = *((_DWORD *)this + 980);
  v33 = v5;
  v6 = GameClient::FlyweightManager::Instance();
  v7 = GameClient::FlyweightManager::GetFlyweight(v6, v22);
  v23 = *((_DWORD *)this + 981);
  v8 = GameClient::FlyweightManager::Instance();
  v9 = GameClient::FlyweightManager::GetFlyweight(v8, v23);
  if ( !v33 || !v7 || !v9 )
    return 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v26 = (int)v33;
  sub_10011766(&v28, (int)&v26);
  v26 = (int)v7;
  sub_10011766(&v28, (int)&v26);
  v26 = (int)v9;
  sub_10011766(&v28, (int)&v26);
  for ( i = 0; ; ++i )
  {
    v11 = *((_DWORD *)this + 983);
    if ( !v11 || i >= (*((_DWORD *)this + 984) - v11) >> 2 )
      break;
    v12 = *((_DWORD *)this + 983);
    if ( *(_DWORD *)(v12 + 4 * i) != -1 )
    {
      if ( !v12 || i >= (*((_DWORD *)this + 984) - v12) >> 2 )
        _invalid_parameter_noinfo();
      v24 = *(_DWORD *)(*((_DWORD *)this + 983) + 4 * i);
      v13 = GameClient::FlyweightManager::Instance();
      v26 = (int)GameClient::FlyweightManager::GetFlyweight(v13, v24);
      if ( v26 )
        sub_10011766(&v28, (int)&v26);
    }
  }
  for ( j = 0; ; ++j )
  {
    v15 = *((_DWORD *)this + 987);
    if ( !v15 || j >= (*((_DWORD *)this + 988) - v15) >> 2 )
      break;
    v16 = *((_DWORD *)this + 987);
    if ( *(_DWORD *)(v16 + 4 * j) != -1 )
    {
      if ( !v16 || j >= (*((_DWORD *)this + 988) - v16) >> 2 )
        _invalid_parameter_noinfo();
      v25 = *(_DWORD *)(*((_DWORD *)this + 987) + 4 * j);
      v17 = GameClient::FlyweightManager::Instance();
      v26 = (int)GameClient::FlyweightManager::GetFlyweight(v17, v25);
      if ( v26 )
        sub_10011766(&v28, (int)&v26);
    }
  }
  v18 = Flyweight;
  v19 = (unsigned __int8)GameClient::Robot::IsMatching((int)&v28, (int)Flyweight)
     && GameClient::Robot::IsMatchEquip(v33, v18);
  if ( v29 )
    operator delete(v29);
  return v19;
}

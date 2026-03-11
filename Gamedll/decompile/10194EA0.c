/*
 * func-name: ?OnCreate@Weapon@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x10194ea0
 * callers: 0x1000a81c
 * callees: 0x10006ef6, 0x1000aff6, 0x1001789b
 */

bool __thiscall GameClient::Weapon::OnCreate(GameClient::Weapon *this, struct GameClient::Flyweight *a2)
{
  int Flyweight; // eax
  int v5; // eax
  char v6; // [esp-1Ch] [ebp-34h] BYREF
  int v7; // [esp-18h] [ebp-30h]
  int v8; // [esp-14h] [ebp-2Ch]
  int v9; // [esp-10h] [ebp-28h]
  int v10; // [esp-Ch] [ebp-24h]
  int v11; // [esp-8h] [ebp-20h]
  int v12; // [esp-4h] [ebp-1Ch]
  int v13; // [esp+14h] [ebp-4h]

  if ( !a2 )
    return 0;
  if ( *((_DWORD *)a2 + 528) == -1 )
  {
    std::string::string(&v6, (char *)a2 + 2084);
    v13 = 0;
    GameClient::FlyweightManager::Instance();
    v13 = -1;
    Flyweight = GameClient::FlyweightManager::GetFlyweight(v6, v7, v8, v9, v10, v11, v12);
    if ( Flyweight )
      *((_DWORD *)a2 + 528) = *(_DWORD *)(Flyweight + 48);
  }
  if ( !*((_BYTE *)a2 + 2404) )
  {
    std::string::string(&v6, (char *)a2 + 2244);
    v13 = 1;
    GameClient::FlyweightManager::Instance();
    v13 = -1;
    v5 = GameClient::FlyweightManager::GetFlyweight(v6, v7, v8, v9, v10, v11, v12);
    if ( v5 )
      *((_DWORD *)a2 + 568) = *(_DWORD *)(v5 + 48);
  }
  return GameClient::Equip::OnCreate(this, a2);
}

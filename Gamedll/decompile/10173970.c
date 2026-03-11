/*
 * func-name: ?IsMatchArmor@Robot@GameClient@@SA_NPAVFSystemPart@2@0@Z_0
 * func-address: 0x10173970
 * callers: 0x100103c5
 * callees: 0x1000aff6, 0x1001789b
 */

bool __cdecl GameClient::Robot::IsMatchArmor(struct GameClient::FSystemPart *a1, struct GameClient::FSystemPart *a2)
{
  char v3; // [esp-1Ch] [ebp-30h] BYREF
  int v4; // [esp-18h] [ebp-2Ch]
  int v5; // [esp-14h] [ebp-28h]
  int v6; // [esp-10h] [ebp-24h]
  int v7; // [esp-Ch] [ebp-20h]
  int v8; // [esp-8h] [ebp-1Ch]
  int v9; // [esp-4h] [ebp-18h]
  int v10; // [esp+10h] [ebp-4h]

  if ( !a1 || !a2 )
    return 0;
  std::string::string(&v3, (char *)a2 + 304);
  v10 = 0;
  GameClient::FlyweightManager::Instance();
  v10 = -1;
  return a1 == (struct GameClient::FSystemPart *)GameClient::FlyweightManager::GetFlyweight(v3, v4, v5, v6, v7, v8, v9);
}

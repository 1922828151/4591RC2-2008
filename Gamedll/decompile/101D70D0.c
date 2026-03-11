/*
 * func-name: ?CreateInstance@BattleFieldManager@GameClient@@SA_NXZ_0
 * func-address: 0x101d70d0
 * callers: 0x10014f38
 * callees: 0x1001394e, 0x102c9d98
 */

bool __cdecl GameClient::BattleFieldManager::CreateInstance()
{
  GameClient::BattleFieldManager *v0; // eax
  GameClient::BattleFieldManager *v1; // eax

  v0 = (GameClient::BattleFieldManager *)operator new(0x54u);
  if ( v0 )
    v1 = (GameClient::BattleFieldManager *)GameClient::BattleFieldManager::BattleFieldManager(v0);
  else
    v1 = 0;
  GameClient::BattleFieldManager::s_pInstance = v1;
  return v1 != 0;
}

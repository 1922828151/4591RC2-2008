/*
 * func-name: ?CreateInstance@FlyweightManager@GameClient@@SA_NXZ_0
 * func-address: 0x1022f4a0
 * callers: 0x10019826
 * callees: 0x10008463, 0x1000e9d0, 0x102c9d50, 0x102c9d98
 */

char __cdecl GameClient::FlyweightManager::CreateInstance()
{
  GameClient::FlyweightManager *v0; // esi
  GameClient::FlyweightManager *v1; // eax
  GameClient::FlyweightManager *v2; // eax

  if ( GameClient::FlyweightManager::s_pInstance )
  {
    v0 = GameClient::FlyweightManager::s_pInstance;
    GameClient::FlyweightManager::~FlyweightManager(GameClient::FlyweightManager::s_pInstance);
    operator delete(v0);
    GameClient::FlyweightManager::s_pInstance = 0;
  }
  v1 = (GameClient::FlyweightManager *)operator new(0x54u);
  if ( v1 )
    v2 = (GameClient::FlyweightManager *)GameClient::FlyweightManager::FlyweightManager(v1);
  else
    v2 = 0;
  GameClient::FlyweightManager::s_pInstance = v2;
  return 1;
}

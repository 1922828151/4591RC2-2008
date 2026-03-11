/*
 * func-name: ?DestroyInstance@FlyweightManager@GameClient@@SAXXZ_0
 * func-address: 0x1022ef30
 * callers: 0x10012acb
 * callees: 0x1000e9d0, 0x102c9d50
 */

void __cdecl GameClient::FlyweightManager::DestroyInstance()
{
  GameClient::FlyweightManager *v0; // esi

  if ( GameClient::FlyweightManager::s_pInstance )
  {
    v0 = GameClient::FlyweightManager::s_pInstance;
    GameClient::FlyweightManager::~FlyweightManager(GameClient::FlyweightManager::s_pInstance);
    operator delete(v0);
    GameClient::FlyweightManager::s_pInstance = 0;
  }
}

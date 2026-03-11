/*
 * func-name: ?DestroyInstance@AuraManager@GameClient@@SAXXZ_0
 * func-address: 0x10144070
 * callers: 0x100110d1
 * callees: 0x100140ce, 0x102c9d50
 */

void __cdecl GameClient::AuraManager::DestroyInstance()
{
  GameClient::AuraManager *v0; // esi

  if ( GameClient::AuraManager::ms_pInstance )
  {
    v0 = GameClient::AuraManager::ms_pInstance;
    GameClient::AuraManager::~AuraManager(GameClient::AuraManager::ms_pInstance);
    operator delete(v0);
    GameClient::AuraManager::ms_pInstance = 0;
  }
}

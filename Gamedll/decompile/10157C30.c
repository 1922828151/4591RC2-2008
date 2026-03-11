/*
 * func-name: ?DestroyInstance@DamageManager@GameClient@@SAXXZ_0
 * func-address: 0x10157c30
 * callers: 0x100145d8
 * callees: 0x1001a9f1, 0x102c9d50
 */

void __cdecl GameClient::DamageManager::DestroyInstance()
{
  GameClient::DamageManager *v0; // esi

  if ( GameClient::DamageManager::ms_pInstance )
  {
    v0 = GameClient::DamageManager::ms_pInstance;
    GameClient::DamageManager::~DamageManager(GameClient::DamageManager::ms_pInstance);
    operator delete(v0);
    GameClient::DamageManager::ms_pInstance = 0;
  }
}

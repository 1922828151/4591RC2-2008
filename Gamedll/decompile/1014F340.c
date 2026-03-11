/*
 * func-name: ?DestroyInstance@EquipManager@GameClient@@SAXXZ_0
 * func-address: 0x1014f340
 * callers: 0x1001857a
 * callees: 0x1001143c, 0x102c9d50
 */

void __cdecl GameClient::EquipManager::DestroyInstance()
{
  GameClient::EquipManager *v0; // esi

  if ( GameClient::EquipManager::ms_pInstance )
  {
    v0 = GameClient::EquipManager::ms_pInstance;
    GameClient::EquipManager::~EquipManager(GameClient::EquipManager::ms_pInstance);
    operator delete(v0);
    GameClient::EquipManager::ms_pInstance = 0;
  }
}

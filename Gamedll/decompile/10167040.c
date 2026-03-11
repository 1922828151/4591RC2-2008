/*
 * func-name: ?DestroyInstance@SkillManager@GameClient@@SAXXZ_0
 * func-address: 0x10167040
 * callers: 0x1001a438
 * callees: 0x10015627, 0x102c9d50
 */

void __cdecl GameClient::SkillManager::DestroyInstance()
{
  GameClient::SkillManager *v0; // esi

  if ( GameClient::SkillManager::ms_pInstance )
  {
    v0 = GameClient::SkillManager::ms_pInstance;
    GameClient::SkillManager::~SkillManager(GameClient::SkillManager::ms_pInstance);
    operator delete(v0);
    GameClient::SkillManager::ms_pInstance = 0;
  }
}

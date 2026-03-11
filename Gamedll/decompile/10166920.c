/*
 * func-name: ?Instance@SkillManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x10166920
 * callers: 0x1000f885
 * callees: 0x1000d931, 0x102c9d98
 */

struct GameClient::SkillManager *__cdecl GameClient::SkillManager::Instance()
{
  struct GameClient::SkillManager *result; // eax
  GameClient::SkillManager *v1; // eax

  result = GameClient::SkillManager::ms_pInstance;
  if ( !GameClient::SkillManager::ms_pInstance )
  {
    v1 = (GameClient::SkillManager *)operator new(0x28u);
    if ( v1 )
    {
      result = (struct GameClient::SkillManager *)GameClient::SkillManager::SkillManager(v1);
      GameClient::SkillManager::ms_pInstance = result;
    }
    else
    {
      result = 0;
      GameClient::SkillManager::ms_pInstance = 0;
    }
  }
  return result;
}

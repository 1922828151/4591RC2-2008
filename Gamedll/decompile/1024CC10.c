/*
 * func-name: ?CreateInstance@FSLock@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1024cc10
 * callers: 0x10013ae8
 * callees: 0x1000f52e, 0x1000f885, 0x10014b41, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FSLock::CreateInstance(GameClient::FSLock *this, unsigned int a2)
{
  GameClient::SLock *v2; // eax
  struct GameClient::Skill *v3; // esi
  GameClient::SkillManager *v4; // eax

  v2 = (GameClient::SLock *)operator new(0x2BCu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Skill *)GameClient::SLock::SLock(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::SkillManager::Instance();
    GameClient::SkillManager::AddSkill(v4, v3);
  }
  return v3;
}

/*
 * func-name: ?CreateInstance@FSkill@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1024c240
 * callers: 0x1000de6d
 * callees: 0x1000f52e, 0x1000f885, 0x10015488, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FSkill::CreateInstance(GameClient::FSkill *this, unsigned int a2)
{
  GameClient::Skill *v2; // eax
  struct GameClient::Skill *v3; // esi
  GameClient::SkillManager *v4; // eax

  v2 = (GameClient::Skill *)operator new(0x29Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Skill *)GameClient::Skill::Skill(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::SkillManager::Instance();
    GameClient::SkillManager::AddSkill(v4, v3);
  }
  return v3;
}

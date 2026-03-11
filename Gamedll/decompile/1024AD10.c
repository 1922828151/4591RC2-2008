/*
 * func-name: ?CreateInstance@FSAlarm@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1024ad10
 * callers: 0x100027a7
 * callees: 0x1000f52e, 0x1000f885, 0x10018a7f, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FSAlarm::CreateInstance(
        GameClient::FSAlarm *this,
        unsigned int a2)
{
  GameClient::SAlarm *v2; // eax
  struct GameClient::Skill *v3; // esi
  GameClient::SkillManager *v4; // eax

  v2 = (GameClient::SAlarm *)operator new(0x29Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Skill *)GameClient::SAlarm::SAlarm(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::SkillManager::Instance();
    GameClient::SkillManager::AddSkill(v4, v3);
  }
  return v3;
}

/*
 * func-name: ?DestroyInstance@FSkill@GameClient@@UAEXK@Z_0
 * func-address: 0x1024c2c0
 * callers: 0x10014286
 * callees: 0x1000f885, 0x100116d0
 */

void __thiscall GameClient::FSkill::DestroyInstance(GameClient::FSkill *this, unsigned int a2)
{
  GameClient::SkillManager *v2; // eax
  struct GameClient::Skill *v3; // eax

  v2 = GameClient::SkillManager::Instance();
  v3 = GameClient::SkillManager::RemoveSkill(v2, a2);
  if ( v3 )
    (**(void (__thiscall ***)(struct GameClient::Skill *, int))v3)(v3, 1);
}

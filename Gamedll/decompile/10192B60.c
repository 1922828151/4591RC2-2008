/*
 * func-name: ?CanCastingSkill@SkillManager@GameClient@@QBE_NPAVWorldObject@2@0PAVSkill@2@M@Z_0
 * func-address: 0x10192b60
 * callers: 0x1000cb17
 * callees: none
 */

bool __thiscall GameClient::SkillManager::CanCastingSkill(
        GameClient::SkillManager *this,
        struct GameClient::WorldObject *a2,
        struct GameClient::WorldObject *a3,
        struct GameClient::Skill *a4,
        float a5)
{
  return a2 != 0;
}

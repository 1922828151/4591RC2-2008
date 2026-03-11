/*
 * func-name: ?CanCastSkill@SkillManager@GameClient@@QBE_NPAVWorldObject@2@0PAVSkill@2@@Z_0
 * func-address: 0x10192b40
 * callers: 0x10004359
 * callees: none
 */

bool __thiscall GameClient::SkillManager::CanCastSkill(
        GameClient::SkillManager *this,
        struct GameClient::WorldObject *a2,
        struct GameClient::WorldObject *a3,
        struct GameClient::Skill *a4)
{
  return a2 && a4;
}

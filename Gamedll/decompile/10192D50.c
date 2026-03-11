/*
 * func-name: ??1SkillManager@GameClient@@QAE@XZ_0
 * func-address: 0x10192d50
 * callers: 0x10015627
 * callees: 0x1000b6c2, 0x10015352, 0x102c9d50
 */

void __thiscall GameClient::SkillManager::~SkillManager(void **this)
{
  GameClient::SkillManager::ClearSkill();
  if ( this[5] )
    operator delete(this[5]);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10015352();
}

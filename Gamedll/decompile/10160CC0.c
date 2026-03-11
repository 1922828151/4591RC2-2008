/*
 * func-name: ?GetSkillID@Skill@GameClient@@QBEJXZ_0
 * func-address: 0x10160cc0
 * callers: 0x10004fed
 * callees: none
 */

int __thiscall GameClient::Skill::GetSkillID(GameClient::Skill *this)
{
  return *((_DWORD *)this + 3);
}

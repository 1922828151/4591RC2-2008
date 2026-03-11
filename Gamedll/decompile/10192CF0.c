/*
 * func-name: ?AddSkill@SkillManager@GameClient@@QAEPAVSkill@2@PAV32@@Z_0
 * func-address: 0x10192cf0
 * callers: 0x1000f52e
 * callees: 0x1000cbb7
 */

struct GameClient::Skill *__thiscall GameClient::SkillManager::AddSkill(
        GameClient::SkillManager *this,
        struct GameClient::Skill *a2)
{
  _DWORD v3[2]; // [esp+4h] [ebp-14h] BYREF
  _BYTE v4[12]; // [esp+Ch] [ebp-Ch] BYREF

  if ( !a2 )
    return 0;
  v3[0] = *((_DWORD *)a2 + 3);
  v3[1] = a2;
  sub_1000CBB7((int)v4, (int)v3);
  return a2;
}

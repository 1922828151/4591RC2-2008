/*
 * func-name: ?RemoveSkill@SkillManager@GameClient@@QAEPAVSkill@2@K@Z_0
 * func-address: 0x10192c50
 * callers: 0x100116d0
 * callees: 0x10002383, 0x10009b47
 */

struct GameClient::Skill *__thiscall GameClient::SkillManager::RemoveSkill(
        GameClient::SkillManager *this,
        unsigned int a2)
{
  int v3; // edi
  void *v4; // ebp
  _DWORD *v5; // ebx
  int v6; // ebp
  int v8; // [esp+10h] [ebp-8h] BYREF
  void *v9; // [esp+14h] [ebp-4h]

  sub_10009B47((int)&v8, (int)&a2);
  v3 = v8;
  v4 = (void *)*((_DWORD *)this + 2);
  if ( !v8 || (GameClient::SkillManager *)v8 != (GameClient::SkillManager *)((char *)this + 4) )
    _invalid_parameter_noinfo();
  v5 = v9;
  if ( v9 == v4 )
    return 0;
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v5 == *(_DWORD **)(v3 + 4) )
    _invalid_parameter_noinfo();
  v6 = v5[3];
  sub_10002383((int)&v8, v3, v5);
  return (struct GameClient::Skill *)v6;
}

/*
 * func-name: ?NewSkill@FlyweightManager@GameClient@@QAEPAVSkill@2@KKAAVBinStream@@@Z_0
 * func-address: 0x1022e040
 * callers: 0x1000fa6a
 * callees: 0x10013a84
 */

struct GameClient::Skill *__thiscall GameClient::FlyweightManager::NewSkill(
        GameClient::FlyweightManager *this,
        unsigned int a2,
        unsigned int a3,
        struct BinStream *a4)
{
  struct GameClient::Skill *result; // eax
  struct GameClient::Skill *v5; // esi

  result = GameClient::FlyweightManager::NewInstance(this, a2, a3);
  v5 = result;
  if ( result )
  {
    (*(void (__thiscall **)(struct GameClient::Skill *, struct BinStream *))(*(_DWORD *)result + 12))(result, a4);
    (*(void (__thiscall **)(struct GameClient::Skill *))(*(_DWORD *)v5 + 32))(v5);
    return v5;
  }
  return result;
}

/*
 * func-name: ?NewAura@FlyweightManager@GameClient@@QAEPAVAura@2@KKAAVBinStream@@@Z_0
 * func-address: 0x1022e080
 * callers: 0x10008d87
 * callees: 0x10013a84
 */

struct GameClient::Aura *__thiscall GameClient::FlyweightManager::NewAura(
        GameClient::FlyweightManager *this,
        unsigned int a2,
        unsigned int a3,
        struct BinStream *a4)
{
  struct GameClient::Aura *result; // eax
  struct GameClient::Aura *v5; // esi

  result = GameClient::FlyweightManager::NewInstance(this, a2, a3);
  v5 = result;
  if ( result )
  {
    (*(void (__thiscall **)(struct GameClient::Aura *, struct BinStream *))(*(_DWORD *)result + 12))(result, a4);
    (*(void (__thiscall **)(struct GameClient::Aura *))(*(_DWORD *)v5 + 28))(v5);
    return v5;
  }
  return result;
}

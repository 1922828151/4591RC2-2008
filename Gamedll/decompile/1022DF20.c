/*
 * func-name: ?NewWorldObject@FlyweightManager@GameClient@@QAEPAVWorldObject@2@KKKAAVBinStream@@@Z_0
 * func-address: 0x1022df20
 * callers: 0x100034b8
 * callees: 0x10011702, 0x10013a84
 */

struct GameClient::WorldObject *__thiscall GameClient::FlyweightManager::NewWorldObject(
        GameClient::FlyweightManager *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct BinStream *a5)
{
  struct GameClient::WorldObject *result; // eax
  struct GameClient::WorldObject *v6; // esi

  result = GameClient::FlyweightManager::NewInstance(this, a2, a3);
  v6 = result;
  if ( result )
  {
    GameClient::WorldObject::SetCharacterID(result, a4);
    (*(void (__thiscall **)(struct GameClient::WorldObject *, struct BinStream *))(*(_DWORD *)v6 + 12))(v6, a5);
    (*(void (__thiscall **)(struct GameClient::WorldObject *))(*(_DWORD *)v6 + 24))(v6);
    return v6;
  }
  return result;
}

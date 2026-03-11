/*
 * func-name: ?CreateInstance@FASearch@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10249980
 * callers: 0x10016da1
 * callees: 0x1000dc92, 0x10012837, 0x100161da, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FASearch::CreateInstance(
        GameClient::FASearch *this,
        unsigned int a2)
{
  GameClient::ASearch *v2; // eax
  struct GameClient::Aura *v3; // esi
  GameClient::AuraManager *v4; // eax

  v2 = (GameClient::ASearch *)operator new(0x9Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Aura *)GameClient::ASearch::ASearch(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::AuraManager::Instance();
    GameClient::AuraManager::AddAura(v4, v3);
  }
  return v3;
}

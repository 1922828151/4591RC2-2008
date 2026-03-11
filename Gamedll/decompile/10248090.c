/*
 * func-name: ?CreateInstance@FAEnergy@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10248090
 * callers: 0x1000cc0c
 * callees: 0x10008ed1, 0x1000dc92, 0x10012837, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FAEnergy::CreateInstance(
        GameClient::FAEnergy *this,
        unsigned int a2)
{
  GameClient::AEnergy *v2; // eax
  struct GameClient::Aura *v3; // esi
  GameClient::AuraManager *v4; // eax

  v2 = (GameClient::AEnergy *)operator new(0x9Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Aura *)GameClient::AEnergy::AEnergy(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::AuraManager::Instance();
    GameClient::AuraManager::AddAura(v4, v3);
  }
  return v3;
}

/*
 * func-name: ?CreateInstance@FASatelliteCapability@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10249570
 * callers: 0x1000605a
 * callees: 0x100087e7, 0x1000dc92, 0x10012837, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FASatelliteCapability::CreateInstance(
        GameClient::FASatelliteCapability *this,
        unsigned int a2)
{
  GameClient::ASatelliteCapability *v2; // eax
  struct GameClient::Aura *v3; // esi
  GameClient::AuraManager *v4; // eax

  v2 = (GameClient::ASatelliteCapability *)operator new(0x9Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Aura *)GameClient::ASatelliteCapability::ASatelliteCapability(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::AuraManager::Instance();
    GameClient::AuraManager::AddAura(v4, v3);
  }
  return v3;
}

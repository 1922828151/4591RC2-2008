/*
 * func-name: ?CreateInstance@FACapability@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10247690
 * callers: 0x1000d5ee
 * callees: 0x10009d59, 0x1000dc92, 0x10012837, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FACapability::CreateInstance(
        GameClient::FACapability *this,
        unsigned int a2)
{
  GameClient::ACapability *v2; // eax
  struct GameClient::Aura *v3; // esi
  GameClient::AuraManager *v4; // eax

  v2 = (GameClient::ACapability *)operator new(0x9Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Aura *)GameClient::ACapability::ACapability(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::AuraManager::Instance();
    GameClient::AuraManager::AddAura(v4, v3);
  }
  return v3;
}

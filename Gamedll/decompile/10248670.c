/*
 * func-name: ?CreateInstance@FAMovement@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10248670
 * callers: 0x1001074e
 * callees: 0x10009fde, 0x1000dc92, 0x10012837, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FAMovement::CreateInstance(
        GameClient::FAMovement *this,
        unsigned int a2)
{
  GameClient::AMovement *v2; // eax
  struct GameClient::Aura *v3; // esi
  GameClient::AuraManager *v4; // eax

  v2 = (GameClient::AMovement *)operator new(0x9Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Aura *)GameClient::AMovement::AMovement(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::AuraManager::Instance();
    GameClient::AuraManager::AddAura(v4, v3);
  }
  return v3;
}

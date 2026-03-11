/*
 * func-name: ?CreateInstance@FAura@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1024a850
 * callers: 0x10002144
 * callees: 0x10001154, 0x1000dc92, 0x10012837, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FAura::CreateInstance(GameClient::FAura *this, unsigned int a2)
{
  GameClient::Aura *v2; // eax
  struct GameClient::Aura *v3; // esi
  GameClient::AuraManager *v4; // eax

  v2 = (GameClient::Aura *)operator new(0x9Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Aura *)GameClient::Aura::Aura(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::AuraManager::Instance();
    GameClient::AuraManager::AddAura(v4, v3);
  }
  return v3;
}

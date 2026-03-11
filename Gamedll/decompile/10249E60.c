/*
 * func-name: ?CreateInstance@FASummon@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10249e60
 * callers: 0x10008549
 * callees: 0x1000dc92, 0x10012837, 0x100175cb, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FASummon::CreateInstance(
        GameClient::FASummon *this,
        unsigned int a2)
{
  GameClient::ASummon *v2; // eax
  struct GameClient::Aura *v3; // esi
  GameClient::AuraManager *v4; // eax

  v2 = (GameClient::ASummon *)operator new(0xA4u);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Aura *)GameClient::ASummon::ASummon(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::AuraManager::Instance();
    GameClient::AuraManager::AddAura(v4, v3);
  }
  return v3;
}

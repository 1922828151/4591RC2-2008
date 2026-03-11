/*
 * func-name: ?CreateInstance@FAAlarm@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10246d40
 * callers: 0x1000e601
 * callees: 0x1000c144, 0x1000dc92, 0x10012837, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FAAlarm::CreateInstance(
        GameClient::FAAlarm *this,
        unsigned int a2)
{
  GameClient::AAlarm *v2; // eax
  struct GameClient::Aura *v3; // esi
  GameClient::AuraManager *v4; // eax

  v2 = (GameClient::AAlarm *)operator new(0xA8u);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::Aura *)GameClient::AAlarm::AAlarm(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::AuraManager::Instance();
    GameClient::AuraManager::AddAura(v4, v3);
  }
  return v3;
}

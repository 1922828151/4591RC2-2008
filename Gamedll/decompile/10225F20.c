/*
 * func-name: ?CreateInstance@FDamageEquip@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10225f20
 * callers: 0x1000806c
 * callees: 0x10001514, 0x10003bd9, 0x100091c4, 0x100097a0, 0x10012616, 0x1001344e, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FDamageEquip::CreateInstance(
        GameClient::FDamageEquip *this,
        unsigned int a2)
{
  GameClient::DamageEquip *v2; // eax
  struct GameClient::SystemPart *v3; // esi
  GameClient::EquipManager *v4; // eax
  struct GameClient::DamageUnit *v5; // eax

  v2 = (GameClient::DamageEquip *)operator new(0x388u);
  if ( v2 )
    v3 = (struct GameClient::SystemPart *)GameClient::DamageEquip::DamageEquip(v2, a2);
  else
    v3 = 0;
  if ( a2 != -1 )
  {
    v4 = GameClient::EquipManager::Instance();
    GameClient::EquipManager::AddSystemPart(v4, v3);
    sub_10001514((int)v3);
    if ( v3 )
      v5 = (struct GameClient::SystemPart *)((char *)v3 + 780);
    else
      v5 = 0;
    GameClient::DamageManager::AddDamageUnit(GameClient::DamageManager::ms_pInstance, a2, v5);
    sub_10003BD9((int)v3);
  }
  return v3;
}

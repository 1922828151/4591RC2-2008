/*
 * func-name: ?CreateInstance@FWeapon@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10242190
 * callers: 0x100158de
 * callees: 0x10001514, 0x100097a0, 0x1000f844, 0x1001344e, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FWeapon::CreateInstance(
        GameClient::FWeapon *this,
        unsigned int a2)
{
  GameClient::Weapon *v2; // eax
  struct GameClient::SystemPart *v3; // esi
  GameClient::EquipManager *v4; // eax

  v2 = (GameClient::Weapon *)operator new(0x5CCu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::SystemPart *)GameClient::Weapon::Weapon(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::EquipManager::Instance();
    GameClient::EquipManager::AddSystemPart(v4, v3);
    sub_10001514((int)v3);
  }
  return v3;
}

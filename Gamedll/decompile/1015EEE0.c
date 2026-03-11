/*
 * func-name: ?createWeapon@EquipManager@GameClient@@AAEPAVSystemPart@2@PAVFSystemPart@2@@Z_0
 * func-address: 0x1015eee0
 * callers: 0x1000d76a
 * callees: 0x1000f844, 0x102c9d98
 */

struct GameClient::SystemPart *__thiscall GameClient::EquipManager::createWeapon(
        GameClient::EquipManager *this,
        struct GameClient::FSystemPart *a2)
{
  GameClient::Weapon *v2; // eax

  v2 = (GameClient::Weapon *)operator new(0x5CCu);
  if ( v2 )
    return (struct GameClient::SystemPart *)GameClient::Weapon::Weapon(v2, 0);
  else
    return 0;
}

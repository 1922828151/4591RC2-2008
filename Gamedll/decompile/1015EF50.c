/*
 * func-name: ?createItem@EquipManager@GameClient@@AAEPAVSystemPart@2@PAVFSystemPart@2@@Z_0
 * func-address: 0x1015ef50
 * callers: 0x10009ceb
 * callees: 0x100116fd, 0x102c9d98
 */

struct GameClient::SystemPart *__thiscall GameClient::EquipManager::createItem(
        GameClient::EquipManager *this,
        struct GameClient::FSystemPart *a2)
{
  GameClient::Item *v2; // eax

  v2 = (GameClient::Item *)operator new(0x30Cu);
  if ( v2 )
    return (struct GameClient::SystemPart *)GameClient::Item::Item(v2, 0);
  else
    return 0;
}

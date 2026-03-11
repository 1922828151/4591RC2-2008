/*
 * func-name: ?CreateInstance@FItem@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1022d900
 * callers: 0x1001928b
 * callees: 0x10001514, 0x100097a0, 0x100116fd, 0x1001344e, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FItem::CreateInstance(GameClient::FItem *this, unsigned int a2)
{
  GameClient::Item *v2; // eax
  struct GameClient::SystemPart *v3; // esi
  GameClient::EquipManager *v4; // eax

  v2 = (GameClient::Item *)operator new(0x30Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::SystemPart *)GameClient::Item::Item(v2, a2);
  if ( a2 != -1 )
  {
    v4 = GameClient::EquipManager::Instance();
    GameClient::EquipManager::AddSystemPart(v4, v3);
    sub_10001514((int)v3);
  }
  return v3;
}

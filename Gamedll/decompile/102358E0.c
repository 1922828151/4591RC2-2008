/*
 * func-name: ?CreateInstance@FRobotArmor@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x102358e0
 * callers: 0x100186f6
 * callees: 0x10001514, 0x10004a7a, 0x100097a0, 0x1001344e, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FRobotArmor::CreateInstance(
        GameClient::FRobotArmor *this,
        unsigned int a2)
{
  GameClient::RobotArmor *v2; // eax
  struct GameClient::SystemPart *v3; // esi
  GameClient::EquipManager *v4; // eax

  v2 = (GameClient::RobotArmor *)operator new(0xA0u);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::SystemPart *)GameClient::RobotArmor::RobotArmor(v2, a2);
  v4 = GameClient::EquipManager::Instance();
  GameClient::EquipManager::AddSystemPart(v4, v3);
  sub_10001514((int)v3);
  return v3;
}

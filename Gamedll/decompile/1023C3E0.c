/*
 * func-name: ?CreateInstance@FRobotCore@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1023c3e0
 * callers: 0x100078bf
 * callees: 0x10001514, 0x10004a75, 0x100097a0, 0x1001344e, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FRobotCore::CreateInstance(
        GameClient::FRobotCore *this,
        unsigned int a2)
{
  GameClient::RobotCore *v2; // eax
  struct GameClient::SystemPart *v3; // esi
  GameClient::EquipManager *v4; // eax

  v2 = (GameClient::RobotCore *)operator new(0x9Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::SystemPart *)GameClient::RobotCore::RobotCore(v2, a2);
  v4 = GameClient::EquipManager::Instance();
  GameClient::EquipManager::AddSystemPart(v4, v3);
  sub_10001514((int)v3);
  return v3;
}

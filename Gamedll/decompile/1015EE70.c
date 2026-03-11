/*
 * func-name: ?createRobotCore@EquipManager@GameClient@@AAEPAVSystemPart@2@PAVFSystemPart@2@@Z_0
 * func-address: 0x1015ee70
 * callers: 0x1001437b
 * callees: 0x10004a75, 0x102c9d98
 */

struct GameClient::SystemPart *__thiscall GameClient::EquipManager::createRobotCore(
        GameClient::EquipManager *this,
        struct GameClient::FSystemPart *a2)
{
  GameClient::RobotCore *v2; // eax

  v2 = (GameClient::RobotCore *)operator new(0x9Cu);
  if ( v2 )
    return (struct GameClient::SystemPart *)GameClient::RobotCore::RobotCore(v2, 0);
  else
    return 0;
}

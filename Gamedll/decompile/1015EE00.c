/*
 * func-name: ?createRobotArmor@EquipManager@GameClient@@AAEPAVSystemPart@2@PAVFSystemPart@2@@Z_0
 * func-address: 0x1015ee00
 * callers: 0x100041a6
 * callees: 0x10004a7a, 0x102c9d98
 */

struct GameClient::SystemPart *__thiscall GameClient::EquipManager::createRobotArmor(
        GameClient::EquipManager *this,
        struct GameClient::FSystemPart *a2)
{
  GameClient::RobotArmor *v2; // eax

  v2 = (GameClient::RobotArmor *)operator new(0xA0u);
  if ( v2 )
    return (struct GameClient::SystemPart *)GameClient::RobotArmor::RobotArmor(v2, 0);
  else
    return 0;
}

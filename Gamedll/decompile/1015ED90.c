/*
 * func-name: ?createRobotBody@EquipManager@GameClient@@AAEPAVSystemPart@2@PAVFSystemPart@2@@Z_0
 * func-address: 0x1015ed90
 * callers: 0x10015ef6
 * callees: 0x1000fa6f, 0x102c9d98
 */

struct GameClient::SystemPart *__thiscall GameClient::EquipManager::createRobotBody(
        GameClient::EquipManager *this,
        struct GameClient::FSystemPart *a2)
{
  GameClient::RobotBody *v2; // eax

  v2 = (GameClient::RobotBody *)operator new(0x9Cu);
  if ( v2 )
    return (struct GameClient::SystemPart *)GameClient::RobotBody::RobotBody(v2, 0);
  else
    return 0;
}

/*
 * func-name: ?CreateInstance@FRobotBody@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10238550
 * callers: 0x10012ca1
 * callees: 0x10001514, 0x100097a0, 0x1000fa6f, 0x1001344e, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FRobotBody::CreateInstance(
        GameClient::FRobotBody *this,
        unsigned int a2)
{
  GameClient::RobotBody *v2; // eax
  struct GameClient::SystemPart *v3; // esi
  GameClient::EquipManager *v4; // eax

  v2 = (GameClient::RobotBody *)operator new(0x9Cu);
  v3 = 0;
  if ( v2 )
    v3 = (struct GameClient::SystemPart *)GameClient::RobotBody::RobotBody(v2, a2);
  v4 = GameClient::EquipManager::Instance();
  GameClient::EquipManager::AddSystemPart(v4, v3);
  sub_10001514((int)v3);
  return v3;
}

/*
 * func-name: ?CreateInstance@FRobot@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10235440
 * callers: 0x1001096a
 * callees: 0x10001195, 0x10001514, 0x100045a7, 0x100091c4, 0x1000a3a8, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FRobot::CreateInstance(GameClient::FRobot *this, unsigned int a2)
{
  GameClient::Robot *v2; // eax
  struct GameClient::Robot *v3; // esi
  GameClient::RobotManager *v4; // eax
  struct GameClient::DamageUnit *v5; // eax

  v2 = (GameClient::Robot *)operator new(0x5D4u);
  if ( v2 )
    v3 = (struct GameClient::Robot *)GameClient::Robot::Robot(v2, a2);
  else
    v3 = 0;
  v4 = GameClient::RobotManager::Instance();
  GameClient::RobotManager::AddRobot(v4, v3);
  if ( v3 )
    v5 = (struct GameClient::Robot *)((char *)v3 + 148);
  else
    v5 = 0;
  GameClient::DamageManager::AddDamageUnit(GameClient::DamageManager::ms_pInstance, a2, v5);
  sub_10001514((int)v3);
  return v3;
}

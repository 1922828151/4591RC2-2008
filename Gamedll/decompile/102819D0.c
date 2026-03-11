/*
 * func-name: ?MatchingBodyArmor@CRobotRoofUI@@AAE_NKK@Z_0
 * func-address: 0x102819d0
 * callers: 0x10011bb2
 * callees: 0x1000aff6, 0x100103c5, 0x10012c29
 */

bool __thiscall CRobotRoofUI::MatchingBodyArmor(CRobotRoofUI *this, unsigned int a2, unsigned int a3)
{
  GameClient::FlyweightManager *v3; // eax
  struct GameClient::FSystemPart *Flyweight; // esi
  GameClient::FlyweightManager *v5; // eax
  struct GameClient::FSystemPart *v6; // eax

  v3 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v3, a2);
  v5 = GameClient::FlyweightManager::Instance();
  v6 = GameClient::FlyweightManager::GetFlyweight(v5, a3);
  return v6 && Flyweight && GameClient::Robot::IsMatchArmor(Flyweight, v6);
}

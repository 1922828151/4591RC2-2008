/*
 * func-name: ?SelectItemBody@CRobotRoofUI@@AAEXKPBVFProductInfo@GameClient@@@Z_0
 * func-address: 0x10281950
 * callers: 0x100185ca
 * callees: 0x1000aff6, 0x10012c29
 */

void __thiscall CRobotRoofUI::SelectItemBody(
        CRobotRoofUI *this,
        unsigned int a2,
        const struct GameClient::FProductInfo *a3)
{
  GameClient::FlyweightManager *v3; // eax

  v3 = GameClient::FlyweightManager::Instance();
  GameClient::FlyweightManager::GetFlyweight(v3, a2);
}

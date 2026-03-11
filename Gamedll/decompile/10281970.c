/*
 * func-name: ?SelectItemArmor@CRobotRoofUI@@AAEXKPBVFProductInfo@GameClient@@@Z_0
 * func-address: 0x10281970
 * callers: 0x1000d111
 * callees: 0x1000aff6, 0x100103c5, 0x10012c29
 */

void __thiscall CRobotRoofUI::SelectItemArmor(
        CRobotRoofUI *this,
        unsigned int a2,
        const struct GameClient::FProductInfo *a3)
{
  GameClient::FlyweightManager *v4; // eax
  struct GameClient::FSystemPart *Flyweight; // esi
  GameClient::FlyweightManager *v6; // eax
  struct GameClient::FSystemPart *v7; // eax
  unsigned int v8; // [esp-4h] [ebp-Ch]

  v4 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v4, a2);
  if ( Flyweight && *((_DWORD *)this + 979) != -1 )
  {
    v8 = *((_DWORD *)this + 979);
    v6 = GameClient::FlyweightManager::Instance();
    v7 = GameClient::FlyweightManager::GetFlyweight(v6, v8);
    if ( v7 )
      GameClient::Robot::IsMatchArmor(v7, Flyweight);
  }
}

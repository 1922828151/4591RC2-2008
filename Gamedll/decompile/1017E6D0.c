/*
 * func-name: ?AddTempEquip@Robot@GameClient@@QAEXKH@Z_0
 * func-address: 0x1017e6d0
 * callers: 0x10001b0e
 * callees: 0x1000bc80, 0x1001344e, 0x10018890
 */

void __thiscall GameClient::Robot::AddTempEquip(GameClient::Robot *this, unsigned int a2, int a3)
{
  GameClient::EquipManager *v4; // eax
  struct GameClient::Equip *SystemPart; // eax

  v4 = GameClient::EquipManager::Instance();
  SystemPart = GameClient::EquipManager::GetSystemPart(v4, a2);
  GameClient::Robot::AddTempEquip(this, SystemPart, a3);
}

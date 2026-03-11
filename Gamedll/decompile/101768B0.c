/*
 * func-name: ?AddEquip@Robot@GameClient@@QAEPAVEquip@2@KH@Z_0
 * func-address: 0x101768b0
 * callers: 0x10019786
 * callees: 0x1000bc80, 0x10010c85, 0x1001344e
 */

struct GameClient::Equip *__thiscall GameClient::Robot::AddEquip(GameClient::Robot *this, unsigned int a2, int a3)
{
  GameClient::EquipManager *v4; // eax
  struct GameClient::Equip *SystemPart; // eax

  v4 = GameClient::EquipManager::Instance();
  SystemPart = GameClient::EquipManager::GetSystemPart(v4, a2);
  return GameClient::Robot::AddEquip(this, SystemPart, a3);
}

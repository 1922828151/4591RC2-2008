/*
 * func-name: ?DestroyInstance@FRobotArmor@GameClient@@UAEXK@Z_0
 * func-address: 0x10235970
 * callers: 0x1000790f
 * callees: 0x1001344e, 0x10016784, 0x100168e7
 */

void __thiscall GameClient::FRobotArmor::DestroyInstance(GameClient::FRobotArmor *this, unsigned int a2)
{
  GameClient::EquipManager *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // eax

  v2 = GameClient::EquipManager::Instance();
  GameClient::EquipManager::RemoveSystemPart(v2, a2);
  v3 = (void (__thiscall ***)(_DWORD, int))sub_10016784(a2);
  if ( v3 )
    (**v3)(v3, 1);
}

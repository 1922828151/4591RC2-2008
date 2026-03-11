/*
 * func-name: ?DestroyInstance@FDamageEquip@GameClient@@UAEXK@Z_0
 * func-address: 0x10225fe0
 * callers: 0x10008f35
 * callees: 0x1001344e, 0x10016784, 0x100168e7, 0x1001933f, 0x10019d6c
 */

void __thiscall GameClient::FDamageEquip::DestroyInstance(GameClient::FDamageEquip *this, unsigned int a2)
{
  GameClient::EquipManager *v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // edi

  v2 = GameClient::EquipManager::Instance();
  GameClient::EquipManager::RemoveSystemPart(v2, a2);
  GameClient::DamageManager::RemoveDamageUnit(GameClient::DamageManager::ms_pInstance, a2);
  v3 = (void (__thiscall ***)(_DWORD, int))sub_10016784(a2);
  sub_1001933F(a2);
  if ( v3 )
    (**v3)(v3, 1);
}

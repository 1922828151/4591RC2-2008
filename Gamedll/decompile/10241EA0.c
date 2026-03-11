/*
 * func-name: ?DestroyInstance@FTransformItem@GameClient@@UAEXK@Z_0
 * func-address: 0x10241ea0
 * callers: 0x10016c07
 * callees: 0x1001344e, 0x10016784, 0x100168e7
 */

void __thiscall GameClient::FTransformItem::DestroyInstance(GameClient::FTransformItem *this, unsigned int a2)
{
  void (__thiscall ***v2)(_DWORD, int); // esi
  GameClient::EquipManager *v3; // eax

  v2 = (void (__thiscall ***)(_DWORD, int))sub_10016784(a2);
  v3 = GameClient::EquipManager::Instance();
  GameClient::EquipManager::RemoveSystemPart(v3, a2);
  if ( v2 )
    (**v2)(v2, 1);
}

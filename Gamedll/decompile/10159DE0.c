/*
 * func-name: ?OnDestroy@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x10159de0
 * callers: 0x10019880
 * callees: 0x1000bc80, 0x1000fe98, 0x1001344e, 0x102c9ea8
 */

void __thiscall GameClient::Equip::OnDestroy(GameClient::Equip *this)
{
  int v2; // eax
  GameClient::EquipManager *v3; // eax
  struct GameClient::SystemPart *SystemPart; // eax
  struct GameClient::Equip *v5; // eax
  int v6; // ecx
  int v7; // [esp-14h] [ebp-18h]

  v2 = *((_DWORD *)this + 37);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 62) <= *(_DWORD *)(v2 + 344) + *(_DWORD *)(v2 + 348) && *((_DWORD *)this + 63) != -1 )
    {
      v7 = *((_DWORD *)this + 63);
      v3 = GameClient::EquipManager::Instance();
      SystemPart = GameClient::EquipManager::GetSystemPart(v3, v7);
      v5 = (struct GameClient::Equip *)_RTDynamicCast(
                                         SystemPart,
                                         0,
                                         &GameClient::SystemPart `RTTI Type Descriptor',
                                         &GameClient::Equip `RTTI Type Descriptor',
                                         0);
      if ( v5 )
      {
        *((_DWORD *)v5 + 63) = -1;
        *((_DWORD *)v5 + 64) = -1;
        GameClient::Robot::RemoveEquip(*((GameClient::Robot **)this + 37), v5);
      }
    }
  }
  v6 = *((_DWORD *)this + 45);
  if ( v6 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 80))(v6, 1);
    *((_DWORD *)this + 45) = 0;
  }
  GameClient::SystemPart::OnDestroy(this);
}

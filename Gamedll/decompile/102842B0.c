/*
 * func-name: ?RefreshEquipCount@CRobotRoofUI@@AAEXXZ_0
 * func-address: 0x102842b0
 * callers: 0x100151d6
 * callees: 0x10003ca1, 0x1000aff6, 0x100103c0, 0x10012c29, 0x1001aae1, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::RefreshEquipCount(CRobotRoofUI *this)
{
  GameClient::FlyweightManager *v2; // eax
  struct GameClient::Flyweight *Flyweight; // edi
  GameClient::FlyweightManager *v4; // eax
  struct GameClient::Flyweight *v5; // ebp
  struct GameClient::FSystemPart *v6; // ebx
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  unsigned int i; // edi
  int v16; // ecx
  int v17; // ecx
  unsigned int j; // edi
  int v19; // ecx
  int v20; // eax
  GameClient::FlyweightManager *v21; // eax
  struct GameClient::Flyweight *v22; // eax
  struct GameClient::FSystemPart *v23; // eax
  unsigned int v24; // [esp-8h] [ebp-18h]
  unsigned int v25; // [esp-8h] [ebp-18h]
  unsigned int v26; // [esp-8h] [ebp-18h]
  _DWORD *retaddr; // [esp+10h] [ebp+0h]

  if ( *((_DWORD *)this + 979) == -1 || *((_DWORD *)this + 980) == -1 )
    return;
  v24 = *((_DWORD *)this + 979);
  v2 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v2, v24);
  v25 = *((_DWORD *)this + 980);
  v4 = GameClient::FlyweightManager::Instance();
  v5 = GameClient::FlyweightManager::GetFlyweight(v4, v25);
  v6 = (struct GameClient::FSystemPart *)_RTDynamicCast(
                                           Flyweight,
                                           0,
                                           &GameClient::Flyweight `RTTI Type Descriptor',
                                           &GameClient::FRobotBody `RTTI Type Descriptor');
  v7 = _RTDynamicCast(
         v5,
         0,
         &GameClient::Flyweight `RTTI Type Descriptor',
         &GameClient::FRobotArmor `RTTI Type Descriptor');
  v8 = v7;
  if ( v6 && v7 )
  {
    sub_10003CA1((char *)this + 3928, *(_DWORD *)(v7 + 332) + *((_DWORD *)v6 + 76), -1);
    CItemHolder::SetMaxItem(*((CItemHolder **)this + 969), *(_DWORD *)(v8 + 332) + *((_DWORD *)v6 + 76));
    v9 = *((_DWORD *)this + 983);
    if ( v9 )
    {
      v10 = (*((_DWORD *)this + 984) - v9) >> 2;
      if ( v10 >= 3 )
      {
LABEL_12:
        sub_10003CA1((char *)this + 3944, *(_DWORD *)(v8 + 336) + retaddr[77], -1);
        CItemHolder::SetMaxItem(*((CItemHolder **)this + 970), *(_DWORD *)(v8 + 336) + retaddr[77]);
        v13 = *((_DWORD *)this + 987);
        if ( v13 )
          v14 = (*((_DWORD *)this + 988) - v13) >> 2;
        else
          v14 = 0;
        for ( i = v14 + 3; ; ++i )
        {
          v16 = *((_DWORD *)this + 1000);
          if ( !v16 || i >= (*((_DWORD *)this + 1001) - v16) >> 2 )
            break;
          v17 = *(_DWORD *)(*((_DWORD *)this + 1000) + 4 * i);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v17 + 136))(v17, 0);
        }
        goto LABEL_19;
      }
    }
    else
    {
      v10 = 0;
    }
    do
    {
      v11 = *((_DWORD *)this + 1000);
      if ( !v11 || v10 >= (unsigned int)((*((_DWORD *)this + 1001) - v11) >> 2) )
        _invalid_parameter_noinfo();
      v12 = *(_DWORD *)(*((_DWORD *)this + 1000) + 4 * v10);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 136))(v12, 0);
      ++v10;
    }
    while ( v10 < 3 );
    goto LABEL_12;
  }
LABEL_19:
  for ( j = 0; ; ++j )
  {
    v19 = *((_DWORD *)this + 983);
    if ( !v19 || j >= (*((_DWORD *)this + 984) - v19) >> 2 )
      break;
    v20 = *((_DWORD *)this + 983);
    if ( *(_DWORD *)(v20 + 4 * j) != -1 )
    {
      if ( !v20 || j >= (*((_DWORD *)this + 984) - v20) >> 2 )
        _invalid_parameter_noinfo();
      v26 = *(_DWORD *)(*((_DWORD *)this + 983) + 4 * j);
      v21 = GameClient::FlyweightManager::Instance();
      v22 = GameClient::FlyweightManager::GetFlyweight(v21, v26);
      v23 = (struct GameClient::FSystemPart *)_RTDynamicCast(
                                                v22,
                                                0,
                                                &GameClient::Flyweight `RTTI Type Descriptor',
                                                &GameClient::FSystemPart `RTTI Type Descriptor');
      if ( !v23 || !GameClient::Robot::IsMatchEquip(v6, v23) )
      {
        CRobotRoofUI::SetWeapon(this, j, 0xFFFFFFFF);
        *((_BYTE *)this + 4017) = 1;
      }
    }
  }
}

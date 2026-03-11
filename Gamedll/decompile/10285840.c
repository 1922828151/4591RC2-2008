/*
 * func-name: ?RefreshRobotEquip@CRobotRoofUI@@QAEXXZ_0
 * func-address: 0x10285840
 * callers: 0x10013458
 * callees: 0x1000194c, 0x10009192, 0x1000a3a8, 0x1000ed13, 0x1000f056, 0x1000f709, 0x100160e0, 0x10017eea, 0x1001aae1, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::RefreshRobotEquip(CRobotRoofUI *this)
{
  int v2; // eax
  GameClient::RobotManager *v3; // eax
  struct CREControl *Control; // eax
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  unsigned int i; // edi
  int v10; // ecx
  unsigned int v11; // edi
  int j; // ebx
  int v13; // ecx
  int v14; // ecx
  unsigned int k; // edi
  int v16; // ecx
  unsigned int m; // edi
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  unsigned int v22; // ebx
  struct CREControl *v23; // eax
  int v24; // [esp-14h] [ebp-20h]
  int v25; // [esp-4h] [ebp-10h]

  sub_1000F056();
  *((_DWORD *)this + 1008) = 0;
  v2 = sub_1000194C(0);
  if ( v2 )
  {
    v25 = *(_DWORD *)(v2 + 292);
    v3 = GameClient::RobotManager::Instance();
    if ( GameClient::RobotManager::GetRobot(v3, v25) )
    {
      CRobotRoofUI::OnSelectSuite(this, -1, 0);
      Control = CREDialog::GetControl(this, 14);
      v5 = _RTDynamicCast(Control, v24, 0, &CREControl `RTTI Type Descriptor');
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 128))(v5, 0, 0);
      v6 = *((_DWORD *)this + 1010);
      if ( v6 )
      {
        if ( (*((_DWORD *)this + 1011) - v6) >> 2 )
        {
          *((_DWORD *)this + 1007) = **((_DWORD **)this + 1010);
          CRobotRoofUI::SetCurItem(this);
          v7 = *((_DWORD *)this + 1010);
          if ( !v7 || (unsigned int)((*((_DWORD *)this + 1011) - v7) >> 2) <= 1 )
            _invalid_parameter_noinfo();
          *((_DWORD *)this + 1007) = *(_DWORD *)(*((_DWORD *)this + 1010) + 4);
          CRobotRoofUI::SetCurItem(this);
          v8 = *((_DWORD *)this + 1010);
          if ( !v8 || (unsigned int)((*((_DWORD *)this + 1011) - v8) >> 2) <= 2 )
            _invalid_parameter_noinfo();
          *((_DWORD *)this + 1007) = *(_DWORD *)(*((_DWORD *)this + 1010) + 8);
          CRobotRoofUI::SetCurItem(this);
          for ( i = 0; ; ++i )
          {
            v10 = *((_DWORD *)this + 983);
            if ( !v10 || i >= (*((_DWORD *)this + 984) - v10) >> 2 )
              break;
            *((_DWORD *)this + 1003) = i;
            CRobotRoofUI::SetWeapon(this, i, 0xFFFFFFFF);
          }
          v11 = 0;
          for ( j = 12; ; j += 4 )
          {
            v13 = *((_DWORD *)this + 983);
            if ( !v13 || v11 >= (*((_DWORD *)this + 984) - v13) >> 2 )
              break;
            *((_DWORD *)this + 1003) = v11;
            v14 = *((_DWORD *)this + 1010);
            if ( !v14 || v11 + 3 >= (*((_DWORD *)this + 1011) - v14) >> 2 )
              _invalid_parameter_noinfo();
            CRobotRoofUI::SetWeapon(this, v11++, *(_DWORD *)(*((_DWORD *)this + 1010) + j));
          }
          for ( k = 0; ; ++k )
          {
            v16 = *((_DWORD *)this + 987);
            if ( !v16 || k >= (*((_DWORD *)this + 988) - v16) >> 2 )
              break;
            *((_DWORD *)this + 1003) = k;
            CRobotRoofUI::SetSubWeapon(this, k, 0xFFFFFFFF);
          }
          for ( m = 0; ; ++m )
          {
            v18 = *((_DWORD *)this + 987);
            if ( !v18 || m >= (*((_DWORD *)this + 988) - v18) >> 2 )
              break;
            *((_DWORD *)this + 1003) = m;
            v19 = *((_DWORD *)this + 983);
            if ( v19 )
              v20 = (*((_DWORD *)this + 984) - v19) >> 2;
            else
              v20 = 0;
            v21 = *((_DWORD *)this + 1010);
            v22 = v20 + m + 3;
            if ( !v21 || v22 >= (*((_DWORD *)this + 1011) - v21) >> 2 )
              _invalid_parameter_noinfo();
            CRobotRoofUI::SetSubWeapon(this, m, *(_DWORD *)(*((_DWORD *)this + 1010) + 4 * v22));
          }
          CRobotRoofUI::SelectItem(this, 0xFFFFFFFF);
        }
      }
    }
  }
  v23 = CREDialog::GetControl(this, 37);
  (*(void (__thiscall **)(struct CREControl *, _DWORD))(*(_DWORD *)v23 + 136))(v23, 0);
  CItemHolder::ClearCellSelection(*((CItemHolder **)this + 969));
  CItemHolder::ClearCellSelection(*((CItemHolder **)this + 970));
  sub_1000F056();
}

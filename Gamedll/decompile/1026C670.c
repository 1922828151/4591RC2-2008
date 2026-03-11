/*
 * func-name: ?RefreshRobotEquip@CDropBagUI@@IAEXXZ_0
 * func-address: 0x1026c670
 * callers: 0x1001ab59
 * callees: 0x1000194c, 0x10008409, 0x1000a3a8, 0x1000bbea, 0x1000e7c3, 0x1000ed13, 0x10010389, 0x1001241d, 0x10014efc, 0x10015834
 */

void __thiscall CDropBagUI::RefreshRobotEquip(CItemHolder **this)
{
  int v2; // eax
  GameClient::RobotManager *v3; // eax
  struct GameClient::Robot *Robot; // eax
  struct GameClient::Robot *v5; // ebx
  int v6; // eax
  GameClient::ProductManager *v7; // eax
  const struct GameClient::FProductInfo *ProductInfo; // eax
  int v9; // eax
  GameClient::ProductManager *v10; // eax
  const struct GameClient::FProductInfo *v11; // eax
  int v12; // eax
  GameClient::ProductManager *v13; // eax
  const struct GameClient::FProductInfo *v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ebp
  int v19; // edi
  int v20; // ebp
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // [esp-8h] [ebp-18h]
  unsigned int v25; // [esp-8h] [ebp-18h]
  unsigned int v26; // [esp-8h] [ebp-18h]
  unsigned int v27; // [esp-8h] [ebp-18h]
  int v28; // [esp+8h] [ebp-8h]
  int v29; // [esp+Ch] [ebp-4h]

  v2 = sub_1000194C(0);
  if ( v2 )
  {
    v24 = *(_DWORD *)(v2 + 292);
    v3 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v3, v24);
    v5 = Robot;
    if ( Robot )
    {
      v6 = *((_DWORD *)Robot + 50);
      if ( v6 )
      {
        v25 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 108);
        v7 = GameClient::ProductManager::Instance();
        ProductInfo = GameClient::ProductManager::GetProductInfo(v7, v25);
        CDropBagUI::SetBody((CDropBagUI *)this, *(_DWORD *)(*((_DWORD *)v5 + 50) + 4), ProductInfo);
      }
      v9 = *((_DWORD *)v5 + 51);
      if ( v9 )
      {
        v26 = *(_DWORD *)(*(_DWORD *)(v9 + 8) + 108);
        v10 = GameClient::ProductManager::Instance();
        v11 = GameClient::ProductManager::GetProductInfo(v10, v26);
        CDropBagUI::SetArmor((CDropBagUI *)this, *(_DWORD *)(*((_DWORD *)v5 + 51) + 4), v11);
      }
      v12 = *((_DWORD *)v5 + 52);
      if ( v12 )
      {
        v27 = *(_DWORD *)(*(_DWORD *)(v12 + 8) + 108);
        v13 = GameClient::ProductManager::Instance();
        v14 = GameClient::ProductManager::GetProductInfo(v13, v27);
        CDropBagUI::SetEnergy((CDropBagUI *)this, *(_DWORD *)(*((_DWORD *)v5 + 52) + 4), v14);
      }
      (*(void (__thiscall **)(CItemHolder *, _DWORD))(*(_DWORD *)this[991] + 136))(this[991], 0);
      v15 = *((_DWORD *)v5 + 86);
      v16 = v15 + *((_DWORD *)v5 + 87);
      v17 = 0;
      v28 = v15;
      v29 = v16;
      if ( v16 > 0 )
      {
        v18 = -v15;
        do
        {
          if ( v17 >= v15 )
          {
            this[992] = (CItemHolder *)v18;
            CDropBagUI::SetSubWeapon((CDropBagUI *)this, v18, 0xFFFFFFFF, 0xFFFFFFFF, 1);
          }
          else
          {
            this[992] = (CItemHolder *)v17;
            CDropBagUI::SetWeapon((CDropBagUI *)this, v17, 0xFFFFFFFF, 0xFFFFFFFF, 1);
          }
          v15 = v28;
          ++v17;
          ++v18;
        }
        while ( v17 < v29 );
        v16 = v29;
      }
      v19 = 0;
      if ( v16 > 0 )
      {
        v20 = -v15;
        while ( 1 )
        {
          v21 = *((_DWORD *)v5 + 63);
          if ( v19 >= v15 )
          {
            if ( !v21 || v19 >= (unsigned int)((*((_DWORD *)v5 + 64) - v21) >> 2) )
              _invalid_parameter_noinfo();
            v23 = *(_DWORD *)(*((_DWORD *)v5 + 63) + 4 * v19);
            this[992] = (CItemHolder *)v20;
            if ( v23 )
              CDropBagUI::SetSubWeapon((CDropBagUI *)this, v20, *(_DWORD *)(v23 + 4), *(_DWORD *)(v23 + 12), 0);
            else
              CDropBagUI::SetSubWeapon((CDropBagUI *)this, v20, 0xFFFFFFFF, 0xFFFFFFFF, 0);
          }
          else
          {
            if ( !v21 || v19 >= (unsigned int)((*((_DWORD *)v5 + 64) - v21) >> 2) )
              _invalid_parameter_noinfo();
            v22 = *(_DWORD *)(*((_DWORD *)v5 + 63) + 4 * v19);
            this[992] = (CItemHolder *)v19;
            if ( v22 )
              CDropBagUI::SetWeapon((CDropBagUI *)this, v19, *(_DWORD *)(v22 + 4), *(_DWORD *)(v22 + 12), 0);
            else
              CDropBagUI::SetWeapon((CDropBagUI *)this, v19, 0xFFFFFFFF, 0xFFFFFFFF, 0);
          }
          ++v19;
          ++v20;
          if ( v19 >= v29 )
            break;
          v15 = v28;
        }
      }
    }
  }
  CItemHolder::ClearCellSelection(this[987]);
  CItemHolder::ClearCellSelection(this[988]);
}

/*
 * func-name: ?SelectItem@CRobotRoofUI@@AAEXK@Z_0
 * func-address: 0x102835b0
 * callers: 0x10009192
 * callees: 0x1000aff6, 0x1000d111, 0x1000e881, 0x10010389, 0x1001241d, 0x10012c29, 0x100131c9
 */

void __thiscall CRobotRoofUI::SelectItem(CRobotRoofUI *this, unsigned int a2)
{
  unsigned int v2; // ebp
  GameClient::FlyweightManager *v4; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  GameClient::ProductManager *v6; // eax
  struct GameClient::FProductInfo *ProductInfo; // eax
  GameClient::FlyweightManager *v8; // eax
  GameClient::FlyweightManager *v9; // eax
  unsigned int v10; // ebx
  char *v11; // edi
  int v12; // ecx
  GameClient::FlyweightManager *v13; // eax
  unsigned int i; // ebx
  int v15; // ecx
  int v16; // eax
  GameClient::FlyweightManager *v17; // eax
  GameClient::FlyweightManager *v18; // eax
  int v19; // ecx
  unsigned int v20; // ebx
  int v21; // ebp
  unsigned int v22; // ebx
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // esi
  GameClient::FlyweightManager *v26; // eax
  unsigned int j; // edi
  int v28; // ecx
  GameClient::FlyweightManager *v29; // eax
  unsigned int k; // edi
  int v31; // ecx
  int v32; // ecx
  GameClient::FlyweightManager *v33; // eax
  GameClient::FlyweightManager *v34; // eax
  int v35; // ecx
  unsigned int v36; // edi
  int v37; // ecx
  int v38; // ebx
  unsigned int v39; // edi
  int v40; // ecx
  unsigned int v41; // edi
  unsigned int v42; // [esp-Ch] [ebp-14h]
  unsigned int v43; // [esp-Ch] [ebp-14h]
  unsigned int v44; // [esp-Ch] [ebp-14h]
  unsigned int v45; // [esp-Ch] [ebp-14h]
  unsigned int v46; // [esp-Ch] [ebp-14h]
  unsigned int v47; // [esp-Ch] [ebp-14h]
  unsigned int v48; // [esp-4h] [ebp-Ch]

  v2 = a2;
  v4 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v4, a2);
  if ( Flyweight )
  {
    v48 = *((_DWORD *)Flyweight + 27);
    v6 = GameClient::ProductManager::Instance();
    ProductInfo = GameClient::ProductManager::GetProductInfo(v6, v48);
    if ( ProductInfo )
    {
      *((_DWORD *)this + 1007) = a2;
      switch ( *((_DWORD *)ProductInfo + 28) )
      {
        case 1:
          v8 = GameClient::FlyweightManager::Instance();
          GameClient::FlyweightManager::GetFlyweight(v8, a2);
          break;
        case 2:
          CRobotRoofUI::SelectItemArmor(this, a2, ProductInfo);
          break;
        case 8:
          if ( *((_DWORD *)this + 981) != -1 )
          {
            v42 = *((_DWORD *)this + 981);
            v9 = GameClient::FlyweightManager::Instance();
            GameClient::FlyweightManager::GetFlyweight(v9, v42);
          }
          v10 = 0;
          v11 = (char *)this + 3928;
          while ( 1 )
          {
            v12 = *((_DWORD *)this + 983);
            if ( !v12 || v10 >= (*((_DWORD *)this + 984) - v12) >> 2 )
              break;
            if ( *(_DWORD *)sub_1000E881(v10) != -1 && v10 != *((_DWORD *)this + 1003) )
            {
              v43 = *(_DWORD *)sub_1000E881(v10);
              v13 = GameClient::FlyweightManager::Instance();
              GameClient::FlyweightManager::GetFlyweight(v13, v43);
            }
            ++v10;
          }
          for ( i = 0; ; ++i )
          {
            v15 = *((_DWORD *)this + 987);
            if ( !v15 || i >= (*((_DWORD *)this + 988) - v15) >> 2 )
              break;
            v16 = *((_DWORD *)this + 987);
            if ( *(_DWORD *)(v16 + 4 * i) != -1 )
            {
              if ( !v16 || i >= (*((_DWORD *)this + 988) - v16) >> 2 )
                _invalid_parameter_noinfo();
              v44 = *(_DWORD *)(*((_DWORD *)this + 987) + 4 * i);
              v17 = GameClient::FlyweightManager::Instance();
              GameClient::FlyweightManager::GetFlyweight(v17, v44);
            }
            v2 = a2;
          }
          v18 = GameClient::FlyweightManager::Instance();
          GameClient::FlyweightManager::GetFlyweight(v18, v2);
          v19 = *((_DWORD *)this + 983);
          v20 = *((_DWORD *)this + 1003);
          if ( !v19 || v20 >= (*((_DWORD *)this + 984) - v19) >> 2 )
            _invalid_parameter_noinfo();
          v21 = *(_DWORD *)(*((_DWORD *)this + 983) + 4 * v20);
          v22 = *((_DWORD *)this + 1003);
          v23 = *((_DWORD *)this + 983);
          if ( !v23 || v22 >= (*((_DWORD *)this + 984) - v23) >> 2 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(*((_DWORD *)this + 983) + 4 * v22) = -1;
          CRobotRoofUI::IsEquipMatchingRobotSystem(this, a2);
          v24 = *((_DWORD *)this + 983);
          v25 = *((_DWORD *)this + 1003);
          if ( !v24 || v25 >= (*((_DWORD *)v11 + 2) - v24) >> 2 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(*((_DWORD *)v11 + 1) + 4 * v25) = v21;
          break;
        case 0x10:
          if ( *((_DWORD *)this + 981) != -1 )
          {
            v45 = *((_DWORD *)this + 981);
            v26 = GameClient::FlyweightManager::Instance();
            GameClient::FlyweightManager::GetFlyweight(v26, v45);
          }
          for ( j = 0; ; ++j )
          {
            v28 = *((_DWORD *)this + 983);
            if ( !v28 || j >= (*((_DWORD *)this + 984) - v28) >> 2 )
              break;
            if ( *(_DWORD *)sub_1000E881(j) != -1 && j != *((_DWORD *)this + 1003) )
            {
              v46 = *(_DWORD *)sub_1000E881(j);
              v29 = GameClient::FlyweightManager::Instance();
              GameClient::FlyweightManager::GetFlyweight(v29, v46);
            }
          }
          for ( k = 0; ; ++k )
          {
            v31 = *((_DWORD *)this + 987);
            if ( !v31 || k >= (*((_DWORD *)this + 988) - v31) >> 2 )
              break;
            v32 = *((_DWORD *)this + 987);
            if ( *(_DWORD *)(4 * k + v32) != -1 )
            {
              if ( !v32 || k >= (*((_DWORD *)this + 988) - v32) >> 2 )
                _invalid_parameter_noinfo();
              v47 = *(_DWORD *)(*((_DWORD *)this + 987) + 4 * k);
              v33 = GameClient::FlyweightManager::Instance();
              GameClient::FlyweightManager::GetFlyweight(v33, v47);
            }
          }
          v34 = GameClient::FlyweightManager::Instance();
          GameClient::FlyweightManager::GetFlyweight(v34, a2);
          v35 = *((_DWORD *)this + 987);
          v36 = *((_DWORD *)this + 1003);
          if ( !v35 || v36 >= (*((_DWORD *)this + 988) - v35) >> 2 )
            _invalid_parameter_noinfo();
          v37 = *((_DWORD *)this + 987);
          v38 = *(_DWORD *)(v37 + 4 * v36);
          v39 = *((_DWORD *)this + 1003);
          if ( !v37 || v39 >= (*((_DWORD *)this + 988) - v37) >> 2 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(*((_DWORD *)this + 987) + 4 * v39) = -1;
          CRobotRoofUI::IsEquipMatchingRobotSystem(this, a2);
          v40 = *((_DWORD *)this + 987);
          v41 = *((_DWORD *)this + 1003);
          if ( !v40 || v41 >= (*((_DWORD *)this + 988) - v40) >> 2 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(*((_DWORD *)this + 987) + 4 * v41) = v38;
          break;
        default:
          return;
      }
    }
  }
}

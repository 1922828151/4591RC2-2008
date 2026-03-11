/*
 * func-name: ?SelectItem@CDropBagUI@@IAEXK@Z_0
 * func-address: 0x1026a4d0
 * callers: 0x10005402
 * callees: 0x10008a17, 0x1000aff6, 0x1000e881, 0x10010389, 0x1001241d, 0x10012c29
 */

void __thiscall CDropBagUI::SelectItem(CDropBagUI *this, unsigned int a2)
{
  GameClient::FlyweightManager *v3; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  GameClient::ProductManager *v5; // eax
  struct GameClient::FProductInfo *ProductInfo; // eax
  int v7; // eax
  GameClient::FlyweightManager *v8; // eax
  unsigned int k; // ebx
  int v10; // ecx
  GameClient::FlyweightManager *v11; // eax
  unsigned int m; // edi
  int v13; // ecx
  int v14; // eax
  GameClient::FlyweightManager *v15; // eax
  GameClient::FlyweightManager *v16; // eax
  int v17; // ecx
  unsigned int v18; // edi
  int v19; // ebx
  unsigned int v20; // edi
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // edi
  GameClient::FlyweightManager *v24; // eax
  unsigned int i; // edi
  int v26; // ecx
  int v27; // ecx
  GameClient::FlyweightManager *v28; // eax
  unsigned int j; // edi
  int v30; // ecx
  int v31; // eax
  GameClient::FlyweightManager *v32; // eax
  GameClient::FlyweightManager *v33; // eax
  int v34; // ecx
  unsigned int v35; // edi
  int v36; // ebx
  unsigned int v37; // edi
  int v38; // ecx
  int v39; // ecx
  unsigned int v40; // edi
  unsigned int v41; // [esp-Ch] [ebp-14h]
  unsigned int v42; // [esp-Ch] [ebp-14h]
  unsigned int v43; // [esp-Ch] [ebp-14h]
  unsigned int v44; // [esp-Ch] [ebp-14h]
  unsigned int v45; // [esp-Ch] [ebp-14h]
  unsigned int v46; // [esp-Ch] [ebp-14h]
  unsigned int v47; // [esp-4h] [ebp-Ch]

  v3 = GameClient::FlyweightManager::Instance();
  Flyweight = GameClient::FlyweightManager::GetFlyweight(v3, a2);
  if ( Flyweight )
  {
    v47 = *((_DWORD *)Flyweight + 27);
    v5 = GameClient::ProductManager::Instance();
    ProductInfo = GameClient::ProductManager::GetProductInfo(v5, v47);
    if ( ProductInfo )
    {
      *((_DWORD *)this + 993) = a2;
      v7 = *((_DWORD *)ProductInfo + 28);
      if ( v7 == 8 )
      {
        if ( *((_DWORD *)this + 970) != -1 )
        {
          v44 = *((_DWORD *)this + 970);
          v24 = GameClient::FlyweightManager::Instance();
          GameClient::FlyweightManager::GetFlyweight(v24, v44);
        }
        for ( i = 0; ; ++i )
        {
          v26 = *((_DWORD *)this + 972);
          if ( !v26 || i >= (*((_DWORD *)this + 973) - v26) >> 2 )
            break;
          v27 = *((_DWORD *)this + 972);
          if ( *(_DWORD *)(4 * i + v27) != -1 && i != *((_DWORD *)this + 992) )
          {
            if ( !v27 || i >= (*((_DWORD *)this + 973) - v27) >> 2 )
              _invalid_parameter_noinfo();
            v45 = *(_DWORD *)(*((_DWORD *)this + 972) + 4 * i);
            v28 = GameClient::FlyweightManager::Instance();
            GameClient::FlyweightManager::GetFlyweight(v28, v45);
          }
        }
        for ( j = 0; ; ++j )
        {
          v30 = *((_DWORD *)this + 980);
          if ( !v30 || j >= (*((_DWORD *)this + 981) - v30) >> 2 )
            break;
          v31 = *((_DWORD *)this + 980);
          if ( *(_DWORD *)(4 * j + v31) != -1 )
          {
            if ( !v31 || j >= (*((_DWORD *)this + 981) - v31) >> 2 )
              _invalid_parameter_noinfo();
            v46 = *(_DWORD *)(*((_DWORD *)this + 980) + 4 * j);
            v32 = GameClient::FlyweightManager::Instance();
            GameClient::FlyweightManager::GetFlyweight(v32, v46);
          }
        }
        v33 = GameClient::FlyweightManager::Instance();
        GameClient::FlyweightManager::GetFlyweight(v33, a2);
        v34 = *((_DWORD *)this + 972);
        v35 = *((_DWORD *)this + 992);
        if ( !v34 || v35 >= (*((_DWORD *)this + 973) - v34) >> 2 )
          _invalid_parameter_noinfo();
        v36 = *(_DWORD *)(*((_DWORD *)this + 972) + 4 * v35);
        v37 = *((_DWORD *)this + 992);
        v38 = *((_DWORD *)this + 972);
        if ( !v38 || v37 >= (*((_DWORD *)this + 973) - v38) >> 2 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(*((_DWORD *)this + 972) + 4 * v37) = -1;
        CDropBagUI::IsEquipMatchingRobotSystem(this, a2);
        v39 = *((_DWORD *)this + 972);
        v40 = *((_DWORD *)this + 992);
        if ( !v39 || v40 >= (*((_DWORD *)this + 973) - v39) >> 2 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(*((_DWORD *)this + 972) + 4 * v40) = v36;
      }
      else if ( v7 == 16 )
      {
        if ( *((_DWORD *)this + 970) != -1 )
        {
          v41 = *((_DWORD *)this + 970);
          v8 = GameClient::FlyweightManager::Instance();
          GameClient::FlyweightManager::GetFlyweight(v8, v41);
        }
        for ( k = 0; ; ++k )
        {
          v10 = *((_DWORD *)this + 972);
          if ( !v10 || k >= (*((_DWORD *)this + 973) - v10) >> 2 )
            break;
          if ( *(_DWORD *)(*((_DWORD *)this + 972) + 4 * k) != -1 && k != *((_DWORD *)this + 992) )
          {
            v42 = *(_DWORD *)sub_1000E881(k);
            v11 = GameClient::FlyweightManager::Instance();
            GameClient::FlyweightManager::GetFlyweight(v11, v42);
          }
        }
        for ( m = 0; ; ++m )
        {
          v13 = *((_DWORD *)this + 980);
          if ( !v13 || m >= (*((_DWORD *)this + 981) - v13) >> 2 )
            break;
          v14 = *((_DWORD *)this + 980);
          if ( *(_DWORD *)(4 * m + v14) != -1 )
          {
            if ( !v14 || m >= (*((_DWORD *)this + 981) - v14) >> 2 )
              _invalid_parameter_noinfo();
            v43 = *(_DWORD *)(*((_DWORD *)this + 980) + 4 * m);
            v15 = GameClient::FlyweightManager::Instance();
            GameClient::FlyweightManager::GetFlyweight(v15, v43);
          }
        }
        v16 = GameClient::FlyweightManager::Instance();
        GameClient::FlyweightManager::GetFlyweight(v16, a2);
        v17 = *((_DWORD *)this + 980);
        v18 = *((_DWORD *)this + 992);
        if ( !v17 || v18 >= (*((_DWORD *)this + 981) - v17) >> 2 )
          _invalid_parameter_noinfo();
        v19 = *(_DWORD *)(*((_DWORD *)this + 980) + 4 * v18);
        v20 = *((_DWORD *)this + 992);
        v21 = *((_DWORD *)this + 980);
        if ( !v21 || v20 >= (*((_DWORD *)this + 981) - v21) >> 2 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(*((_DWORD *)this + 980) + 4 * v20) = -1;
        CDropBagUI::IsEquipMatchingRobotSystem(this, a2);
        v22 = *((_DWORD *)this + 980);
        v23 = *((_DWORD *)this + 992);
        if ( !v22 || v23 >= (*((_DWORD *)this + 981) - v22) >> 2 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(*((_DWORD *)this + 980) + 4 * v23) = v19;
      }
    }
  }
}

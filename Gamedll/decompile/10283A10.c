/*
 * func-name: ?SetWeapon@CRobotRoofUI@@AAEXHK@Z_0
 * func-address: 0x10283a10
 * callers: 0x1001aae1
 * callees: 0x10003ca1, 0x1000aff6, 0x10010389, 0x100104e2, 0x1001241d, 0x10012c29, 0x100131c9, 0x102c8d6c, 0x102c9ea8
 */

void __thiscall CRobotRoofUI::SetWeapon(CRobotRoofUI *this, unsigned int a2, unsigned int a3)
{
  int v4; // ebx
  GameClient::FlyweightManager *v5; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  unsigned int i; // edi
  int v8; // ecx
  int v9; // ecx
  GameClient::FlyweightManager *v10; // eax
  unsigned int j; // edi
  int v12; // ecx
  int v13; // eax
  GameClient::FlyweightManager *v14; // eax
  GameClient::FlyweightManager *v15; // eax
  struct GameClient::Flyweight *v16; // eax
  int v17; // ecx
  unsigned int v18; // edi
  int v19; // ecx
  int v20; // ebp
  unsigned int v21; // edi
  bool IsEquipMatchingRobotSystem; // al
  int v23; // ecx
  unsigned int v24; // edi
  bool v25; // bl
  CREStatic *v26; // ecx
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // ecx
  void (__cdecl *v30)(); // ebx
  GameClient::FlyweightManager *v31; // eax
  struct GameClient::Flyweight *v32; // eax
  int v33; // eax
  GameClient::ProductManager *v34; // eax
  struct GameClient::FProductInfo *ProductInfo; // edi
  const char *v36; // eax
  const wchar_t *v37; // eax
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  unsigned int v42; // [esp+10h] [ebp-6Ch]
  unsigned int v43; // [esp+10h] [ebp-6Ch]
  unsigned int v44; // [esp+10h] [ebp-6Ch]
  unsigned int v45; // [esp+10h] [ebp-6Ch]
  int v46; // [esp+10h] [ebp-6Ch]
  int v47; // [esp+28h] [ebp-54h]
  int v48; // [esp+2Ch] [ebp-50h] BYREF
  int v49; // [esp+30h] [ebp-4Ch] BYREF
  int v50; // [esp+34h] [ebp-48h]
  _BYTE v51[28]; // [esp+38h] [ebp-44h] BYREF
  _BYTE v52[28]; // [esp+54h] [ebp-28h] BYREF
  int v53; // [esp+78h] [ebp-4h]

  if ( a3 != -1 )
  {
    v4 = 0;
    if ( *((_DWORD *)this + 981) != -1 )
    {
      v42 = *((_DWORD *)this + 981);
      v5 = GameClient::FlyweightManager::Instance();
      Flyweight = GameClient::FlyweightManager::GetFlyweight(v5, v42);
      if ( Flyweight )
        v4 = *((_DWORD *)Flyweight + 68);
    }
    for ( i = 0; ; ++i )
    {
      v8 = *((_DWORD *)this + 983);
      if ( !v8 || i >= (*((_DWORD *)this + 984) - v8) >> 2 )
        break;
      v9 = *((_DWORD *)this + 983);
      if ( *(_DWORD *)(v9 + 4 * i) != -1 && i != *((_DWORD *)this + 1003) )
      {
        if ( !v9 || i >= (*((_DWORD *)this + 984) - v9) >> 2 )
          _invalid_parameter_noinfo();
        v43 = *(_DWORD *)(*((_DWORD *)this + 983) + 4 * i);
        v10 = GameClient::FlyweightManager::Instance();
        v4 += *((_DWORD *)GameClient::FlyweightManager::GetFlyweight(v10, v43) + 51);
      }
    }
    for ( j = 0; ; ++j )
    {
      v12 = *((_DWORD *)this + 987);
      if ( !v12 || j >= (*((_DWORD *)this + 988) - v12) >> 2 )
        break;
      v13 = *((_DWORD *)this + 987);
      if ( *(_DWORD *)(v13 + 4 * j) != -1 )
      {
        if ( !v13 || j >= (*((_DWORD *)this + 988) - v13) >> 2 )
          _invalid_parameter_noinfo();
        v44 = *(_DWORD *)(*((_DWORD *)this + 987) + 4 * j);
        v14 = GameClient::FlyweightManager::Instance();
        v4 += *((_DWORD *)GameClient::FlyweightManager::GetFlyweight(v14, v44) + 51);
      }
    }
    v47 = v4;
    v15 = GameClient::FlyweightManager::Instance();
    v16 = GameClient::FlyweightManager::GetFlyweight(v15, a3);
    v17 = *((_DWORD *)this + 983);
    v18 = *((_DWORD *)this + 1003);
    v50 = *((_DWORD *)v16 + 51);
    if ( !v17 || v18 >= (*((_DWORD *)this + 984) - v17) >> 2 )
      _invalid_parameter_noinfo();
    v19 = *((_DWORD *)this + 983);
    v20 = *(_DWORD *)(v19 + 4 * v18);
    v21 = *((_DWORD *)this + 1003);
    if ( !v19 || v21 >= (*((_DWORD *)this + 984) - v19) >> 2 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(*((_DWORD *)this + 983) + 4 * v21) = -1;
    IsEquipMatchingRobotSystem = CRobotRoofUI::IsEquipMatchingRobotSystem(this, a3);
    v23 = *((_DWORD *)this + 983);
    v24 = *((_DWORD *)this + 1003);
    v25 = IsEquipMatchingRobotSystem;
    if ( !v23 || v24 >= (*((_DWORD *)this + 984) - v23) >> 2 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(*((_DWORD *)this + 983) + 4 * v24) = v20;
    v26 = (CREStatic *)*((_DWORD *)this + 972);
    if ( !v25 )
    {
      CREStatic::SetText(v26, word_10322F40);
      return;
    }
    if ( v50 >= v47 )
    {
      CREStatic::SetText(v26, word_10322F58);
      return;
    }
    CREStatic::SetText(v26, word_10322F78);
  }
  if ( CItemHolder::GetXYByPos(*((CItemHolder **)this + 969), a2, &v49, &v48) )
  {
    v27 = *((_DWORD *)this + 983);
    if ( v27 )
      v28 = (*((_DWORD *)this + 984) - v27) >> 2;
    else
      v28 = 0;
    if ( v28 < a2 + 1 )
      sub_10003CA1((char *)this + 3928, a2 + 1, -1);
    v29 = *((_DWORD *)this + 983);
    if ( v29 && a2 < (*((_DWORD *)this + 984) - v29) >> 2 )
    {
      v30 = _invalid_parameter_noinfo;
    }
    else
    {
      v30 = _invalid_parameter_noinfo;
      _invalid_parameter_noinfo();
    }
    *(_DWORD *)(*((_DWORD *)this + 983) + 4 * a2) = a3;
    CItemHolder::SetItem(*((CItemHolder **)this + 969), v49, v48, 0);
    if ( a3 == -1 )
    {
      v40 = *((_DWORD *)this + 1000);
      if ( !v40 || a2 >= (*((_DWORD *)this + 1001) - v40) >> 2 )
        v30();
      v46 = 0;
    }
    else
    {
      v31 = GameClient::FlyweightManager::Instance();
      v32 = GameClient::FlyweightManager::GetFlyweight(v31, a3);
      v33 = _RTDynamicCast(
              v32,
              0,
              &GameClient::Flyweight `RTTI Type Descriptor',
              &GameClient::FProduct `RTTI Type Descriptor');
      if ( v33 )
      {
        v45 = *(_DWORD *)(v33 + 108);
        v34 = GameClient::ProductManager::Instance();
        ProductInfo = GameClient::ProductManager::GetProductInfo(v34, v45);
        if ( ProductInfo )
        {
          std::wstring::wstring(v52, &unk_10322F7C);
          v53 = 0;
          v36 = (const char *)std::string::c_str((char *)ProductInfo + 176);
          v37 = atow(v36);
          std::wstring::wstring(v51, v37);
          v38 = *((_DWORD *)this + 969);
          LOBYTE(v53) = 1;
          CItemHolder::InsertItem(v38, v49, v48, v51, 0, &unk_103B40C8, -1, v52);
          LOBYTE(v53) = 0;
          std::wstring::~wstring(v51);
          v53 = -1;
          std::wstring::~wstring(v52);
        }
      }
      v39 = *((_DWORD *)this + 1000);
      if ( !v39 || a2 >= (*((_DWORD *)this + 1001) - v39) >> 2 )
        v30();
      v46 = 1;
    }
    v41 = *(_DWORD *)(*((_DWORD *)this + 1000) + 4 * a2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v41 + 136))(v41, v46);
    CRobotRoofUI::RefreshSuiteStatus(this);
  }
}

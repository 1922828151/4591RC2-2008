/*
 * func-name: ?SetWeapon@CDropBagUI@@IAEXHKK_N@Z_0
 * func-address: 0x1026ab80
 * callers: 0x10015834
 * callees: 0x10001dfc, 0x10003ca1, 0x10007059, 0x10008a17, 0x1000970a, 0x1000aff6, 0x1000c252, 0x1000e52f, 0x1000fafb, 0x10010389, 0x1001241d, 0x10012c29, 0x10013ca5, 0x10013d95, 0x100172dd, 0x1001a0cd, 0x1001a0f5, 0x1001ac58, 0x102c8d6c, 0x102c9d50, 0x102c9ea8
 */

void __thiscall CDropBagUI::SetWeapon(CDropBagUI *this, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v6; // ecx
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  GameClient::FlyweightManager *v12; // eax
  struct GameClient::Flyweight *Flyweight; // eax
  unsigned int i; // edi
  int v15; // ecx
  int v16; // ecx
  GameClient::FlyweightManager *v17; // eax
  unsigned int j; // edi
  int v19; // ecx
  int v20; // eax
  GameClient::FlyweightManager *v21; // eax
  GameClient::FlyweightManager *v22; // eax
  struct GameClient::Flyweight *v23; // eax
  int v24; // ecx
  unsigned int v25; // edi
  int v26; // ecx
  int v27; // ebp
  unsigned int v28; // edi
  bool IsEquipMatchingRobotSystem; // al
  int v30; // ecx
  unsigned int v31; // edi
  bool v32; // bl
  CREStatic *v33; // ecx
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // edi
  int v41; // ebx
  int v42; // eax
  int v43; // ebp
  int v44; // eax
  int v45; // eax
  int v46; // edi
  unsigned int v47; // ebp
  int v48; // ecx
  int v49; // eax
  int v50; // ebp
  void *v51; // ebx
  int v52; // ecx
  unsigned int v53; // edi
  int v54; // ecx
  GameClient::FlyweightManager *v55; // eax
  struct GameClient::Flyweight *v56; // eax
  int v57; // eax
  GameClient::ProductManager *v58; // eax
  struct GameClient::FProductInfo *ProductInfo; // edi
  const char *v60; // eax
  const wchar_t *v61; // eax
  int v62; // ecx
  void *v63; // edi
  int v64; // ebx
  char *v65; // edi
  char *v66; // edi
  unsigned int v67; // ebp
  unsigned int v68; // ebx
  int v69; // ecx
  unsigned int v70; // eax
  int v71; // ebx
  unsigned int v72; // ebp
  int v73; // eax
  int v74; // ecx
  int v75; // eax
  int v76; // ebx
  int v77; // eax
  int v78; // eax
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  unsigned int v82; // [esp+20h] [ebp-70h]
  unsigned int v83; // [esp+20h] [ebp-70h]
  unsigned int v84; // [esp+20h] [ebp-70h]
  unsigned int v85; // [esp+20h] [ebp-70h]
  unsigned int v86; // [esp+20h] [ebp-70h]
  unsigned int v87; // [esp+20h] [ebp-70h]
  int v88; // [esp+38h] [ebp-58h]
  int v89; // [esp+3Ch] [ebp-54h] BYREF
  void *v90; // [esp+40h] [ebp-50h]
  int v91; // [esp+44h] [ebp-4Ch] BYREF
  int v92; // [esp+48h] [ebp-48h] BYREF
  int v93; // [esp+4Ch] [ebp-44h] BYREF
  void *v94; // [esp+50h] [ebp-40h]
  int v95; // [esp+54h] [ebp-3Ch]
  int v96; // [esp+58h] [ebp-38h]
  _DWORD v97[7]; // [esp+68h] [ebp-28h] BYREF
  int v98; // [esp+8Ch] [ebp-4h]

  v6 = *((_DWORD *)this + 976);
  v7 = a2;
  if ( !v6 || a2 >= (*((_DWORD *)this + 977) - v6) >> 2 )
    _invalid_parameter_noinfo();
  v8 = *((_DWORD *)this + 976);
  v9 = 4 * a2;
  v88 = 4 * a2;
  if ( *(_DWORD *)(4 * a2 + v8) == -1 || (_BYTE)a5 )
    goto LABEL_147;
  if ( !v8 || a2 >= (*((_DWORD *)this + 977) - v8) >> 2 )
    _invalid_parameter_noinfo();
  v10 = sub_10001DFC(*(_DWORD *)(*((_DWORD *)this + 976) + 4 * a2));
  if ( !v10 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 184))(v10) )
  {
LABEL_147:
    if ( a3 != -1 )
    {
      v11 = 0;
      if ( *((_DWORD *)this + 970) != -1 )
      {
        v82 = *((_DWORD *)this + 970);
        v12 = GameClient::FlyweightManager::Instance();
        Flyweight = GameClient::FlyweightManager::GetFlyweight(v12, v82);
        if ( Flyweight )
          v11 = *((_DWORD *)Flyweight + 68);
      }
      for ( i = 0; ; ++i )
      {
        v15 = *((_DWORD *)this + 972);
        if ( !v15 || i >= (*((_DWORD *)this + 973) - v15) >> 2 )
          break;
        v16 = *((_DWORD *)this + 972);
        if ( *(_DWORD *)(v16 + 4 * i) != -1 && i != *((_DWORD *)this + 992) )
        {
          if ( !v16 || i >= (*((_DWORD *)this + 973) - v16) >> 2 )
            _invalid_parameter_noinfo();
          v83 = *(_DWORD *)(*((_DWORD *)this + 972) + 4 * i);
          v17 = GameClient::FlyweightManager::Instance();
          v11 += *((_DWORD *)GameClient::FlyweightManager::GetFlyweight(v17, v83) + 51);
        }
      }
      for ( j = 0; ; ++j )
      {
        v19 = *((_DWORD *)this + 980);
        if ( !v19 || j >= (*((_DWORD *)this + 981) - v19) >> 2 )
          break;
        v20 = *((_DWORD *)this + 980);
        if ( *(_DWORD *)(v20 + 4 * j) != -1 )
        {
          if ( !v20 || j >= (*((_DWORD *)this + 981) - v20) >> 2 )
            _invalid_parameter_noinfo();
          v84 = *(_DWORD *)(*((_DWORD *)this + 980) + 4 * j);
          v21 = GameClient::FlyweightManager::Instance();
          v11 += *((_DWORD *)GameClient::FlyweightManager::GetFlyweight(v21, v84) + 51);
        }
      }
      v85 = a3;
      a5 = v11;
      v22 = GameClient::FlyweightManager::Instance();
      v23 = GameClient::FlyweightManager::GetFlyweight(v22, v85);
      v24 = *((_DWORD *)this + 972);
      v25 = *((_DWORD *)this + 992);
      v89 = *((_DWORD *)v23 + 51);
      if ( !v24 || v25 >= (*((_DWORD *)this + 973) - v24) >> 2 )
        _invalid_parameter_noinfo();
      v26 = *((_DWORD *)this + 972);
      v27 = *(_DWORD *)(v26 + 4 * v25);
      v28 = *((_DWORD *)this + 992);
      if ( !v26 || v28 >= (*((_DWORD *)this + 973) - v26) >> 2 )
        _invalid_parameter_noinfo();
      v86 = a3;
      *(_DWORD *)(*((_DWORD *)this + 972) + 4 * v28) = -1;
      IsEquipMatchingRobotSystem = CDropBagUI::IsEquipMatchingRobotSystem(this, v86);
      v30 = *((_DWORD *)this + 972);
      v31 = *((_DWORD *)this + 992);
      v32 = IsEquipMatchingRobotSystem;
      if ( !v30 || v31 >= (*((_DWORD *)this + 973) - v30) >> 2 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*((_DWORD *)this + 972) + 4 * v31) = v27;
      v33 = (CREStatic *)*((_DWORD *)this + 991);
      if ( !v32 )
      {
        CREStatic::SetText(v33, word_10321770);
        return;
      }
      if ( v89 >= a5 )
      {
        CREStatic::SetText(v33, word_10321788);
        return;
      }
      CREStatic::SetText(v33, word_103217A8);
      v7 = a2;
      v9 = 4 * a2;
    }
    if ( CItemHolder::GetXYByPos(*((CItemHolder **)this + 987), v7, &v92, &v91) )
    {
      v34 = *((_DWORD *)this + 972);
      if ( v34 )
        v35 = (*((_DWORD *)this + 973) - v34) >> 2;
      else
        v35 = 0;
      if ( v35 < v7 + 1 )
        sub_10003CA1((char *)this + 3884, v7 + 1, -1);
      v36 = *((_DWORD *)this + 972);
      if ( !v36 || v7 >= (*((_DWORD *)this + 973) - v36) >> 2 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(v9 + *((_DWORD *)this + 972)) != -1 )
      {
        v37 = *((_DWORD *)this + 976);
        if ( !v37 || a2 >= (*((_DWORD *)this + 977) - v37) >> 2 )
          _invalid_parameter_noinfo();
        v38 = sub_10001DFC(*(_DWORD *)(v88 + *((_DWORD *)this + 976)));
        v39 = *((_DWORD *)this + 976);
        v40 = v38;
        if ( !v39 || a2 >= (*((_DWORD *)this + 977) - v39) >> 2 )
          _invalid_parameter_noinfo();
        v41 = *(_DWORD *)(v88 + *((_DWORD *)this + 976));
        v89 = v41;
        if ( v40 )
        {
          v42 = _RTDynamicCast(
                  v40,
                  0,
                  &GameClient::WorldObject `RTTI Type Descriptor',
                  &GameClient::Equip `RTTI Type Descriptor');
          if ( !v42 )
            goto LABEL_91;
          v43 = *(_DWORD *)(v42 + 4);
        }
        else
        {
          v44 = sub_10001DFC(*((_DWORD *)this + 1015));
          v45 = _RTDynamicCast(
                  v44,
                  0,
                  &GameClient::WorldObject `RTTI Type Descriptor',
                  &GameClient::Booty `RTTI Type Descriptor');
          if ( !v45 )
            goto LABEL_91;
          v46 = v45 + 148;
          v47 = 0;
          if ( !sub_1000E52F() )
            goto LABEL_91;
          while ( 1 )
          {
            v48 = *(_DWORD *)(v46 + 4);
            if ( !v48 || v47 >= (*(_DWORD *)(v46 + 8) - v48) >> 3 )
              _invalid_parameter_noinfo();
            v49 = *(_DWORD *)(v46 + 4);
            if ( *(_DWORD *)(v49 + 8 * v47 + 4) == v41 )
              break;
            if ( ++v47 >= sub_1000E52F() )
              goto LABEL_91;
          }
          if ( !v49 || v47 >= (*(_DWORD *)(v46 + 8) - v49) >> 3 )
            _invalid_parameter_noinfo();
          v43 = *(_DWORD *)(*(_DWORD *)(v46 + 4) + 8 * v47);
        }
        a5 = v43;
        if ( v43 != -1 )
        {
          sub_10007059((int)&v93, (int)&a5);
          v50 = v93;
          v51 = (void *)*((_DWORD *)this + 1007);
          if ( !v93 || (CDropBagUI *)v93 != (CDropBagUI *)((char *)this + 4024) )
            _invalid_parameter_noinfo();
          if ( v94 == v51 )
          {
            v94 = 0;
            v95 = 0;
            v96 = 0;
            v98 = 0;
            sub_1001A0F5(&v93, (int)&v89);
            sub_1000FAFB((int)&a5);
            sub_1000C252((int)&v93);
            v98 = -1;
            if ( v94 )
              operator delete(v94);
          }
          else
          {
            if ( !v50 )
              _invalid_parameter_noinfo();
            if ( v94 == *(void **)(v50 + 4) )
              _invalid_parameter_noinfo();
            sub_1001A0F5((char *)v94 + 12, (int)&v89);
          }
        }
      }
LABEL_91:
      v52 = *((_DWORD *)this + 972);
      if ( !v52 || a2 >= (*((_DWORD *)this + 973) - v52) >> 2 )
        _invalid_parameter_noinfo();
      v53 = a3;
      *(_DWORD *)(v88 + *((_DWORD *)this + 972)) = a3;
      v54 = *((_DWORD *)this + 976);
      if ( !v54 || a2 >= (*((_DWORD *)this + 977) - v54) >> 2 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(v88 + *((_DWORD *)this + 976)) = a4;
      CItemHolder::SetItem(*((CItemHolder **)this + 987), v92, v91, 0);
      if ( v53 == -1 )
      {
        v81 = *((_DWORD *)this + 998);
        if ( !v81 || a2 >= (*((_DWORD *)this + 999) - v81) >> 2 )
          _invalid_parameter_noinfo();
      }
      else
      {
        v55 = GameClient::FlyweightManager::Instance();
        v56 = GameClient::FlyweightManager::GetFlyweight(v55, v53);
        v57 = _RTDynamicCast(
                v56,
                0,
                &GameClient::Flyweight `RTTI Type Descriptor',
                &GameClient::FProduct `RTTI Type Descriptor');
        a5 = v57;
        if ( v57 )
        {
          v87 = *(_DWORD *)(v57 + 108);
          v58 = GameClient::ProductManager::Instance();
          ProductInfo = GameClient::ProductManager::GetProductInfo(v58, v87);
          if ( ProductInfo )
          {
            std::wstring::wstring(v97, &unk_103217AC);
            v98 = 1;
            v60 = (const char *)std::string::c_str((char *)ProductInfo + 176);
            v61 = atow(v60);
            std::wstring::wstring(&v93, v61);
            v62 = *((_DWORD *)this + 987);
            LOBYTE(v98) = 2;
            CItemHolder::InsertItem(v62, v92, v91, &v93, a4, &unk_103B3DE0, -1, v97);
            LOBYTE(v98) = 1;
            std::wstring::~wstring(&v93);
            v98 = -1;
            std::wstring::~wstring(v97);
          }
          sub_10007059((int)&v89, (int)&a3);
          v63 = (void *)*((_DWORD *)this + 1007);
          if ( !v89 || (CDropBagUI *)v89 != (CDropBagUI *)((char *)this + 4024) )
            _invalid_parameter_noinfo();
          if ( v90 != v63 )
          {
            v64 = v89;
            if ( !v89 )
              _invalid_parameter_noinfo();
            v65 = (char *)v90;
            if ( v90 == *(void **)(v64 + 4) )
              _invalid_parameter_noinfo();
            v66 = v65 + 12;
            v67 = 0;
            if ( sub_1001AC58() )
            {
              v68 = a4;
              while ( 1 )
              {
                v69 = *((_DWORD *)v66 + 1);
                if ( !v69 || v67 >= (*((_DWORD *)v66 + 2) - v69) >> 2 )
                  _invalid_parameter_noinfo();
                v70 = *((_DWORD *)v66 + 1);
                if ( *(_DWORD *)(v70 + 4 * v67) == v68 )
                  break;
                if ( ++v67 >= sub_1001AC58() )
                  goto LABEL_130;
              }
              v71 = *((_DWORD *)v66 + 1);
              if ( v70 > *((_DWORD *)v66 + 2) )
                _invalid_parameter_noinfo();
              v72 = v71 + 4 * v67;
              if ( v72 > *((_DWORD *)v66 + 2) || v72 < *((_DWORD *)v66 + 1) )
                _invalid_parameter_noinfo();
              v73 = (int)(*((_DWORD *)v66 + 2) - (v72 + 4)) >> 2;
              if ( v73 > 0 )
                memmove_s((void *const)v72, 4 * v73, (const void *const)(v72 + 4), 4 * v73);
              *((_DWORD *)v66 + 2) -= 4;
              v74 = *((_DWORD *)v66 + 1);
              if ( v74 )
                v75 = (*((_DWORD *)v66 + 2) - v74) >> 2;
              else
                v75 = 0;
              v76 = a5;
              sub_10013CA5(*(_DWORD *)(a5 + 108), v75);
              v77 = *((_DWORD *)v66 + 1);
              if ( !v77 || !((*((_DWORD *)v66 + 2) - v77) >> 2) )
              {
                sub_10013D95((int)&v93, v89, v90);
                sub_1001A0CD(*(_DWORD *)(v76 + 108), a3);
                CDropBagUI::RefreshList(this, 0);
              }
            }
          }
        }
LABEL_130:
        v78 = sub_10001DFC(a4);
        if ( !v78 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v78 + 184))(v78) )
        {
          v80 = *((_DWORD *)this + 998);
          if ( !v80 || a2 >= (*((_DWORD *)this + 999) - v80) >> 2 )
            _invalid_parameter_noinfo();
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v88 + *((_DWORD *)this + 998)) + 136))(
            *(_DWORD *)(v88 + *((_DWORD *)this + 998)),
            1);
          goto LABEL_144;
        }
        v79 = *((_DWORD *)this + 998);
        if ( !v79 || a2 >= (*((_DWORD *)this + 999) - v79) >> 2 )
          _invalid_parameter_noinfo();
      }
      (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v88 + *((_DWORD *)this + 998)) + 136))(
        *(_DWORD *)(v88 + *((_DWORD *)this + 998)),
        0);
LABEL_144:
      CDropBagUI::RefreshSuiteStatus(this);
    }
  }
}

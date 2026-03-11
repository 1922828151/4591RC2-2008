/*
 * func-name: ?SetSubWeapon@CDropBagUI@@IAEXHKK_N@Z_0
 * func-address: 0x1026b490
 * callers: 0x1000e7c3
 * callees: 0x10001dfc, 0x10003ca1, 0x10007059, 0x10008a17, 0x1000970a, 0x1000aff6, 0x1000c252, 0x1000e52f, 0x1000fafb, 0x10010389, 0x1001241d, 0x10012c29, 0x10013ca5, 0x10013d95, 0x100172dd, 0x1001a0cd, 0x1001a0f5, 0x1001ac58, 0x102c8d6c, 0x102c9d50, 0x102c9ea8
 */

void __thiscall CDropBagUI::SetSubWeapon(CDropBagUI *this, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v6; // ecx
  void (__cdecl *v7)(); // ebx
  unsigned int v8; // ebp
  int v9; // eax
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
  int v37; // ebp
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // edi
  int v42; // ebx
  int v43; // eax
  int v44; // ebp
  int v45; // eax
  int v46; // eax
  int v47; // edi
  unsigned int v48; // ebp
  int v49; // ecx
  int v50; // eax
  int v51; // ebp
  void *v52; // ebx
  int v53; // ecx
  void (__cdecl *v54)(); // ebp
  unsigned int v55; // ebx
  int v56; // ecx
  GameClient::FlyweightManager *v57; // eax
  struct GameClient::Flyweight *v58; // eax
  int v59; // eax
  GameClient::ProductManager *v60; // eax
  struct GameClient::FProductInfo *ProductInfo; // edi
  const char *v62; // eax
  const wchar_t *v63; // eax
  int v64; // ecx
  void *v65; // edi
  int v66; // ebx
  char *v67; // edi
  char *v68; // edi
  unsigned int v69; // ebp
  unsigned int v70; // ebx
  int v71; // ecx
  unsigned int v72; // eax
  int v73; // ebx
  unsigned int v74; // ebp
  int v75; // eax
  int v76; // ecx
  int v77; // eax
  int v78; // ebx
  int v79; // eax
  int v80; // eax
  int v81; // ecx
  unsigned int v82; // edi
  int v83; // ecx
  int v84; // ecx
  int v85; // ecx
  unsigned int v86; // [esp+20h] [ebp-6Ch]
  unsigned int v87; // [esp+20h] [ebp-6Ch]
  unsigned int v88; // [esp+20h] [ebp-6Ch]
  unsigned int v89; // [esp+20h] [ebp-6Ch]
  unsigned int v90; // [esp+20h] [ebp-6Ch]
  unsigned int v91; // [esp+20h] [ebp-6Ch]
  int v92; // [esp+20h] [ebp-6Ch]
  int v93; // [esp+38h] [ebp-54h] BYREF
  void *v94; // [esp+3Ch] [ebp-50h]
  int v95; // [esp+40h] [ebp-4Ch] BYREF
  int v96; // [esp+44h] [ebp-48h] BYREF
  int v97; // [esp+48h] [ebp-44h] BYREF
  void *v98; // [esp+4Ch] [ebp-40h]
  int v99; // [esp+50h] [ebp-3Ch]
  int v100; // [esp+54h] [ebp-38h]
  _DWORD v101[7]; // [esp+64h] [ebp-28h] BYREF
  int v102; // [esp+88h] [ebp-4h]

  v6 = *((_DWORD *)this + 984);
  v7 = _invalid_parameter_noinfo;
  v8 = a2;
  if ( !v6 || a2 >= (*((_DWORD *)this + 985) - v6) >> 2 )
    _invalid_parameter_noinfo();
  v9 = *((_DWORD *)this + 984);
  if ( *(_DWORD *)(4 * a2 + v9) == -1 || (_BYTE)a5 )
    goto LABEL_147;
  if ( !v9 || a2 >= (*((_DWORD *)this + 985) - v9) >> 2 )
    _invalid_parameter_noinfo();
  v10 = sub_10001DFC(*(_DWORD *)(*((_DWORD *)this + 984) + 4 * a2));
  if ( !v10 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 184))(v10) )
  {
LABEL_147:
    if ( a3 != -1 )
    {
      v11 = 0;
      if ( *((_DWORD *)this + 970) != -1 )
      {
        v86 = *((_DWORD *)this + 970);
        v12 = GameClient::FlyweightManager::Instance();
        Flyweight = GameClient::FlyweightManager::GetFlyweight(v12, v86);
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
          v87 = *(_DWORD *)(*((_DWORD *)this + 972) + 4 * i);
          v17 = GameClient::FlyweightManager::Instance();
          v11 += *((_DWORD *)GameClient::FlyweightManager::GetFlyweight(v17, v87) + 51);
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
          v88 = *(_DWORD *)(*((_DWORD *)this + 980) + 4 * j);
          v21 = GameClient::FlyweightManager::Instance();
          v11 += *((_DWORD *)GameClient::FlyweightManager::GetFlyweight(v21, v88) + 51);
        }
      }
      v89 = a3;
      a5 = v11;
      v22 = GameClient::FlyweightManager::Instance();
      v23 = GameClient::FlyweightManager::GetFlyweight(v22, v89);
      v24 = *((_DWORD *)this + 980);
      v25 = *((_DWORD *)this + 992);
      v93 = *((_DWORD *)v23 + 51);
      if ( !v24 || v25 >= (*((_DWORD *)this + 981) - v24) >> 2 )
        _invalid_parameter_noinfo();
      v26 = *((_DWORD *)this + 980);
      v27 = *(_DWORD *)(v26 + 4 * v25);
      v28 = *((_DWORD *)this + 992);
      if ( !v26 || v28 >= (*((_DWORD *)this + 981) - v26) >> 2 )
        _invalid_parameter_noinfo();
      v90 = a3;
      *(_DWORD *)(*((_DWORD *)this + 980) + 4 * v28) = -1;
      IsEquipMatchingRobotSystem = CDropBagUI::IsEquipMatchingRobotSystem(this, v90);
      v30 = *((_DWORD *)this + 980);
      v31 = *((_DWORD *)this + 992);
      v32 = IsEquipMatchingRobotSystem;
      if ( !v30 || v31 >= (*((_DWORD *)this + 981) - v30) >> 2 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*((_DWORD *)this + 980) + 4 * v31) = v27;
      v33 = (CREStatic *)*((_DWORD *)this + 991);
      if ( !v32 )
      {
        CREStatic::SetText(v33, word_103217B0);
        return;
      }
      if ( v93 >= a5 )
      {
        CREStatic::SetText(v33, word_103217C8);
        return;
      }
      CREStatic::SetText(v33, word_103217E8);
      v8 = a2;
      v7 = _invalid_parameter_noinfo;
    }
    if ( CItemHolder::GetXYByPos(*((CItemHolder **)this + 988), v8, &v96, &v95) )
    {
      v34 = *((_DWORD *)this + 980);
      if ( v34 )
        v35 = (*((_DWORD *)this + 981) - v34) >> 2;
      else
        v35 = 0;
      if ( v35 < v8 + 1 )
        sub_10003CA1((char *)this + 3916, v8 + 1, -1);
      v36 = *((_DWORD *)this + 980);
      if ( !v36 || v8 >= (*((_DWORD *)this + 981) - v36) >> 2 )
        v7();
      v37 = 4 * v8;
      if ( *(_DWORD *)(*((_DWORD *)this + 980) + v37) != -1 )
      {
        v38 = *((_DWORD *)this + 980);
        if ( !v38 || a2 >= (*((_DWORD *)this + 981) - v38) >> 2 )
          _invalid_parameter_noinfo();
        v39 = sub_10001DFC(*(_DWORD *)(v37 + *((_DWORD *)this + 980)));
        v40 = *((_DWORD *)this + 984);
        v41 = v39;
        if ( !v40 || a2 >= (*((_DWORD *)this + 985) - v40) >> 2 )
          _invalid_parameter_noinfo();
        v42 = *(_DWORD *)(*((_DWORD *)this + 984) + v37);
        v93 = v42;
        if ( v41 )
        {
          v43 = _RTDynamicCast(
                  v41,
                  0,
                  &GameClient::WorldObject `RTTI Type Descriptor',
                  &GameClient::Equip `RTTI Type Descriptor');
          if ( !v43 )
            goto LABEL_91;
          v44 = *(_DWORD *)(v43 + 4);
        }
        else
        {
          v45 = sub_10001DFC(*((_DWORD *)this + 1015));
          v46 = _RTDynamicCast(
                  v45,
                  0,
                  &GameClient::WorldObject `RTTI Type Descriptor',
                  &GameClient::Booty `RTTI Type Descriptor');
          if ( !v46 )
            goto LABEL_91;
          v47 = v46 + 148;
          v48 = 0;
          if ( !sub_1000E52F() )
            goto LABEL_91;
          while ( 1 )
          {
            v49 = *(_DWORD *)(v47 + 4);
            if ( !v49 || v48 >= (*(_DWORD *)(v47 + 8) - v49) >> 3 )
              _invalid_parameter_noinfo();
            v50 = *(_DWORD *)(v47 + 4);
            if ( *(_DWORD *)(v50 + 8 * v48 + 4) == v42 )
              break;
            if ( ++v48 >= sub_1000E52F() )
              goto LABEL_91;
          }
          if ( !v50 || v48 >= (*(_DWORD *)(v47 + 8) - v50) >> 3 )
            _invalid_parameter_noinfo();
          v44 = *(_DWORD *)(*(_DWORD *)(v47 + 4) + 8 * v48);
        }
        a5 = v44;
        if ( v44 != -1 )
        {
          sub_10007059((int)&v97, (int)&a5);
          v51 = v97;
          v52 = (void *)*((_DWORD *)this + 1007);
          if ( !v97 || (CDropBagUI *)v97 != (CDropBagUI *)((char *)this + 4024) )
            _invalid_parameter_noinfo();
          if ( v98 == v52 )
          {
            v98 = 0;
            v99 = 0;
            v100 = 0;
            v102 = 0;
            sub_1001A0F5(&v97, (int)&v93);
            sub_1000FAFB((int)&a5);
            sub_1000C252((int)&v97);
            v102 = -1;
            if ( v98 )
              operator delete(v98);
          }
          else
          {
            if ( !v51 )
              _invalid_parameter_noinfo();
            if ( v98 == *(void **)(v51 + 4) )
              _invalid_parameter_noinfo();
            sub_1001A0F5((char *)v98 + 12, (int)&v93);
          }
        }
      }
LABEL_91:
      v53 = *((_DWORD *)this + 980);
      if ( v53 && a2 < (*((_DWORD *)this + 981) - v53) >> 2 )
      {
        v54 = _invalid_parameter_noinfo;
      }
      else
      {
        v54 = _invalid_parameter_noinfo;
        _invalid_parameter_noinfo();
      }
      v55 = a3;
      *(_DWORD *)(*((_DWORD *)this + 980) + 4 * a2) = a3;
      v56 = *((_DWORD *)this + 984);
      if ( !v56 || a2 >= (*((_DWORD *)this + 985) - v56) >> 2 )
        v54();
      *(_DWORD *)(*((_DWORD *)this + 984) + 4 * a2) = a4;
      CItemHolder::SetItem(*((CItemHolder **)this + 988), v96, v95, 0);
      if ( v55 == -1 )
      {
        v84 = *((_DWORD *)this + 998);
        v82 = a2 + 3;
        if ( !v84 || v82 >= (*((_DWORD *)this + 999) - v84) >> 2 )
          v54();
      }
      else
      {
        v57 = GameClient::FlyweightManager::Instance();
        v58 = GameClient::FlyweightManager::GetFlyweight(v57, v55);
        v59 = _RTDynamicCast(
                v58,
                0,
                &GameClient::Flyweight `RTTI Type Descriptor',
                &GameClient::FProduct `RTTI Type Descriptor');
        a5 = v59;
        if ( v59 )
        {
          v91 = *(_DWORD *)(v59 + 108);
          v60 = GameClient::ProductManager::Instance();
          ProductInfo = GameClient::ProductManager::GetProductInfo(v60, v91);
          if ( ProductInfo )
          {
            std::wstring::wstring(v101, &unk_103217EC);
            v102 = 1;
            v62 = (const char *)std::string::c_str((char *)ProductInfo + 176);
            v63 = atow(v62);
            std::wstring::wstring(&v97, v63);
            v64 = *((_DWORD *)this + 988);
            LOBYTE(v102) = 2;
            CItemHolder::InsertItem(v64, v96, v95, &v97, a4, &unk_103B3DF4, -1, v101);
            LOBYTE(v102) = 1;
            std::wstring::~wstring(&v97);
            v102 = -1;
            std::wstring::~wstring(v101);
          }
          sub_10007059((int)&v93, (int)&a3);
          v65 = (void *)*((_DWORD *)this + 1007);
          if ( !v93 || (CDropBagUI *)v93 != (CDropBagUI *)((char *)this + 4024) )
            _invalid_parameter_noinfo();
          if ( v94 != v65 )
          {
            v66 = v93;
            if ( !v93 )
              _invalid_parameter_noinfo();
            v67 = (char *)v94;
            if ( v94 == *(void **)(v66 + 4) )
              _invalid_parameter_noinfo();
            v68 = v67 + 12;
            v69 = 0;
            if ( sub_1001AC58() )
            {
              v70 = a4;
              while ( 1 )
              {
                v71 = *((_DWORD *)v68 + 1);
                if ( !v71 || v69 >= (*((_DWORD *)v68 + 2) - v71) >> 2 )
                  _invalid_parameter_noinfo();
                v72 = *((_DWORD *)v68 + 1);
                if ( *(_DWORD *)(v72 + 4 * v69) == v70 )
                  break;
                if ( ++v69 >= sub_1001AC58() )
                  goto LABEL_131;
              }
              v73 = *((_DWORD *)v68 + 1);
              if ( v72 > *((_DWORD *)v68 + 2) )
                _invalid_parameter_noinfo();
              v74 = v73 + 4 * v69;
              if ( v74 > *((_DWORD *)v68 + 2) || v74 < *((_DWORD *)v68 + 1) )
                _invalid_parameter_noinfo();
              v75 = (int)(*((_DWORD *)v68 + 2) - (v74 + 4)) >> 2;
              if ( v75 > 0 )
                memmove_s((void *const)v74, 4 * v75, (const void *const)(v74 + 4), 4 * v75);
              *((_DWORD *)v68 + 2) -= 4;
              v76 = *((_DWORD *)v68 + 1);
              if ( v76 )
                v77 = (*((_DWORD *)v68 + 2) - v76) >> 2;
              else
                v77 = 0;
              v78 = a5;
              sub_10013CA5(*(_DWORD *)(a5 + 108), v77);
              v79 = *((_DWORD *)v68 + 1);
              if ( !v79 || !((*((_DWORD *)v68 + 2) - v79) >> 2) )
              {
                sub_10013D95((int)&v97, v93, v94);
                sub_1001A0CD(*(_DWORD *)(v78 + 108), a3);
                CDropBagUI::RefreshList(this, 0);
              }
            }
          }
        }
LABEL_131:
        v80 = sub_10001DFC(a4);
        if ( !v80 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v80 + 184))(v80) )
        {
          v83 = *((_DWORD *)this + 998);
          v82 = a2 + 3;
          if ( !v83 || v82 >= (*((_DWORD *)this + 999) - v83) >> 2 )
            _invalid_parameter_noinfo();
          v92 = 1;
          goto LABEL_144;
        }
        v81 = *((_DWORD *)this + 998);
        v82 = a2 + 3;
        if ( !v81 || v82 >= (*((_DWORD *)this + 999) - v81) >> 2 )
          _invalid_parameter_noinfo();
      }
      v92 = 0;
LABEL_144:
      v85 = *(_DWORD *)(*((_DWORD *)this + 998) + 4 * v82);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v85 + 136))(v85, v92);
      CDropBagUI::RefreshSuiteStatus(this);
    }
  }
}

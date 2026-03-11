/*
 * func-name: ?LoadResourceFPV@Equip@GameClient@@UAE_NXZ_0
 * func-address: 0x1015bfa0
 * callers: 0x100124fe
 * callees: 0x10001794, 0x10001d34, 0x10004ff2, 0x100081c0, 0x1000ab4b, 0x1000bf05, 0x1000cf45, 0x1000d5c1, 0x1001135b, 0x10011a72, 0x100145c9, 0x10016b5d, 0x10019484, 0x100195e7, 0x10019d76, 0x1001a5d2, 0x102c71e0, 0x102c9d98
 */

char __thiscall GameClient::Equip::LoadResourceFPV(GameClient::Equip *this)
{
  GameClient::Equip *v1; // ebx
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  char *v7; // edi
  int v8; // ebp
  int v9; // edi
  int v10; // ebp
  unsigned int v11; // ebp
  bool v12; // cc
  char *v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ebp
  int v17; // ebp
  int v18; // eax
  int v19; // eax
  int v20; // ebp
  unsigned int v21; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  int v29; // ecx
  int v30; // ebx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  unsigned int v36; // edi
  int i; // ebp
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edi
  int v43; // eax
  int v44; // eax
  int v45; // edi
  char *v46; // ebp
  unsigned int v47; // edi
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // ebx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // edx
  int v56; // eax
  int v57; // ebx
  int v58; // eax
  int v59; // eax
  int v61; // [esp-84h] [ebp-118h] BYREF
  int v62; // [esp-80h] [ebp-114h]
  int v63; // [esp-7Ch] [ebp-110h]
  int v64; // [esp-78h] [ebp-10Ch]
  int v65; // [esp-74h] [ebp-108h]
  int v66; // [esp-70h] [ebp-104h]
  int v67; // [esp-6Ch] [ebp-100h]
  int v68; // [esp-68h] [ebp-FCh] BYREF
  int v69; // [esp-64h] [ebp-F8h]
  int v70; // [esp-60h] [ebp-F4h]
  int v71; // [esp-5Ch] [ebp-F0h]
  int v72; // [esp-58h] [ebp-ECh]
  int v73; // [esp-54h] [ebp-E8h]
  int v74; // [esp-50h] [ebp-E4h]
  int v75; // [esp-4Ch] [ebp-E0h]
  int v76; // [esp-48h] [ebp-DCh]
  int v77; // [esp-44h] [ebp-D8h]
  int v78; // [esp-40h] [ebp-D4h]
  int v79; // [esp-3Ch] [ebp-D0h]
  int v80; // [esp-38h] [ebp-CCh]
  int v81; // [esp-34h] [ebp-C8h]
  int v82; // [esp-30h] [ebp-C4h]
  int v83; // [esp-2Ch] [ebp-C0h]
  int v84; // [esp-28h] [ebp-BCh]
  int v85; // [esp-24h] [ebp-B8h]
  int v86; // [esp-20h] [ebp-B4h]
  int v87; // [esp-1Ch] [ebp-B0h]
  int v88; // [esp-18h] [ebp-ACh]
  int v89; // [esp-14h] [ebp-A8h]
  int v90; // [esp-10h] [ebp-A4h]
  int *v91; // [esp-Ch] [ebp-A0h]
  int v92; // [esp-8h] [ebp-9Ch]
  int v93; // [esp-4h] [ebp-98h]
  int v94; // [esp+0h] [ebp-94h]
  int *v95; // [esp+4h] [ebp-90h]
  int *v96; // [esp+8h] [ebp-8Ch]
  int v97; // [esp+Ch] [ebp-88h]
  int v98; // [esp+10h] [ebp-84h]
  int v99; // [esp+14h] [ebp-80h]
  GameClient::Equip *v100; // [esp+24h] [ebp-70h]
  unsigned int v101; // [esp+28h] [ebp-6Ch]
  int v102; // [esp+2Ch] [ebp-68h]
  int *v103; // [esp+30h] [ebp-64h]
  _BYTE v104[28]; // [esp+34h] [ebp-60h] BYREF
  _BYTE v105[28]; // [esp+50h] [ebp-44h] BYREF
  _DWORD v106[7]; // [esp+6Ch] [ebp-28h] BYREF
  int v107; // [esp+90h] [ebp-4h]

  v1 = this;
  v100 = this;
  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)(v2 + 1704) )
  {
    v3 = AudioDevice::Instance();
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
    *((_DWORD *)v1 + 99) = v4;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 1704) + 12))(*(_DWORD *)(v2 + 1704), v4);
  }
  if ( *(_DWORD *)(v2 + 1864) )
  {
    v5 = AudioDevice::Instance();
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
    *((_DWORD *)v1 + 139) = v6;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 1864) + 12))(*(_DWORD *)(v2 + 1864), v6);
  }
  v97 = v2 + 1888;
  *((_BYTE *)v1 + 644) = 0;
  std::string::operator=((char *)v1 + 580, v97);
  sub_10004FF2((char *)v1 + 580);
  v97 = v2 + 1968;
  *((_BYTE *)v1 + 724) = 0;
  std::string::operator=((char *)v1 + 660, v97);
  sub_10004FF2((char *)v1 + 660);
  if ( *(_DWORD *)(v2 + 436)
    && (*(unsigned __int8 (__thiscall **)(_DWORD, int, int))(**((_DWORD **)v1 + 45) + 144))(
         *((_DWORD *)v1 + 45),
         v2 + 416,
         v2 + 360) )
  {
    sub_1000CF45();
    sub_1000D5C1(v2 + 1632);
    v7 = (char *)(v2 + 844);
    v8 = 5;
    do
    {
      sub_1000AB4B((void *)(*((_DWORD *)v1 + 45) + 2236), v7);
      v7 += 28;
      --v8;
    }
    while ( v8 );
    (*(void (__stdcall **)(int, int))(**((_DWORD **)v1 + 45) + 152))(*((_DWORD *)v1 + 45) + 2236, v2 + 360);
    v9 = 2200;
    v10 = v2 + 844;
    do
    {
      *(_DWORD *)(v9 + *((_DWORD *)v1 + 45)) = GameClient::AEquip::GetAnimFPV(v10);
      v9 += 4;
      v10 += 28;
    }
    while ( v9 < 2220 );
    v11 = *((_DWORD *)v1 + 75);
    v12 = *((_DWORD *)v1 + 74) <= v11;
    v13 = (char *)v1 + 292;
    v101 = v11;
    if ( !v12 )
      _invalid_parameter_noinfo();
    v14 = *((_DWORD *)v1 + 74);
    v12 = v14 <= *((_DWORD *)v1 + 75);
    v102 = v14;
    if ( !v12 )
    {
      _invalid_parameter_noinfo();
      v14 = v102;
    }
    if ( v14 != v11 )
    {
      v15 = v102;
      v16 = 148 * ((int)(*((_DWORD *)v1 + 75) - v11) / 148);
      LOBYTE(v102) = 0;
      v97 = v102;
      LOBYTE(v103) = 0;
      v96 = v103;
      v95 = v103;
      v17 = v15 + v16;
      sub_10019D76(v101, *((_DWORD *)v1 + 75), v15);
      v18 = *((_DWORD *)v1 + 75);
      v91 = v103;
      v90 = (int)v1 + 292;
      v89 = v18;
      v88 = v17;
      sub_10011A72();
      *((_DWORD *)v1 + 75) = v17;
    }
    v19 = *(_DWORD *)(v2 + 464);
    if ( v19 )
      v20 = (*(_DWORD *)(v2 + 468) - v19) / 28;
    else
      v20 = 0;
    v103 = &v61;
    std::string::string(&v61);
    v107 = 0;
    sub_100145C9(v61, v62);
    v107 = -1;
    sub_100081C0(
      v20,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      (int)v91,
      v92,
      v93,
      v94,
      (int)v95,
      (int)v96,
      v97);
    v21 = 0;
    v102 = 0;
    v101 = 0;
    while ( 1 )
    {
      v22 = *(_DWORD *)(v2 + 464);
      if ( !v22 || v21 >= (*(_DWORD *)(v2 + 468) - v22) / 28 )
        break;
      v23 = sub_100195E7((int)v105, v21);
      v107 = 1;
      v103 = (int *)std::operator+<char>(v104, "FPVShootPoint", v23);
      v24 = *(_DWORD *)(v2 + 464);
      LOBYTE(v107) = 2;
      if ( !v24 || v21 >= (*(_DWORD *)(v2 + 468) - v24) / 28 )
        _invalid_parameter_noinfo();
      v25 = (*(int (__thiscall **)(_DWORD, int *, unsigned int, _DWORD))(**((_DWORD **)v100 + 45) + 124))(
              *((_DWORD *)v100 + 45),
              v103,
              v101 + *(_DWORD *)(v2 + 464),
              *(_DWORD *)(*((_DWORD *)v100 + 45) + 1364));
      LOBYTE(v107) = 1;
      std::string::~string(v104);
      v107 = -1;
      std::string::~string(v105);
      if ( v25 )
      {
        v26 = sub_100195E7((int)v104, v21);
        v107 = 3;
        v27 = std::operator+<char>(v105, "FPVShootPoint", v26);
        v28 = *((_DWORD *)v13 + 1);
        LOBYTE(v107) = 4;
        if ( !v28 || v21 >= (*((_DWORD *)v13 + 2) - v28) / 148 )
          _invalid_parameter_noinfo();
        v29 = *((_DWORD *)v13 + 1);
        v97 = v27;
        v30 = v102;
        std::string::operator=(v102 + v29, v97);
        LOBYTE(v107) = 3;
        std::string::~string(v105);
        v107 = -1;
        std::string::~string(v104);
        if ( *(_DWORD *)(v2 + 524) )
        {
          v31 = sub_102C71E0(v104, v2 + 504);
          v107 = 5;
          v103 = (int *)std::operator+<char>(v105, v31, ".reb");
          v32 = *((_DWORD *)v13 + 1);
          LOBYTE(v107) = 6;
          if ( !v32 || v21 >= (*((_DWORD *)v13 + 2) - v32) / 148 )
            _invalid_parameter_noinfo();
          std::string::operator=(*((_DWORD *)v13 + 1) + v30 + 28, v103);
          LOBYTE(v107) = 5;
          std::string::~string(v105);
          v107 = -1;
          std::string::~string(v104);
          v33 = *((_DWORD *)v13 + 1);
          if ( !v33 || v21 >= (*((_DWORD *)v13 + 2) - v33) / 148 )
            _invalid_parameter_noinfo();
          std::string::operator=(*((_DWORD *)v13 + 1) + v30 + 56, &unk_1031401B);
          v34 = *((_DWORD *)v13 + 1);
          if ( !v34 || v21 >= (*((_DWORD *)v13 + 2) - v34) / 148 )
            _invalid_parameter_noinfo();
          sub_10019484(*(_DWORD *)(*((_DWORD *)v100 + 45) + 712), 0);
          v35 = *((_DWORD *)v13 + 1);
          if ( !v35 || v21 >= (*((_DWORD *)v13 + 2) - v35) / 148 )
            _invalid_parameter_noinfo();
          if ( sub_1000BF05() )
            sub_1001A5D2(0);
        }
      }
      else
      {
        v30 = v102;
      }
      v101 += 28;
      ++v21;
      v102 = v30 + 148;
      v1 = v100;
    }
    v36 = 0;
    for ( i = 0; ; i += 28 )
    {
      v38 = *(_DWORD *)(v2 + 628);
      if ( !v38 || v36 >= (*(_DWORD *)(v2 + 632) - v38) / 28 )
        break;
      v39 = *(_DWORD *)(v2 + 628);
      if ( !v39 || v36 >= (*(_DWORD *)(v2 + 632) - v39) / 28 )
        _invalid_parameter_noinfo();
      v103 = (int *)std::operator+<char>(v105, i + *(_DWORD *)(v2 + 628), "FPV");
      v40 = *(_DWORD *)(v2 + 628);
      v107 = 7;
      if ( !v40 || v36 >= (*(_DWORD *)(v2 + 632) - v40) / 28 )
        _invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD, int *, int, _DWORD))(**((_DWORD **)v1 + 45) + 124))(
        *((_DWORD *)v1 + 45),
        v103,
        i + *(_DWORD *)(v2 + 628),
        *(_DWORD *)(*((_DWORD *)v1 + 45) + 1364));
      v107 = -1;
      std::string::~string(v105);
      ++v36;
    }
    v41 = *(_DWORD *)(v2 + 676);
    if ( v41 )
      v42 = (*(_DWORD *)(v2 + 680) - v41) / 28;
    else
      v42 = 0;
    v43 = *(_DWORD *)(v2 + 692);
    if ( v43 )
      v43 = (*(_DWORD *)(v2 + 696) - v43) / 28;
    if ( v42 == v43 )
    {
      v44 = *(_DWORD *)(v2 + 676);
      if ( v44 )
        v45 = (*(_DWORD *)(v2 + 680) - v44) / 28;
      else
        v45 = 0;
      v103 = &v68;
      sub_100145C9(v68, v69);
      v46 = (char *)v1 + 324;
      sub_10001794(
        v45,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90,
        (int)v91,
        v92,
        v93,
        v94,
        (int)v95,
        (int)v96,
        v97);
      v47 = 0;
      v102 = 0;
      v101 = 0;
      while ( 1 )
      {
        v48 = *(_DWORD *)(v2 + 676);
        if ( !v48 || v47 >= (*(_DWORD *)(v2 + 680) - v48) / 28 )
          break;
        v49 = *(_DWORD *)(v2 + 676);
        if ( !v49 || v47 >= (*(_DWORD *)(v2 + 680) - v49) / 28 )
          _invalid_parameter_noinfo();
        v50 = *((_DWORD *)v46 + 1);
        v51 = v102 + *(_DWORD *)(v2 + 676);
        if ( !v50 || v47 >= (*((_DWORD *)v46 + 2) - v50) / 120 )
          _invalid_parameter_noinfo();
        std::string::operator=(v101 + *((_DWORD *)v46 + 1), v51);
        v52 = *((_DWORD *)v46 + 1);
        if ( !v52 || v47 >= (*((_DWORD *)v46 + 2) - v52) / 120 )
          _invalid_parameter_noinfo();
        std::string::operator=(*((_DWORD *)v46 + 1) + v101 + 28, &unk_10314027);
        v53 = *((_DWORD *)v46 + 1);
        if ( !v53 || v47 >= (*((_DWORD *)v46 + 2) - v53) / 120 )
          _invalid_parameter_noinfo();
        sub_10019484(*(_DWORD *)(*((_DWORD *)v100 + 45) + 712), 0);
        v54 = *((_DWORD *)v46 + 1);
        if ( !v54 || v47 >= (*((_DWORD *)v46 + 2) - v54) / 120 )
          _invalid_parameter_noinfo();
        if ( sub_1000BF05() )
        {
          v55 = *((_DWORD *)v100 + 37);
          if ( !v55 || !*(_BYTE *)(v55 + 700) )
            sub_1001A5D2(0);
        }
        v56 = *(_DWORD *)(v2 + 692);
        if ( !v56 || v47 >= (*(_DWORD *)(v2 + 696) - v56) / 28 )
          _invalid_parameter_noinfo();
        v57 = v102;
        v103 = (int *)std::operator+<char>(v106, v102 + *(_DWORD *)(v2 + 692), "FPV");
        v58 = *(_DWORD *)(v2 + 692);
        v107 = 8;
        if ( !v58 || v47 >= (*(_DWORD *)(v2 + 696) - v58) / 28 )
          _invalid_parameter_noinfo();
        (*(void (__thiscall **)(_DWORD, int *, int, _DWORD))(**((_DWORD **)v100 + 45) + 124))(
          *((_DWORD *)v100 + 45),
          v103,
          v57 + *(_DWORD *)(v2 + 692),
          *(_DWORD *)(*((_DWORD *)v100 + 45) + 1364));
        v107 = -1;
        std::string::~string(v106);
        v101 += 120;
        ++v47;
        v102 = v57 + 28;
        v1 = v100;
      }
    }
  }
  if ( !*((_DWORD *)v1 + 44) )
  {
    v103 = (int *)operator new(0x16Cu);
    v107 = 9;
    if ( v103 )
      v59 = sub_10001D34(v98, v99);
    else
      v59 = 0;
    v97 = v2 + 596;
    v96 = (int *)(v2 + 568);
    v95 = (int *)(v2 + 540);
    v107 = -1;
    *((_DWORD *)v1 + 44) = v59;
    sub_1001135B((int)v95, (int)v96, v97);
  }
  return 1;
}

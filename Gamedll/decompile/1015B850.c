/*
 * func-name: ?LoadResource@Equip@GameClient@@UAE_NXZ_0
 * func-address: 0x1015b850
 * callers: 0x100023fb
 * callees: 0x10001794, 0x10006a19, 0x100081c0, 0x100083dc, 0x1000ab4b, 0x1000bf05, 0x1000d5c1, 0x10012166, 0x100145c9, 0x10018df9, 0x10019484, 0x100195e7, 0x1001a5d2, 0x102c71e0
 */

bool __thiscall GameClient::Equip::LoadResource(GameClient::Equip *this)
{
  GameClient::WorldObject *v1; // ebp
  int v2; // ebx
  int v3; // ecx
  unsigned __int8 (__thiscall *v4)(int, int, _DWORD *, int); // eax
  char *v5; // esi
  int v6; // edi
  unsigned int v7; // edi
  int v8; // esi
  unsigned int v9; // ebp
  int v10; // eax
  int v11; // edi
  unsigned int v12; // edi
  int v13; // eax
  int v14; // eax
  int v15; // ebp
  int v16; // eax
  int v17; // eax
  int v18; // ebp
  int v19; // eax
  int v20; // edx
  int v21; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // eax
  GameClient::Equip *v25; // ebp
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // edi
  char *v31; // esi
  unsigned int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // ebp
  int v37; // ecx
  int v38; // ebp
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int *v44; // ebp
  int v45; // eax
  int v46; // eax
  int v48; // [esp-94h] [ebp-154h] BYREF
  int v49; // [esp-90h] [ebp-150h]
  int v50; // [esp-8Ch] [ebp-14Ch]
  int v51; // [esp-88h] [ebp-148h]
  int v52; // [esp-84h] [ebp-144h]
  int v53; // [esp-80h] [ebp-140h]
  int v54; // [esp-7Ch] [ebp-13Ch]
  int v55; // [esp-78h] [ebp-138h] BYREF
  int v56; // [esp-74h] [ebp-134h]
  int v57; // [esp-70h] [ebp-130h]
  int v58; // [esp-6Ch] [ebp-12Ch]
  int v59; // [esp-68h] [ebp-128h]
  int v60; // [esp-64h] [ebp-124h]
  int v61; // [esp-60h] [ebp-120h]
  int v62; // [esp-5Ch] [ebp-11Ch]
  int v63; // [esp-58h] [ebp-118h]
  int v64; // [esp-54h] [ebp-114h]
  int v65; // [esp-50h] [ebp-110h]
  int v66; // [esp-4Ch] [ebp-10Ch]
  int v67; // [esp-48h] [ebp-108h]
  int v68; // [esp-44h] [ebp-104h]
  int v69; // [esp-40h] [ebp-100h]
  int v70; // [esp-3Ch] [ebp-FCh]
  int v71; // [esp-38h] [ebp-F8h]
  int v72; // [esp-34h] [ebp-F4h]
  int v73; // [esp-30h] [ebp-F0h]
  int v74; // [esp-2Ch] [ebp-ECh]
  int v75; // [esp-28h] [ebp-E8h]
  int v76; // [esp-24h] [ebp-E4h]
  int v77; // [esp-20h] [ebp-E0h]
  int v78; // [esp-1Ch] [ebp-DCh]
  int v79; // [esp-18h] [ebp-D8h]
  int v80; // [esp-14h] [ebp-D4h]
  int v81; // [esp-10h] [ebp-D0h]
  int v82; // [esp-Ch] [ebp-CCh]
  int v83; // [esp-8h] [ebp-C8h]
  int v84; // [esp-4h] [ebp-C4h]
  int v85; // [esp+14h] [ebp-ACh]
  int i; // [esp+18h] [ebp-A8h]
  GameClient::Equip *v87; // [esp+1Ch] [ebp-A4h]
  int *v88; // [esp+20h] [ebp-A0h] BYREF
  _DWORD v89[7]; // [esp+28h] [ebp-98h] BYREF
  _BYTE v90[28]; // [esp+44h] [ebp-7Ch] BYREF
  _BYTE v91[28]; // [esp+60h] [ebp-60h] BYREF
  _BYTE v92[28]; // [esp+7Ch] [ebp-44h] BYREF
  _BYTE v93[28]; // [esp+98h] [ebp-28h] BYREF
  int v94; // [esp+BCh] [ebp-4h]

  v1 = this;
  v87 = this;
  v88 = 0;
  v2 = *((_DWORD *)this + 2);
  if ( !*(_DWORD *)(v2 + 408)
    || (std::string::string(v89, &unk_10314018),
        v3 = *((_DWORD *)v1 + 45),
        v4 = *(unsigned __int8 (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)v3 + 108),
        v94 = 0,
        v88 = (int *)1,
        HIBYTE(v85) = 1,
        !v4(v3, v2 + 388, v89, v2 + 360)) )
  {
    HIBYTE(v85) = 0;
  }
  v94 = -1;
  if ( ((unsigned __int8)v88 & 1) != 0 )
    std::string::~string(v89);
  if ( HIBYTE(v85) )
  {
    memset(&v89[1], 0, 12);
    v94 = 1;
    v5 = (char *)(v2 + 704);
    v6 = 5;
    do
    {
      sub_1000AB4B((void *)(*((_DWORD *)v1 + 45) + 2220), v5);
      v5 += 28;
      --v6;
    }
    while ( v6 );
    v7 = *((_DWORD *)v1 + 71);
    v8 = (int)v1 + 276;
    if ( *((_DWORD *)v1 + 70) > v7 )
      _invalid_parameter_noinfo();
    v9 = *((_DWORD *)v1 + 70);
    if ( v9 > *(_DWORD *)(v8 + 8) )
      _invalid_parameter_noinfo();
    sub_10018DF9((int)&v88, v8, v9, v8, v7);
    v10 = *(_DWORD *)(v2 + 448);
    if ( v10 )
      v11 = (*(_DWORD *)(v2 + 452) - v10) / 28;
    else
      v11 = 0;
    v88 = &v48;
    std::string::string(&v48);
    LOBYTE(v94) = 2;
    sub_100145C9(v48, v49);
    LOBYTE(v94) = 1;
    sub_100081C0(
      v11,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
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
      v84);
    sub_1000D5C1(v2 + 444);
    v12 = 0;
    for ( i = 0; ; i += 148 )
    {
      v13 = *(_DWORD *)(v2 + 448);
      if ( !v13 || v12 >= (*(_DWORD *)(v2 + 452) - v13) / 28 )
        break;
      v14 = sub_100195E7((int)v90, v12);
      LOBYTE(v94) = 3;
      v15 = std::operator+<char>(v92, "ShootPoint", v14);
      v16 = *(_DWORD *)(v8 + 4);
      LOBYTE(v94) = 4;
      if ( !v16 || v12 >= (*(_DWORD *)(v8 + 8) - v16) / 148 )
        _invalid_parameter_noinfo();
      std::string::operator=(i + *(_DWORD *)(v8 + 4), v15);
      LOBYTE(v94) = 3;
      std::string::~string(v92);
      LOBYTE(v94) = 1;
      std::string::~string(v90);
      if ( *(_DWORD *)(v2 + 496) )
      {
        v17 = sub_102C71E0(v93, v2 + 476);
        LOBYTE(v94) = 5;
        v18 = std::operator+<char>(v91, v17, ".reb");
        v19 = *(_DWORD *)(v8 + 4);
        LOBYTE(v94) = 6;
        if ( !v19 || v12 >= (*(_DWORD *)(v8 + 8) - v19) / 148 )
          _invalid_parameter_noinfo();
        v20 = *(_DWORD *)(v8 + 4);
        v84 = v18;
        v21 = i;
        std::string::operator=(v20 + i + 28, v84);
        LOBYTE(v94) = 5;
        std::string::~string(v91);
        LOBYTE(v94) = 1;
        std::string::~string(v93);
        v22 = *(_DWORD *)(v8 + 4);
        if ( !v22 || v12 >= (*(_DWORD *)(v8 + 8) - v22) / 148 )
          _invalid_parameter_noinfo();
        std::string::operator=(*(_DWORD *)(v8 + 4) + v21 + 56, &unk_10314019);
        v23 = *(_DWORD *)(v8 + 4);
        if ( !v23 || v12 >= (*(_DWORD *)(v8 + 8) - v23) / 148 )
          _invalid_parameter_noinfo();
        sub_10019484(*(_DWORD *)(*((_DWORD *)v87 + 45) + 712), 0);
        v24 = *(_DWORD *)(v8 + 4);
        if ( !v24 || v12 >= (*(_DWORD *)(v8 + 8) - v24) / 148 )
          _invalid_parameter_noinfo();
        if ( sub_1000BF05() )
          sub_1001A5D2(0);
      }
      ++v12;
    }
    v25 = v87;
    sub_1000D5C1(v2 + 624);
    v26 = *(_DWORD *)(v2 + 644);
    if ( v26 )
      v27 = (*(_DWORD *)(v2 + 648) - v26) / 28;
    else
      v27 = 0;
    v28 = *(_DWORD *)(v2 + 660);
    if ( v28 )
      v28 = (*(_DWORD *)(v2 + 664) - v28) / 28;
    if ( v27 == v28 )
    {
      v29 = *(_DWORD *)(v2 + 644);
      if ( v29 )
        v30 = (*(_DWORD *)(v2 + 648) - v29) / 28;
      else
        v30 = 0;
      v88 = &v55;
      sub_100145C9(v55, v56);
      v31 = (char *)v25 + 308;
      sub_10001794(
        v30,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60,
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
        v84);
      v32 = 0;
      v88 = 0;
      i = 0;
      while ( 1 )
      {
        v33 = *(_DWORD *)(v2 + 644);
        if ( !v33 || v32 >= (*(_DWORD *)(v2 + 648) - v33) / 28 )
          break;
        v34 = *(_DWORD *)(v2 + 644);
        if ( !v34 || v32 >= (*(_DWORD *)(v2 + 648) - v34) / 28 )
          _invalid_parameter_noinfo();
        v35 = *((_DWORD *)v31 + 1);
        v36 = (int)v88 + *(_DWORD *)(v2 + 644);
        if ( !v35 || v32 >= (*((_DWORD *)v31 + 2) - v35) / 120 )
          _invalid_parameter_noinfo();
        v37 = *((_DWORD *)v31 + 1);
        v84 = v36;
        v38 = i;
        std::string::operator=(i + v37, v84);
        v39 = *((_DWORD *)v31 + 1);
        if ( !v39 || v32 >= (*((_DWORD *)v31 + 2) - v39) / 120 )
          _invalid_parameter_noinfo();
        std::string::operator=(*((_DWORD *)v31 + 1) + v38 + 28, &unk_1031401A);
        v40 = *((_DWORD *)v31 + 1);
        if ( !v40 || v32 >= (*((_DWORD *)v31 + 2) - v40) / 120 )
          _invalid_parameter_noinfo();
        sub_10019484(*(_DWORD *)(*((_DWORD *)v87 + 45) + 712), 0);
        v41 = *((_DWORD *)v31 + 1);
        if ( !v41 || v32 >= (*((_DWORD *)v31 + 2) - v41) / 120 )
          _invalid_parameter_noinfo();
        if ( sub_1000BF05() )
        {
          v42 = *((_DWORD *)v87 + 37);
          if ( v42 )
          {
            if ( *(_BYTE *)(v42 + 700) )
              sub_1001A5D2(0);
          }
        }
        v43 = *(_DWORD *)(v2 + 660);
        if ( !v43 || v32 >= (*(_DWORD *)(v2 + 664) - v43) / 28 )
          _invalid_parameter_noinfo();
        v44 = v88;
        sub_1000AB4B((void *)(*((_DWORD *)v87 + 45) + 2268), (char *)v88 + *(_DWORD *)(v2 + 660));
        i += 120;
        ++v32;
        v88 = v44 + 7;
      }
    }
    v1 = v87;
    v94 = -1;
  }
  if ( GameClient::WorldObject::IsLocal(v1) )
  {
    (*(void (__thiscall **)(GameClient::WorldObject *))(*(_DWORD *)v1 + 196))(v1);
  }
  else if ( *(_DWORD *)(v2 + 1784) )
  {
    *((_BYTE *)v1 + 484) = *(_BYTE *)(v2 + 1792);
    *((float *)v1 + 120) = *(float *)(v2 + 1788);
    v45 = AudioDevice::Instance();
    v46 = (*(int (__thiscall **)(int))(*(_DWORD *)v45 + 12))(v45);
    *((_DWORD *)v1 + 119) = v46;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 1784) + 12))(*(_DWORD *)(v2 + 1784), v46);
  }
  GameClient::Equip::ChangeShowState(v1, 0);
  return GameClient::SystemPart::LoadResource(v1);
}

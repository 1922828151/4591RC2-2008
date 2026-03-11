/*
 * func-name: ?AddShootPoint@Equip@GameClient@@QAEXPAVModel@@@Z_0
 * func-address: 0x1015ca10
 * callers: 0x1001a09b
 * callees: 0x100081c0, 0x1000bf05, 0x10017d69, 0x10018df9, 0x10019484, 0x100195e7, 0x1001a5d2, 0x102c71e0
 */

void __thiscall GameClient::Equip::AddShootPoint(GameClient::Equip *this, struct Model *a2)
{
  unsigned int v2; // edi
  bool v3; // cc
  _DWORD *v4; // ebx
  char *v5; // esi
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // edi
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  int v12; // ebp
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
  int v25; // [esp-94h] [ebp-138h] BYREF
  int v26; // [esp-90h] [ebp-134h]
  int v27; // [esp-8Ch] [ebp-130h]
  int v28; // [esp-88h] [ebp-12Ch]
  int v29; // [esp-84h] [ebp-128h]
  int v30; // [esp-80h] [ebp-124h]
  int v31; // [esp-7Ch] [ebp-120h]
  int v32; // [esp-78h] [ebp-11Ch]
  int v33; // [esp-74h] [ebp-118h]
  int v34; // [esp-70h] [ebp-114h]
  int v35; // [esp-6Ch] [ebp-110h]
  int v36; // [esp-68h] [ebp-10Ch]
  int v37; // [esp-64h] [ebp-108h]
  int v38; // [esp-60h] [ebp-104h]
  int v39; // [esp-5Ch] [ebp-100h]
  int v40; // [esp-58h] [ebp-FCh]
  int v41; // [esp-54h] [ebp-F8h]
  int v42; // [esp-50h] [ebp-F4h]
  int v43; // [esp-4Ch] [ebp-F0h]
  int v44; // [esp-48h] [ebp-ECh]
  int v45; // [esp-44h] [ebp-E8h]
  int v46; // [esp-40h] [ebp-E4h]
  int v47; // [esp-3Ch] [ebp-E0h]
  int v48; // [esp-38h] [ebp-DCh]
  int v49; // [esp-34h] [ebp-D8h]
  int v50; // [esp-30h] [ebp-D4h]
  int v51; // [esp-2Ch] [ebp-D0h]
  int v52; // [esp-28h] [ebp-CCh]
  int v53; // [esp-24h] [ebp-C8h]
  int v54; // [esp-20h] [ebp-C4h]
  int v55; // [esp-1Ch] [ebp-C0h]
  int v56; // [esp-18h] [ebp-BCh]
  int v57; // [esp-14h] [ebp-B8h]
  int v58; // [esp-10h] [ebp-B4h]
  int v59; // [esp-Ch] [ebp-B0h]
  int v60; // [esp-8h] [ebp-ACh]
  int v61; // [esp-4h] [ebp-A8h]
  GameClient::Equip *v62; // [esp+14h] [ebp-90h]
  int v63; // [esp+18h] [ebp-8Ch]
  int *v64; // [esp+1Ch] [ebp-88h] BYREF
  _DWORD *v65; // [esp+24h] [ebp-80h]
  _BYTE v66[28]; // [esp+28h] [ebp-7Ch] BYREF
  _BYTE v67[28]; // [esp+44h] [ebp-60h] BYREF
  _BYTE v68[28]; // [esp+60h] [ebp-44h] BYREF
  _BYTE v69[28]; // [esp+7Ch] [ebp-28h] BYREF
  int v70; // [esp+A0h] [ebp-4h]

  v62 = this;
  v2 = *((_DWORD *)this + 71);
  v3 = *((_DWORD *)this + 70) <= v2;
  v4 = (_DWORD *)*((_DWORD *)this + 2);
  v5 = (char *)this + 276;
  v65 = v4;
  if ( !v3 )
    _invalid_parameter_noinfo();
  v6 = *((_DWORD *)v5 + 1);
  if ( v6 > *((_DWORD *)v5 + 2) )
    _invalid_parameter_noinfo();
  sub_10018DF9((int)&v64, (int)v5, v6, (int)v5, v2);
  v7 = v4[112];
  if ( v7 )
    v8 = (v4[113] - v7) / 28;
  else
    v8 = 0;
  v64 = &v25;
  sub_10017D69(v25, v26);
  sub_100081C0(
    v8,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
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
    v61);
  v9 = 0;
  v63 = 0;
  v64 = 0;
  while ( 1 )
  {
    v10 = v4[112];
    if ( !v10 )
    {
      *((_BYTE *)v62 + 185) = 1;
      return;
    }
    if ( v9 >= (v4[113] - v10) / 28 )
      break;
    if ( a2 )
    {
      v11 = sub_100195E7((int)v66, v9);
      v70 = 0;
      v12 = std::operator+<char>(v67, "ShootPoint", v11);
      v13 = v4[112];
      LOBYTE(v70) = 1;
      if ( !v13 || v9 >= (v4[113] - v13) / 28 )
        _invalid_parameter_noinfo();
      (*(void (__thiscall **)(_DWORD, int, int, struct Model *))(**((_DWORD **)v62 + 45) + 124))(
        *((_DWORD *)v62 + 45),
        v12,
        (int)v64 + v4[112],
        a2);
      LOBYTE(v70) = 0;
      std::string::~string(v67);
      v70 = -1;
      std::string::~string(v66);
      v4 = v65;
    }
    v14 = sub_100195E7((int)v67, v9);
    v70 = 2;
    v15 = std::operator+<char>(v66, "ShootPoint", v14);
    v16 = *((_DWORD *)v5 + 1);
    LOBYTE(v70) = 3;
    if ( !v16 || v9 >= (*((_DWORD *)v5 + 2) - v16) / 148 )
      _invalid_parameter_noinfo();
    std::string::operator=(v63 + *((_DWORD *)v5 + 1), v15);
    LOBYTE(v70) = 2;
    std::string::~string(v66);
    v70 = -1;
    std::string::~string(v67);
    if ( v4[124] )
    {
      v17 = sub_102C71E0(v69, v4 + 119);
      v70 = 4;
      v18 = std::operator+<char>(v68, v17, ".reb");
      v19 = *((_DWORD *)v5 + 1);
      LOBYTE(v70) = 5;
      if ( !v19 || v9 >= (*((_DWORD *)v5 + 2) - v19) / 148 )
        _invalid_parameter_noinfo();
      v20 = *((_DWORD *)v5 + 1);
      v61 = v18;
      v21 = v63;
      std::string::operator=(v20 + v63 + 28, v61);
      LOBYTE(v70) = 4;
      std::string::~string(v68);
      v70 = -1;
      std::string::~string(v69);
      v22 = *((_DWORD *)v5 + 1);
      if ( !v22 || v9 >= (*((_DWORD *)v5 + 2) - v22) / 148 )
        _invalid_parameter_noinfo();
      std::string::operator=(*((_DWORD *)v5 + 1) + v21 + 56, &unk_1031402D);
      v23 = *((_DWORD *)v5 + 1);
      if ( !v23 || v9 >= (*((_DWORD *)v5 + 2) - v23) / 148 )
        _invalid_parameter_noinfo();
      sub_10019484(*(_DWORD *)(*((_DWORD *)v62 + 45) + 712), 0);
      v24 = *((_DWORD *)v5 + 1);
      if ( !v24 || v9 >= (*((_DWORD *)v5 + 2) - v24) / 148 )
        _invalid_parameter_noinfo();
      if ( sub_1000BF05() )
        sub_1001A5D2(0);
    }
    v64 += 7;
    v63 += 148;
    ++v9;
  }
  *((_BYTE *)v62 + 185) = 1;
}

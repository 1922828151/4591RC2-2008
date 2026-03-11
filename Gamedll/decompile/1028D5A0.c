/*
 * func-name: ?OnSystemPartChanged@CStatusUI@@QAEXXZ_0
 * func-address: 0x1028d5a0
 * callers: 0x1000f673
 * callees: 0x1000194c, 0x10004d09, 0x10005f8d, 0x10007d8d, 0x10008fb2, 0x1000a3a8, 0x1000a5a1, 0x1000aff6, 0x1000b5be, 0x1000c07c, 0x1000ed13, 0x10013430, 0x1001789b, 0x10017c88, 0x102c7190, 0x102c9d98, 0x102c9ea8
 */

void __thiscall CStatusUI::OnSystemPartChanged(CStatusUI *this)
{
  void *v2; // edi
  char *v3; // esi
  void *v4; // ebx
  unsigned int i; // esi
  int v6; // ecx
  char *v7; // edi
  void (__cdecl *v8)(); // ebx
  char *v9; // esi
  int v10; // eax
  char *v11; // ebx
  unsigned int j; // esi
  int v13; // ecx
  char *v14; // edi
  char *v15; // esi
  int v16; // eax
  char *v17; // ebx
  int v18; // eax
  GameClient::RobotManager *v19; // eax
  struct GameClient::Robot *Robot; // eax
  int v21; // edx
  int v22; // esi
  int v23; // ecx
  signed int v24; // edx
  int v25; // eax
  int v26; // edi
  CControlBox *v27; // eax
  CControlBox *v28; // esi
  void (__thiscall *v29)(CControlBox *, int, int); // edx
  CPictureLabel *v30; // eax
  float *v31; // edi
  void (__thiscall *v32)(float *, int, int); // edx
  float *v33; // edi
  void (__thiscall *v34)(float *, int, int); // eax
  GameClient::Robot *v35; // ecx
  int v36; // eax
  CPictureLabel *v37; // eax
  float *v38; // edi
  int v39; // eax
  unsigned int v40; // eax
  CProgressBar *v41; // eax
  float *v42; // edi
  void (__thiscall *v43)(float *, int, int); // eax
  int v44; // eax
  CPictureLabel *v45; // eax
  float *v46; // edi
  void (__thiscall *v47)(float *, int, int); // eax
  CPictureLabel *v48; // eax
  float *v49; // edi
  void (__thiscall *v50)(float *, int, int); // eax
  CPictureLabel *v51; // eax
  float *v52; // edi
  void (__thiscall *v53)(float *, int, int); // edx
  float *v54; // edi
  void (__thiscall *v55)(float *, int, int); // eax
  GameClient::Robot *v56; // ecx
  int v57; // eax
  CPictureLabel *v58; // eax
  float *v59; // edi
  int v60; // eax
  unsigned int v61; // eax
  CProgressBar *v62; // eax
  float *v63; // edi
  void (__thiscall *v64)(float *, int, int); // eax
  int v65; // eax
  CPictureLabel *v66; // eax
  float *v67; // edi
  void (__thiscall *v68)(float *, int, int); // eax
  CPictureLabel *v69; // eax
  float *v70; // edi
  void (__thiscall *v71)(float *, int, int); // eax
  unsigned int v72; // eax
  unsigned int v73; // edx
  CControlBox **v74; // eax
  void *v75; // esi
  int v76; // eax
  int v77; // eax
  unsigned int k; // esi
  unsigned int v79; // ecx
  const void *v80; // ebx
  void *v81; // esi
  int v82; // eax
  unsigned int m; // esi
  int v84; // ecx
  const void *v85; // ebx
  void *v86; // esi
  int v87; // eax
  const void *v88; // ebx
  void *v89; // esi
  int v90; // eax
  const void *v91; // esi
  void *v92; // ebx
  int v93; // eax
  int v94; // esi
  bool v95; // zf
  int v96; // ebx
  CPictureLabel *v97; // eax
  struct CREControl *v98; // esi
  void (__thiscall *v99)(struct CREControl *, int, int); // eax
  unsigned int v100; // eax
  unsigned int v101; // edx
  struct CREControl **v102; // eax
  void *v103; // esi
  CPictureLabel *v104; // eax
  struct CREControl *v105; // esi
  void (__thiscall *v106)(struct CREControl *, int, int); // eax
  unsigned int v107; // eax
  unsigned int v108; // edx
  struct CREControl **v109; // eax
  void *v110; // esi
  int v111; // ebx
  int v112; // eax
  int Flyweight; // eax
  int v114; // edi
  CPictureLabel *v115; // eax
  CPictureLabel *v116; // esi
  void (__thiscall *v117)(CPictureLabel *, int, int); // eax
  unsigned int v118; // eax
  unsigned int v119; // edx
  CPictureLabel **v120; // eax
  void *v121; // esi
  int SkillID; // eax
  unsigned int v123; // ecx
  unsigned int v124; // edi
  int *v125; // ecx
  void *v126; // edi
  int v127; // eax
  int v128; // eax
  int v129; // edi
  CPictureLabel *v130; // eax
  CPictureLabel *v131; // esi
  void (__thiscall *v132)(CPictureLabel *, int, int); // eax
  unsigned int v133; // eax
  unsigned int v134; // edx
  CPictureLabel **v135; // eax
  void *v136; // esi
  int v137; // eax
  unsigned int v138; // ecx
  unsigned int v139; // edi
  int *v140; // ecx
  void *v141; // edi
  GameClient::Robot *v142; // esi
  int v143; // eax
  int v144; // ebp
  int v145; // [esp+1F0h] [ebp-FCh] BYREF
  int v146; // [esp+1F4h] [ebp-F8h] BYREF
  int v147; // [esp+1F8h] [ebp-F4h]
  int v148; // [esp+1FCh] [ebp-F0h]
  int v149; // [esp+200h] [ebp-ECh]
  int v150; // [esp+204h] [ebp-E8h]
  int v151; // [esp+208h] [ebp-E4h]
  int p_rc; // [esp+20Ch] [ebp-E0h]
  int v153; // [esp+228h] [ebp-C4h] BYREF
  unsigned int v154; // [esp+22Ch] [ebp-C0h]
  int v155; // [esp+230h] [ebp-BCh] BYREF
  int v156; // [esp+238h] [ebp-B4h]
  GameClient::Robot *v157; // [esp+23Ch] [ebp-B0h]
  CPictureLabel *v158; // [esp+240h] [ebp-ACh]
  int v159; // [esp+244h] [ebp-A8h]
  int v160; // [esp+248h] [ebp-A4h]
  int v161[2]; // [esp+24Ch] [ebp-A0h] BYREF
  int v162; // [esp+254h] [ebp-98h] BYREF
  signed int v163; // [esp+258h] [ebp-94h]
  struct tagRECT v164; // [esp+25Ch] [ebp-90h] BYREF
  struct tagRECT v165; // [esp+26Ch] [ebp-80h] BYREF
  struct tagRECT v166; // [esp+27Ch] [ebp-70h] BYREF
  struct tagRECT v167; // [esp+28Ch] [ebp-60h] BYREF
  struct tagRECT v168; // [esp+29Ch] [ebp-50h] BYREF
  struct tagRECT rc; // [esp+2ACh] [ebp-40h] BYREF
  struct tagRECT v170; // [esp+2BCh] [ebp-30h] BYREF
  struct tagRECT v171; // [esp+2CCh] [ebp-20h] BYREF
  int v172; // [esp+2E8h] [ebp-4h]

  v2 = (void *)*((_DWORD *)this + 1002);
  v3 = (char *)this + 4000;
  if ( *((_DWORD *)this + 1001) > (unsigned int)v2 )
    _invalid_parameter_noinfo();
  v4 = (void *)*((_DWORD *)v3 + 1);
  if ( (unsigned int)v4 > *((_DWORD *)v3 + 2) )
    _invalid_parameter_noinfo();
  sub_10007D8D((int)&v155, (int)v3, v4, (int)v3, v2);
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 969);
    if ( !v6 || i >= (*((_DWORD *)this + 970) - v6) >> 2 )
      break;
    CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 969) + 4 * i));
  }
  v7 = (char *)*((_DWORD *)this + 970);
  v8 = _invalid_parameter_noinfo;
  if ( *((_DWORD *)this + 969) > (unsigned int)v7 )
    _invalid_parameter_noinfo();
  v9 = (char *)*((_DWORD *)this + 969);
  if ( (unsigned int)v9 > *((_DWORD *)this + 970) )
    _invalid_parameter_noinfo();
  if ( v9 != v7 )
  {
    v10 = (*((_DWORD *)this + 970) - (int)v7) >> 2;
    v11 = &v9[4 * v10];
    if ( v10 > 0 )
      memmove_s(v9, 4 * v10, v7, 4 * v10);
    *((_DWORD *)this + 970) = v11;
    v8 = _invalid_parameter_noinfo;
  }
  for ( j = 0; ; ++j )
  {
    v13 = *((_DWORD *)this + 973);
    if ( !v13 || j >= (*((_DWORD *)this + 974) - v13) >> 2 )
      break;
    CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 973) + 4 * j));
  }
  v14 = (char *)*((_DWORD *)this + 974);
  if ( *((_DWORD *)this + 973) > (unsigned int)v14 )
    v8();
  v15 = (char *)*((_DWORD *)this + 973);
  if ( (unsigned int)v15 > *((_DWORD *)this + 974) )
    v8();
  if ( v15 != v14 )
  {
    v16 = (*((_DWORD *)this + 974) - (int)v14) >> 2;
    v17 = &v15[4 * v16];
    if ( v16 > 0 )
      memmove_s(v15, 4 * v16, v14, 4 * v16);
    *((_DWORD *)this + 974) = v17;
  }
  v18 = sub_1000194C(0);
  if ( v18 )
  {
    p_rc = *(_DWORD *)(v18 + 292);
    v19 = GameClient::RobotManager::Instance();
    Robot = GameClient::RobotManager::GetRobot(v19, p_rc);
    v157 = Robot;
    if ( Robot )
    {
      v21 = *((_DWORD *)Robot + 51);
      v22 = *((_DWORD *)Robot + 52);
      v160 = *((_DWORD *)Robot + 50);
      v159 = v21;
      if ( v160 )
      {
        if ( v21 && v22 )
        {
          v23 = *((_DWORD *)this + 175);
          *((_DWORD *)this + 1004) = Robot;
          v24 = *((_DWORD *)Robot + 86);
          v25 = *((_DWORD *)Robot + 87);
          v26 = v25 + v24;
          v163 = v24;
          v153 = v25 + v24;
          v156 = v23 - 2 * (v25 + v24 + 54 * v24 + 21 * v25) - 155;
          SetRect(&rc, 8, 29, 116, 69);
          SetRect(&v168, 120, 29, 162, 69);
          SetRect(&v170, 0, 0, 106, 31);
          SetRect(&v165, 0, 33, 106, 64);
          SetRect(&v171, 0, 0, 40, 31);
          SetRect(&v166, 0, 33, 40, 64);
          v154 = 0;
          if ( v26 > 0 )
          {
            do
            {
              v27 = (CControlBox *)operator new(0x230u);
              v28 = v27;
              v162 = (int)v27;
              v172 = 0;
              if ( v27 )
              {
                CControlBox::CControlBox(v27, this);
                *(_DWORD *)v28 = &CControlBox::`vftable';
              }
              else
              {
                v28 = 0;
              }
              v29 = *(void (__thiscall **)(CControlBox *, int, int))(*(_DWORD *)v28 + 156);
              p_rc = *((_DWORD *)this + 176) - 40;
              v172 = -1;
              v162 = (int)v28;
              v151 = v156;
              if ( (int)v154 >= v163 )
              {
                v29(v28, v151, p_rc);
                (*(void (__thiscall **)(CControlBox *, int, int))(*(_DWORD *)v28 + 160))(v28, 42, 40);
                v51 = (CPictureLabel *)operator new(0x40Cu);
                v52 = (float *)v51;
                v155 = (int)v51;
                v172 = 7;
                if ( v51 )
                {
                  CPictureLabel::CPictureLabel(v51, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                  *(_DWORD *)v52 = &CPictureLabel::`vftable';
                }
                else
                {
                  v52 = 0;
                }
                v53 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v52 + 160);
                v172 = -1;
                v53(v52, 42, 40);
                p_rc = (int)&v168;
                v155 = (int)&v145;
                std::wstring::wstring(&v145, L"gui.dds");
                CPictureLabel::ChangeTexture(v52, v145, v146, v147, v148, v149, v150, v151, p_rc);
                CControlBox::AddControl(v28, (struct CREControl *)v52, 0, 0);
                p_rc = 1040;
                v52[132] = 0.5;
                v155 = (int)operator new(p_rc);
                v172 = 8;
                if ( v155 )
                  v54 = (float *)sub_1000C07C((int)this);
                else
                  v54 = 0;
                v55 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v54 + 160);
                v172 = -1;
                v55(v54, 12, 12);
                v158 = (CPictureLabel *)(v154 + 1);
                sub_10017C88(v154 + 1);
                CControlBox::AddControl(v28, (struct CREControl *)v54, 3, 2);
                v56 = v157;
                v54[132] = 0.5;
                v57 = *((_DWORD *)v56 + 63);
                if ( !v57 || v154 >= (*((_DWORD *)v56 + 64) - v57) >> 2 )
                  _invalid_parameter_noinfo();
                v154 = *(_DWORD *)(*((_DWORD *)v157 + 63) + 4 * v154);
                if ( v154 )
                {
                  v58 = (CPictureLabel *)operator new(0x40Cu);
                  v59 = (float *)v58;
                  v155 = (int)v58;
                  v172 = 9;
                  if ( v58 )
                  {
                    CPictureLabel::CPictureLabel(v58, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                    *(_DWORD *)v59 = &CPictureLabel::`vftable';
                  }
                  else
                  {
                    v59 = 0;
                  }
                  p_rc = (int)&v166;
                  v60 = *(_DWORD *)(v154 + 8) + 168;
                  v155 = (int)&v145;
                  v172 = -1;
                  sub_102C7190(&v145, v60);
                  CPictureLabel::ChangeTexture(v59, v145, v146, v147, v148, v149, v150, v151, p_rc);
                  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v59 + 160))(v59, 40, 31);
                  CControlBox::AddControl(v28, (struct CREControl *)v59, 1, 8);
                  v61 = v154;
                  v59[132] = 0.5;
                  if ( *(int *)(*(_DWORD *)(v61 + 8) + 320) > 0 )
                  {
                    v62 = (CProgressBar *)operator new(0x300u);
                    v63 = (float *)v62;
                    v155 = (int)v62;
                    v172 = 10;
                    if ( v62 )
                    {
                      CProgressBar::CProgressBar(v62, this);
                      *(_DWORD *)v63 = &CProgressBar::`vftable';
                    }
                    else
                    {
                      v63 = 0;
                    }
                    v64 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v63 + 160);
                    v63[177] = 1.0;
                    p_rc = 2;
                    v151 = 17;
                    v63[178] = 0.0;
                    v172 = -1;
                    *((_DWORD *)v63 + 188) = 4;
                    v63[190] = NAN;
                    *((_BYTE *)v63 + 748) = 1;
                    v64(v63, v151, p_rc);
                    CControlBox::AddControl(v28, (struct CREControl *)v63, 20, 5);
                    v63[132] = 0.5;
                  }
                  v65 = *(_DWORD *)(v154 + 8);
                  if ( !*(_DWORD *)(v65 + 316) && !*(_BYTE *)(v65 + 2404) )
                  {
                    v66 = (CPictureLabel *)operator new(0x40Cu);
                    v67 = (float *)v66;
                    v155 = (int)v66;
                    v172 = 11;
                    if ( v66 )
                    {
                      CPictureLabel::CPictureLabel(v66, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                      *(_DWORD *)v67 = &CPictureLabel::`vftable';
                    }
                    else
                    {
                      v67 = 0;
                    }
                    v68 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v67 + 160);
                    v172 = -1;
                    v68(v67, 32, 32);
                    p_rc = 0;
                    v155 = (int)&v145;
                    std::wstring::wstring(&v145, L"HUD_Icon_Pattern1.dds");
                    CPictureLabel::ChangeTexture(v67, v145, v146, v147, v148, v149, v150, v151, p_rc);
                    CControlBox::AddControl(v28, (struct CREControl *)v67, 0, 0);
                    p_rc = 1036;
                    v67[132] = 0.5;
                    v69 = (CPictureLabel *)operator new(p_rc);
                    v70 = (float *)v69;
                    v155 = (int)v69;
                    v172 = 12;
                    if ( v69 )
                    {
                      CPictureLabel::CPictureLabel(v69, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                      *(_DWORD *)v70 = &CPictureLabel::`vftable';
                    }
                    else
                    {
                      v70 = 0;
                    }
                    v71 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v70 + 160);
                    v172 = -1;
                    v71(v70, 32, 32);
                    p_rc = 0;
                    v155 = (int)&v145;
                    std::wstring::wstring(&v145, L"HUD_Icon_Pattern2.dds");
                    CPictureLabel::ChangeTexture(v70, v145, v146, v147, v148, v149, v150, v151, p_rc);
                    CControlBox::AddControl(v28, (struct CREControl *)v70, 0, 0);
                    v70[132] = 0.5;
                  }
                }
                v156 += 44;
              }
              else
              {
                v29(v28, v151, p_rc);
                (*(void (__thiscall **)(CControlBox *, int, int))(*(_DWORD *)v28 + 160))(v28, 108, 40);
                v30 = (CPictureLabel *)operator new(0x40Cu);
                v31 = (float *)v30;
                v158 = v30;
                v172 = 1;
                if ( v30 )
                {
                  CPictureLabel::CPictureLabel(v30, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                  *(_DWORD *)v31 = &CPictureLabel::`vftable';
                }
                else
                {
                  v31 = 0;
                }
                v32 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v31 + 160);
                v172 = -1;
                v32(v31, 108, 40);
                p_rc = (int)&rc;
                v158 = (CPictureLabel *)&v145;
                std::wstring::wstring(&v145, L"gui.dds");
                CPictureLabel::ChangeTexture(v31, v145, v146, v147, v148, v149, v150, v151, p_rc);
                CControlBox::AddControl(v28, (struct CREControl *)v31, 0, 0);
                p_rc = 1040;
                v31[132] = 0.5;
                v158 = (CPictureLabel *)operator new(p_rc);
                v172 = 2;
                if ( v158 )
                  v33 = (float *)sub_1000C07C((int)this);
                else
                  v33 = 0;
                v34 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v33 + 160);
                v172 = -1;
                v34(v33, 12, 12);
                v158 = (CPictureLabel *)(v154 + 1);
                sub_10017C88(v154 + 1);
                CControlBox::AddControl(v28, (struct CREControl *)v33, 3, 2);
                v35 = v157;
                v33[132] = 0.5;
                v36 = *((_DWORD *)v35 + 63);
                if ( !v36 || v154 >= (*((_DWORD *)v35 + 64) - v36) >> 2 )
                  _invalid_parameter_noinfo();
                v154 = *(_DWORD *)(*((_DWORD *)v157 + 63) + 4 * v154);
                if ( v154 )
                {
                  v37 = (CPictureLabel *)operator new(0x40Cu);
                  v38 = (float *)v37;
                  v155 = (int)v37;
                  v172 = 3;
                  if ( v37 )
                  {
                    CPictureLabel::CPictureLabel(v37, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                    *(_DWORD *)v38 = &CPictureLabel::`vftable';
                  }
                  else
                  {
                    v38 = 0;
                  }
                  p_rc = (int)&v165;
                  v39 = *(_DWORD *)(v154 + 8) + 168;
                  v155 = (int)&v145;
                  v172 = -1;
                  sub_102C7190(&v145, v39);
                  CPictureLabel::ChangeTexture(v38, v145, v146, v147, v148, v149, v150, v151, p_rc);
                  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)v38 + 160))(v38, 106, 31);
                  CControlBox::AddControl(v28, (struct CREControl *)v38, 1, 8);
                  v40 = v154;
                  v38[132] = 0.5;
                  if ( *(int *)(*(_DWORD *)(v40 + 8) + 320) > 0 )
                  {
                    v41 = (CProgressBar *)operator new(0x300u);
                    v42 = (float *)v41;
                    v155 = (int)v41;
                    v172 = 4;
                    if ( v41 )
                    {
                      CProgressBar::CProgressBar(v41, this);
                      *(_DWORD *)v42 = &CProgressBar::`vftable';
                    }
                    else
                    {
                      v42 = 0;
                    }
                    v43 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v42 + 160);
                    v42[177] = 1.0;
                    p_rc = 2;
                    v151 = 83;
                    v42[178] = 0.0;
                    v172 = -1;
                    *((_DWORD *)v42 + 188) = 4;
                    v42[190] = NAN;
                    *((_BYTE *)v42 + 748) = 1;
                    v43(v42, v151, p_rc);
                    CControlBox::AddControl(v28, (struct CREControl *)v42, 20, 5);
                    v42[132] = 0.5;
                  }
                  v44 = *(_DWORD *)(v154 + 8);
                  if ( !*(_DWORD *)(v44 + 316) && !*(_BYTE *)(v44 + 2404) )
                  {
                    v45 = (CPictureLabel *)operator new(0x40Cu);
                    v46 = (float *)v45;
                    v155 = (int)v45;
                    v172 = 5;
                    if ( v45 )
                    {
                      CPictureLabel::CPictureLabel(v45, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                      *(_DWORD *)v46 = &CPictureLabel::`vftable';
                    }
                    else
                    {
                      v46 = 0;
                    }
                    v47 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v46 + 160);
                    v172 = -1;
                    v47(v46, 32, 32);
                    p_rc = 0;
                    v155 = (int)&v145;
                    std::wstring::wstring(&v145, L"HUD_Icon_Pattern1.dds");
                    CPictureLabel::ChangeTexture(v46, v145, v146, v147, v148, v149, v150, v151, p_rc);
                    CControlBox::AddControl(v28, (struct CREControl *)v46, 0, 0);
                    p_rc = 1036;
                    v46[132] = 0.5;
                    v48 = (CPictureLabel *)operator new(p_rc);
                    v49 = (float *)v48;
                    v155 = (int)v48;
                    v172 = 6;
                    if ( v48 )
                    {
                      CPictureLabel::CPictureLabel(v48, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                      *(_DWORD *)v49 = &CPictureLabel::`vftable';
                    }
                    else
                    {
                      v49 = 0;
                    }
                    v50 = *(void (__thiscall **)(float *, int, int))(*(_DWORD *)v49 + 160);
                    v172 = -1;
                    v50(v49, 32, 32);
                    p_rc = 0;
                    v155 = (int)&v145;
                    std::wstring::wstring(&v145, L"HUD_Icon_Pattern2.dds");
                    CPictureLabel::ChangeTexture(v49, v145, v146, v147, v148, v149, v150, v151, p_rc);
                    CControlBox::AddControl(v28, (struct CREControl *)v49, 0, 0);
                    v49[132] = 0.5;
                  }
                }
                v156 += 110;
              }
              CControlBox::InitAllControl(v28, this);
              CREDialog::AddControl(this, v28);
              v72 = *((_DWORD *)this + 969);
              if ( v72 )
                v73 = (int)(*((_DWORD *)this + 970) - v72) >> 2;
              else
                v73 = 0;
              if ( v72 && v73 < (int)(*((_DWORD *)this + 971) - v72) >> 2 )
              {
                v74 = (CControlBox **)*((_DWORD *)this + 970);
                *v74 = v28;
                *((_DWORD *)this + 970) = v74 + 1;
              }
              else
              {
                v75 = (void *)*((_DWORD *)this + 970);
                if ( v72 > (unsigned int)v75 )
                  _invalid_parameter_noinfo();
                sub_1000B5BE((int)v161, (int)this + 3872, v75, (int)&v162);
              }
              v154 = (unsigned int)v158;
            }
            while ( (int)v158 < v153 );
          }
          v76 = *(_DWORD *)(v160 + 8);
          p_rc = (int)&unk_103B42AC;
          v155 = (int)&v145;
          sub_102C7190(&v145, v76 + 168);
          CPictureLabel::ChangeTexture(*((_DWORD *)this + 1009), v145, v146, v147, v148, v149, v150, v151, p_rc);
          v77 = *(_DWORD *)(v159 + 8);
          p_rc = (int)&unk_103B4298;
          v155 = (int)&v145;
          sub_102C7190(&v145, v77 + 168);
          CPictureLabel::ChangeTexture(*((_DWORD *)this + 1010), v145, v146, v147, v148, v149, v150, v151, p_rc);
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1010) + 136))(*((_DWORD *)this + 1010), 1);
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1009) + 136))(*((_DWORD *)this + 1009), 1);
          for ( k = 0; ; ++k )
          {
            v79 = *((_DWORD *)this + 977);
            if ( !v79 || k >= (int)(*((_DWORD *)this + 978) - v79) >> 2 )
              break;
            CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 977) + 4 * k));
          }
          v80 = (const void *)*((_DWORD *)this + 978);
          if ( v79 > (unsigned int)v80 )
            _invalid_parameter_noinfo();
          v81 = (void *)*((_DWORD *)this + 977);
          if ( (unsigned int)v81 > *((_DWORD *)this + 978) )
            _invalid_parameter_noinfo();
          if ( v81 != v80 )
          {
            v82 = (*((_DWORD *)this + 978) - (int)v80) >> 2;
            v153 = (int)v81 + 4 * v82;
            if ( v82 > 0 )
              memmove_s(v81, 4 * v82, v80, 4 * v82);
            *((float *)this + 978) = *(float *)&v153;
          }
          for ( m = 0; ; ++m )
          {
            v84 = *((_DWORD *)this + 981);
            if ( !v84 || m >= (*((_DWORD *)this + 982) - v84) >> 2 )
              break;
            CREDialog::RemoveControl(this, *(struct CREControl **)(*((_DWORD *)this + 981) + 4 * m));
          }
          v85 = (const void *)*((_DWORD *)this + 982);
          if ( *((_DWORD *)this + 981) > (unsigned int)v85 )
            _invalid_parameter_noinfo();
          v86 = (void *)*((_DWORD *)this + 981);
          if ( (unsigned int)v86 > *((_DWORD *)this + 982) )
            _invalid_parameter_noinfo();
          if ( v86 != v85 )
          {
            v87 = (*((_DWORD *)this + 982) - (int)v85) >> 2;
            v153 = (int)v86 + 4 * v87;
            if ( v87 > 0 )
              memmove_s(v86, 4 * v87, v85, 4 * v87);
            *((float *)this + 982) = *(float *)&v153;
          }
          v88 = (const void *)*((_DWORD *)this + 978);
          if ( *((_DWORD *)this + 977) > (unsigned int)v88 )
            _invalid_parameter_noinfo();
          v89 = (void *)*((_DWORD *)this + 977);
          if ( (unsigned int)v89 > *((_DWORD *)this + 978) )
            _invalid_parameter_noinfo();
          if ( v89 != v88 )
          {
            v90 = (*((_DWORD *)this + 978) - (int)v88) >> 2;
            v153 = (int)v89 + 4 * v90;
            if ( v90 > 0 )
              memmove_s(v89, 4 * v90, v88, 4 * v90);
            *((float *)this + 978) = *(float *)&v153;
          }
          v91 = (const void *)*((_DWORD *)this + 986);
          if ( *((_DWORD *)this + 985) > (unsigned int)v91 )
            _invalid_parameter_noinfo();
          v92 = (void *)*((_DWORD *)this + 985);
          if ( (unsigned int)v92 > *((_DWORD *)this + 986) )
            _invalid_parameter_noinfo();
          if ( v92 != v91 )
          {
            v93 = (*((_DWORD *)this + 986) - (int)v91) >> 2;
            v153 = (int)v92 + 4 * v93;
            if ( v93 > 0 )
              memmove_s(v92, 4 * v93, v91, 4 * v93);
            *((float *)this + 986) = *(float *)&v153;
          }
          v94 = 0;
          v95 = *(_DWORD *)(*(_DWORD *)(v160 + 8) + 296) == 0;
          v156 = 0;
          if ( !v95 )
          {
            v94 = 1;
            v156 = 1;
          }
          if ( *(_DWORD *)(*(_DWORD *)(v159 + 8) + 296) )
            v156 = ++v94;
          v96 = *((_DWORD *)this + 175);
          SetRect(&v164, 19, 464, 44, 466);
          if ( v94 - 1 > 0 )
          {
            v158 = (CPictureLabel *)(v94 - 1);
            do
            {
              v97 = (CPictureLabel *)operator new(0x40Cu);
              v98 = v97;
              v155 = (int)v97;
              v172 = 13;
              if ( v97 )
              {
                CPictureLabel::CPictureLabel(v97, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                *(_DWORD *)v98 = &CPictureLabel::`vftable';
              }
              else
              {
                v98 = 0;
              }
              v99 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v98 + 160);
              v172 = -1;
              v153 = (int)v98;
              v99(v98, 25, 2);
              v96 -= 25;
              (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v98 + 156))(v98, v96, -2);
              p_rc = (int)&v164;
              v155 = (int)&v145;
              std::wstring::wstring(&v145, L"gui.dds");
              CPictureLabel::ChangeTexture(v98, v145, v146, v147, v148, v149, v150, v151, p_rc);
              CREDialog::AddControl(this, v98);
              v100 = *((_DWORD *)this + 977);
              if ( v100 )
                v101 = (int)(*((_DWORD *)this + 978) - v100) >> 2;
              else
                v101 = 0;
              if ( v100 && v101 < (int)(*((_DWORD *)this + 979) - v100) >> 2 )
              {
                v102 = (struct CREControl **)*((_DWORD *)this + 978);
                *v102 = v98;
                *((_DWORD *)this + 978) = v102 + 1;
              }
              else
              {
                v103 = (void *)*((_DWORD *)this + 978);
                if ( v100 > (unsigned int)v103 )
                  _invalid_parameter_noinfo();
                sub_10013430((int)v161, (int)this + 3904, v103, (int)&v153);
              }
              v158 = (CPictureLabel *)((char *)v158 - 1);
            }
            while ( v158 );
            v94 = v156;
          }
          if ( v94 > 0 )
          {
            SetRect(&v164, 11, 439, 48, 454);
            v104 = (CPictureLabel *)operator new(0x40Cu);
            v105 = v104;
            v155 = (int)v104;
            v172 = 14;
            if ( v104 )
            {
              CPictureLabel::CPictureLabel(v104, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
              *(_DWORD *)v105 = &CPictureLabel::`vftable';
            }
            else
            {
              v105 = 0;
            }
            v106 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v105 + 160);
            v172 = -1;
            v153 = (int)v105;
            v106(v105, 37, 15);
            (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v105 + 156))(v105, v96 - 37, -4);
            p_rc = (int)&v164;
            v155 = (int)&v145;
            std::wstring::wstring(&v145, L"gui.dds");
            CPictureLabel::ChangeTexture(v105, v145, v146, v147, v148, v149, v150, v151, p_rc);
            CREDialog::AddControl(this, v105);
            v107 = *((_DWORD *)this + 977);
            if ( v107 )
              v108 = (int)(*((_DWORD *)this + 978) - v107) >> 2;
            else
              v108 = 0;
            if ( v107 && v108 < (int)(*((_DWORD *)this + 979) - v107) >> 2 )
            {
              v109 = (struct CREControl **)*((_DWORD *)this + 978);
              *v109 = v105;
              *((_DWORD *)this + 978) = v109 + 1;
            }
            else
            {
              v110 = (void *)*((_DWORD *)this + 978);
              if ( v107 > (unsigned int)v110 )
                _invalid_parameter_noinfo();
              sub_10013430((int)v161, (int)this + 3904, v110, (int)&v153);
            }
          }
          v111 = *((_DWORD *)this + 175) - 1;
          v112 = *(_DWORD *)(v160 + 8);
          if ( *(_DWORD *)(v112 + 296) )
          {
            v155 = (int)&v146;
            std::string::string(&v146, (void *)(v112 + 276));
            v172 = 15;
            GameClient::FlyweightManager::Instance();
            v172 = -1;
            Flyweight = GameClient::FlyweightManager::GetFlyweight(v146, v147, v148, v149, v150, v151, p_rc);
            if ( Flyweight )
            {
              p_rc = 0;
              v114 = _RTDynamicCast(
                       Flyweight,
                       0,
                       &GameClient::Flyweight `RTTI Type Descriptor',
                       &GameClient::FSkill `RTTI Type Descriptor');
              if ( v114 )
              {
                v115 = (CPictureLabel *)operator new(0x40Cu);
                v116 = v115;
                v155 = (int)v115;
                v172 = 16;
                if ( v115 )
                {
                  CPictureLabel::CPictureLabel(v115, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                  *(_DWORD *)v116 = &CPictureLabel::`vftable';
                }
                else
                {
                  v116 = 0;
                }
                v117 = *(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v116 + 160);
                v172 = -1;
                v153 = (int)v116;
                v117(v116, 23, 23);
                (*(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v116 + 156))(v116, v111 - 23, 2);
                SetRect(&v167, 0, 0, 23, 23);
                p_rc = (int)&v167;
                v155 = (int)&v145;
                sub_102C7190(&v145, v114 + 672);
                CPictureLabel::ChangeTexture(v116, v145, v146, v147, v148, v149, v150, v151, p_rc);
                p_rc = (int)v116;
                *((_DWORD *)v116 + 141) = -2130706433;
                CREDialog::AddControl(this, (struct CREControl *)p_rc);
                v118 = *((_DWORD *)this + 981);
                if ( v118 )
                  v119 = (int)(*((_DWORD *)this + 982) - v118) >> 2;
                else
                  v119 = 0;
                if ( v118 && v119 < (int)(*((_DWORD *)this + 983) - v118) >> 2 )
                {
                  v120 = (CPictureLabel **)*((_DWORD *)this + 982);
                  *v120 = v116;
                  *((_DWORD *)this + 982) = v120 + 1;
                }
                else
                {
                  v121 = (void *)*((_DWORD *)this + 982);
                  if ( v118 > (unsigned int)v121 )
                    _invalid_parameter_noinfo();
                  sub_10013430((int)v161, (int)this + 3920, v121, (int)&v153);
                }
                SkillID = GameClient::Robot::GetSkillID(v157, 0);
                v123 = *((_DWORD *)this + 985);
                v153 = SkillID;
                if ( v123 )
                  v124 = (int)(*((_DWORD *)this + 986) - v123) >> 2;
                else
                  v124 = 0;
                if ( v123 && v124 < (int)(*((_DWORD *)this + 987) - v123) >> 2 )
                {
                  v125 = (int *)*((_DWORD *)this + 986);
                  *v125 = SkillID;
                  *((_DWORD *)this + 986) = v125 + 1;
                }
                else
                {
                  v126 = (void *)*((_DWORD *)this + 986);
                  if ( v123 > (unsigned int)v126 )
                    _invalid_parameter_noinfo();
                  sub_1000A5A1((int)v161, (int)this + 3936, v126, (int)&v153);
                }
                v111 -= 25;
              }
            }
          }
          v127 = *(_DWORD *)(v159 + 8);
          if ( *(_DWORD *)(v127 + 296) )
          {
            v155 = (int)&v146;
            std::string::string(&v146, (void *)(v127 + 276));
            v172 = 17;
            GameClient::FlyweightManager::Instance();
            v172 = -1;
            v128 = GameClient::FlyweightManager::GetFlyweight(v146, v147, v148, v149, v150, v151, p_rc);
            if ( v128 )
            {
              p_rc = 0;
              v129 = _RTDynamicCast(
                       v128,
                       0,
                       &GameClient::Flyweight `RTTI Type Descriptor',
                       &GameClient::FSkill `RTTI Type Descriptor');
              if ( v129 )
              {
                v130 = (CPictureLabel *)operator new(0x40Cu);
                v131 = v130;
                v155 = (int)v130;
                v172 = 18;
                if ( v130 )
                {
                  CPictureLabel::CPictureLabel(v130, this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
                  *(_DWORD *)v131 = &CPictureLabel::`vftable';
                }
                else
                {
                  v131 = 0;
                }
                v132 = *(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v131 + 160);
                v172 = -1;
                v153 = (int)v131;
                v132(v131, 23, 23);
                (*(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v131 + 156))(v131, v111 - 23, 2);
                SetRect(&v164, 0, 0, 23, 23);
                p_rc = (int)&v164;
                v155 = (int)&v145;
                sub_102C7190(&v145, v129 + 672);
                CPictureLabel::ChangeTexture(v131, v145, v146, v147, v148, v149, v150, v151, p_rc);
                p_rc = (int)v131;
                *((_DWORD *)v131 + 141) = -2130706433;
                CREDialog::AddControl(this, (struct CREControl *)p_rc);
                v133 = *((_DWORD *)this + 981);
                if ( v133 )
                  v134 = (int)(*((_DWORD *)this + 982) - v133) >> 2;
                else
                  v134 = 0;
                if ( v133 && v134 < (int)(*((_DWORD *)this + 983) - v133) >> 2 )
                {
                  v135 = (CPictureLabel **)*((_DWORD *)this + 982);
                  *v135 = v131;
                  *((_DWORD *)this + 982) = v135 + 1;
                }
                else
                {
                  v136 = (void *)*((_DWORD *)this + 982);
                  if ( v133 > (unsigned int)v136 )
                    _invalid_parameter_noinfo();
                  sub_10013430((int)v161, (int)this + 3920, v136, (int)&v153);
                }
                v137 = GameClient::Robot::GetSkillID(v157, 1);
                v138 = *((_DWORD *)this + 985);
                v153 = v137;
                if ( v138 )
                  v139 = (int)(*((_DWORD *)this + 986) - v138) >> 2;
                else
                  v139 = 0;
                if ( v138 && v139 < (int)(*((_DWORD *)this + 987) - v138) >> 2 )
                {
                  v140 = (int *)*((_DWORD *)this + 986);
                  *v140 = v137;
                  *((_DWORD *)this + 986) = v140 + 1;
                }
                else
                {
                  v141 = (void *)*((_DWORD *)this + 986);
                  if ( v138 > (unsigned int)v141 )
                    _invalid_parameter_noinfo();
                  sub_1000A5A1((int)v161, (int)this + 3936, v141, (int)&v153);
                }
              }
            }
          }
          v142 = v157;
          *(float *)&v153 = GameClient::Robot::GetMaxEnergy(v157);
          v143 = *((_DWORD *)this + 1011);
          *(float *)(v143 + 708) = *(float *)&v153;
          *(float *)(v143 + 712) = 0.0;
          *(float *)&v153 = GameClient::Robot::GetMaxExEnergy(v142);
          v144 = *((_DWORD *)this + 1012);
          *(float *)(v144 + 708) = *(float *)&v153;
          *(float *)(v144 + 712) = 0.0;
        }
      }
    }
  }
}

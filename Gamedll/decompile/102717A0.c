/*
 * func-name: ?OnMemberUpdated@CGroupMemberUI@@QAEXK@Z_0
 * func-address: 0x102717a0
 * callers: 0x10013e85
 * callees: 0x1000194c, 0x10004665, 0x10008a5d, 0x10008db9, 0x1000a3a8, 0x1000bb95, 0x1000c07c, 0x1000ed13, 0x10011a4f, 0x10014637, 0x1001687e, 0x10017c29, 0x10017c88, 0x1001a564, 0x102c8d6c, 0x102c9d50, 0x102c9d62, 0x102c9d98
 */

void __thiscall CGroupMemberUI::OnMemberUpdated(CGroupMemberUI *this, unsigned int a2)
{
  CGroupMemberUI *v2; // ebp
  int v3; // eax
  int v4; // eax
  GameClient::GroupManager *v5; // eax
  const struct GameClient::Group *Group; // eax
  const struct GameClient::Group *v7; // esi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // edi
  unsigned int v11; // eax
  char *v12; // ebp
  bool v13; // cc
  unsigned int v14; // ebp
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  int *v19; // eax
  unsigned int j; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edi
  int v26; // ecx
  int v27; // eax
  int v28; // edi
  int v29; // ecx
  int v30; // ebp
  int v31; // eax
  int v32; // eax
  const char *v33; // eax
  const wchar_t *v34; // eax
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  GameClient::RobotManager *v40; // eax
  struct GameClient::Robot *Robot; // eax
  int v42; // ecx
  struct GameClient::Robot *v43; // ebp
  int v44; // eax
  double v45; // st7
  unsigned int v46; // ebx
  int v47; // eax
  int v48; // eax
  double v49; // st7
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // edx
  int v56; // eax
  CPictureLabel *v57; // eax
  struct CREControl *v58; // edi
  struct CREControl *v59; // ecx
  int v60; // ebx
  void (__thiscall *v61)(struct CREControl *, _DWORD, int); // edx
  char *v62; // ebp
  int v63; // ebp
  char *v64; // edx
  void *v65; // ebp
  CREStatic *v66; // edi
  struct CREControl *v67; // ecx
  int v68; // edx
  void (__thiscall *v69)(struct CREControl *, int, int); // eax
  int v70; // eax
  const char *v71; // eax
  const wchar_t *v72; // eax
  char *v73; // edi
  int v74; // ebp
  char *v75; // edx
  void *v76; // ebp
  CProgressBar *v77; // eax
  struct CREControl *v78; // edi
  struct CREControl *v79; // ecx
  void (__thiscall *v80)(struct CREControl *, int, int); // eax
  int v81; // eax
  GameClient::RobotManager *v82; // eax
  struct GameClient::Robot *v83; // eax
  struct GameClient::Robot *v84; // edi
  int v85; // eax
  int v86; // ebx
  double v87; // st7
  unsigned int v88; // ebp
  int v89; // eax
  int v90; // eax
  double v91; // st7
  int v92; // eax
  struct CREControl *v93; // eax
  char *v94; // edi
  int v95; // ebp
  char *v96; // edx
  void *v97; // ebp
  struct CREControl *v98; // eax
  int v99; // edx
  struct CREControl *v100; // ecx
  void (__thiscall *v101)(struct CREControl *, int, int); // eax
  char *v102; // edi
  int v103; // ebp
  char *v104; // edx
  void *v105; // ebp
  CPictureLabel *v106; // edi
  struct CREControl *v107; // ecx
  void (__thiscall *v108)(struct CREControl *, int, int); // eax
  int v109; // eax
  unsigned int v110; // edi
  void (__cdecl *v111)(); // ebp
  int v112; // ecx
  int v113; // ebx
  int v114; // edx
  int v115; // eax
  char *v116; // edi
  int v117; // ebx
  char *v118; // edx
  void *v119; // ebx
  unsigned int v120; // ebx
  int v121; // edi
  int v122; // eax
  void (__cdecl *v123)(); // esi
  int v124; // eax
  struct CREControl **v125; // esi
  unsigned int v126; // ebx
  int v127; // eax
  int v128; // eax
  struct CREControl **v129; // esi
  unsigned int v130; // ebp
  unsigned int v131; // ebx
  CDlgMgr *v132; // eax
  int v133; // [esp+A8h] [ebp-1D0h] BYREF
  int v134; // [esp+ACh] [ebp-1CCh]
  int v135; // [esp+B0h] [ebp-1C8h]
  int v136; // [esp+B4h] [ebp-1C4h]
  int v137; // [esp+B8h] [ebp-1C0h]
  int v138; // [esp+BCh] [ebp-1BCh]
  int v139; // [esp+C0h] [ebp-1B8h]
  struct tagRECT *v140; // [esp+C4h] [ebp-1B4h]
  int v141; // [esp+DCh] [ebp-19Ch] BYREF
  struct CTYDialog *v142; // [esp+E0h] [ebp-198h]
  unsigned int i; // [esp+E4h] [ebp-194h]
  int v144[2]; // [esp+E8h] [ebp-190h] BYREF
  int k; // [esp+F0h] [ebp-188h]
  unsigned int v146; // [esp+F4h] [ebp-184h]
  _DWORD v147[4]; // [esp+F8h] [ebp-180h] BYREF
  int v148; // [esp+108h] [ebp-170h]
  struct CREControl *v149; // [esp+10Ch] [ebp-16Ch]
  struct CREControl *v150; // [esp+110h] [ebp-168h]
  struct CREControl *v151; // [esp+114h] [ebp-164h]
  struct CREControl *v152; // [esp+118h] [ebp-160h]
  struct CREControl *v153; // [esp+11Ch] [ebp-15Ch]
  int v154; // [esp+120h] [ebp-158h] BYREF
  void *v155; // [esp+124h] [ebp-154h]
  void *Source; // [esp+128h] [ebp-150h]
  int v157; // [esp+12Ch] [ebp-14Ch]
  int v158; // [esp+130h] [ebp-148h] BYREF
  void *v159; // [esp+134h] [ebp-144h]
  void *v160; // [esp+138h] [ebp-140h]
  int v161; // [esp+13Ch] [ebp-13Ch]
  float v162; // [esp+140h] [ebp-138h]
  int v163; // [esp+144h] [ebp-134h]
  float v164[2]; // [esp+148h] [ebp-130h] BYREF
  int v165[2]; // [esp+150h] [ebp-128h] BYREF
  int v166; // [esp+158h] [ebp-120h] BYREF
  int v167; // [esp+160h] [ebp-118h] BYREF
  int v168; // [esp+168h] [ebp-110h] BYREF
  int v169; // [esp+170h] [ebp-108h] BYREF
  int v170; // [esp+178h] [ebp-100h] BYREF
  int v171; // [esp+180h] [ebp-F8h] BYREF
  int v172; // [esp+188h] [ebp-F0h] BYREF
  int v173; // [esp+190h] [ebp-E8h] BYREF
  int v174; // [esp+198h] [ebp-E0h] BYREF
  wchar_t Buffer[100]; // [esp+1A0h] [ebp-D8h] BYREF
  int v176; // [esp+274h] [ebp-4h]

  v2 = this;
  v142 = this;
  v3 = sub_1000194C(0);
  if ( !v3 )
    return;
  v4 = *(_DWORD *)(v3 + 216);
  if ( !v4 )
  {
    v126 = 0;
    v121 = (int)v2 + 3872;
    for ( v144[0] = 0; ; v144[0] += 80 )
    {
      v127 = *((_DWORD *)v2 + 969);
      v123 = _invalid_parameter_noinfo;
      if ( !v127 || v126 >= (*((_DWORD *)v2 + 970) - v127) / 80 )
        break;
      v128 = *((_DWORD *)v2 + 969);
      if ( !v128 || v126 >= (*((_DWORD *)v2 + 970) - v128) / 80 )
        _invalid_parameter_noinfo();
      v129 = (struct CREControl **)(v144[0] + *((_DWORD *)v2 + 969));
      CREDialog::RemoveControl(v142, v129[8]);
      CREDialog::RemoveControl(v142, v129[5]);
      CREDialog::RemoveControl(v142, v129[9]);
      CREDialog::RemoveControl(v142, v129[7]);
      CREDialog::RemoveControl(v142, v129[6]);
      ++v126;
    }
    goto LABEL_240;
  }
  if ( a2 != v4 )
    return;
  v5 = GameClient::GroupManager::Instance();
  Group = GameClient::GroupManager::GetGroup(v5, a2);
  v7 = Group;
  if ( !Group )
  {
    v120 = 0;
    v121 = (int)v2 + 3872;
    for ( v144[0] = 0; ; v144[0] += 80 )
    {
      v122 = *((_DWORD *)v2 + 969);
      v123 = _invalid_parameter_noinfo;
      if ( !v122 || v120 >= (*((_DWORD *)v2 + 970) - v122) / 80 )
        break;
      v124 = *((_DWORD *)v2 + 969);
      if ( !v124 || v120 >= (*((_DWORD *)v2 + 970) - v124) / 80 )
        _invalid_parameter_noinfo();
      v125 = (struct CREControl **)(v144[0] + *((_DWORD *)v2 + 969));
      CREDialog::RemoveControl(v142, v125[8]);
      CREDialog::RemoveControl(v142, v125[5]);
      CREDialog::RemoveControl(v142, v125[9]);
      CREDialog::RemoveControl(v142, v125[7]);
      CREDialog::RemoveControl(v142, v125[6]);
      ++v120;
    }
LABEL_240:
    v130 = *(_DWORD *)(v121 + 8);
    if ( *(_DWORD *)(v121 + 4) > v130 )
      v123();
    v131 = *(_DWORD *)(v121 + 4);
    if ( v131 > *(_DWORD *)(v121 + 8) )
      v123();
    sub_10008A5D((int)v165, v121, v131, v121, v130);
    v132 = (CDlgMgr *)CDlgMgr::Instance();
    CDlgMgr::ShowDialog(v132);
    return;
  }
  v8 = *(_DWORD *)Group;
  v140 = (struct tagRECT *)&unk_10321ED8;
  sub_10011A4F(Buffer, (size_t)L"%d%s", v8);
  CREStatic::SetText(*((CREStatic **)v2 + 972), Buffer);
  sub_1001687E((int)v144);
  v9 = v144[1];
  v10 = v144[0];
  while ( 1 )
  {
    v11 = *((_DWORD *)v2 + 970);
    v12 = (char *)v2 + 3872;
    v13 = *((_DWORD *)v12 + 1) <= v11;
    v141 = v11;
    if ( !v13 )
      _invalid_parameter_noinfo();
    if ( !v10 || (char *)v10 != v12 )
      _invalid_parameter_noinfo();
    if ( v9 == v141 )
      break;
    v14 = 0;
    for ( i = 0; ; i += 84 )
    {
      v15 = *((_DWORD *)v7 + 4);
      if ( !v15 || v14 >= (*((_DWORD *)v7 + 5) - v15) / 84 )
        break;
      v16 = *((_DWORD *)v7 + 4);
      if ( !v16 || v14 >= (*((_DWORD *)v7 + 5) - v16) / 84 )
        _invalid_parameter_noinfo();
      v17 = i + *((_DWORD *)v7 + 4);
      if ( !v144[0] )
        _invalid_parameter_noinfo();
      if ( v9 >= *(_DWORD *)(v144[0] + 8) )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(v17 + 32) == *(_DWORD *)(v9 + 16) )
        break;
      ++v14;
    }
    v18 = *((_DWORD *)v7 + 4);
    if ( v18 )
      v18 = (*((_DWORD *)v7 + 5) - v18) / 84;
    v10 = v144[0];
    if ( v14 == v18 )
    {
      if ( !v144[0] )
        _invalid_parameter_noinfo();
      if ( v9 >= *(_DWORD *)(v10 + 8) )
        _invalid_parameter_noinfo();
      v2 = v142;
      CREDialog::RemoveControl(v142, *(struct CREControl **)(v9 + 32));
      CREDialog::RemoveControl(v142, *(struct CREControl **)(v9 + 28));
      CREDialog::RemoveControl(v142, *(struct CREControl **)(v9 + 20));
      CREDialog::RemoveControl(v142, *(struct CREControl **)(v9 + 36));
      CREDialog::RemoveControl(v142, *(struct CREControl **)(v9 + 24));
      v19 = (int *)sub_10008DB9((int)v164, v144[0], v9);
      v10 = *v19;
      v9 = v19[1];
      v144[0] = *v19;
    }
    else
    {
      if ( !v144[0] )
        _invalid_parameter_noinfo();
      if ( v9 >= *(_DWORD *)(v10 + 8) )
        _invalid_parameter_noinfo();
      v2 = v142;
      v9 += 80;
    }
  }
  for ( j = 0; ; ++j )
  {
    v21 = *((_DWORD *)v7 + 4);
    v146 = j;
    if ( !v21 || j >= (*((_DWORD *)v7 + 5) - v21) / 84 )
      break;
    i = 0;
    for ( k = 0; ; k += 80 )
    {
      v22 = *((_DWORD *)v12 + 1);
      if ( !v22 || i >= (*((_DWORD *)v12 + 2) - v22) / 80 )
        break;
      v23 = *((_DWORD *)v7 + 4);
      if ( !v23 || j >= (*((_DWORD *)v7 + 5) - v23) / 84 )
        _invalid_parameter_noinfo();
      v24 = *((_DWORD *)v12 + 1);
      v25 = *((_DWORD *)v7 + 4) + 84 * j;
      if ( !v24 || i >= (*((_DWORD *)v12 + 2) - v24) / 80 )
        _invalid_parameter_noinfo();
      v26 = *((_DWORD *)v12 + 1);
      if ( *(_DWORD *)(v25 + 32) == *(_DWORD *)(k + v26 + 16) )
      {
        if ( !v26 || i >= (*((_DWORD *)v12 + 2) - v26) / 80 )
          _invalid_parameter_noinfo();
        v27 = *((_DWORD *)v7 + 4);
        v28 = *((_DWORD *)v12 + 1) + 80 * i;
        if ( !v27 || j >= (*((_DWORD *)v7 + 5) - v27) / 84 )
          _invalid_parameter_noinfo();
        v29 = *((_DWORD *)v7 + 4);
        v30 = 84 * j;
        if ( *(_DWORD *)(v28 + 76) != *(_DWORD *)(v29 + 84 * j) )
        {
          if ( !v29 || j >= (*((_DWORD *)v7 + 5) - v29) / 84 )
            _invalid_parameter_noinfo();
          v31 = *(_DWORD *)(v28 + 24);
          *(_DWORD *)(v28 + 76) = *(_DWORD *)(*((_DWORD *)v7 + 4) + 84 * j);
          *(_BYTE *)v28 = 1;
          *(_BYTE *)(v28 + 1) = 0;
          *(float *)(v31 + 528) = 1.0;
          *(float *)(*(_DWORD *)(v28 + 20) + 528) = 1.0;
          *(float *)(*(_DWORD *)(v28 + 36) + 528) = 1.0;
          *(float *)(*(_DWORD *)(v28 + 32) + 528) = 1.0;
          *(float *)(*(_DWORD *)(v28 + 28) + 528) = 1.0;
        }
        v32 = *((_DWORD *)v7 + 4);
        if ( !v32 || j >= (*((_DWORD *)v7 + 5) - v32) / 84 )
          _invalid_parameter_noinfo();
        v33 = (const char *)std::string::c_str(v30 + *((_DWORD *)v7 + 4) + 4);
        v34 = atow(v33);
        CREStatic::SetText(*(CREStatic **)(v28 + 24), v34);
        v35 = *((_DWORD *)v7 + 4);
        if ( !v35 || j >= (*((_DWORD *)v7 + 5) - v35) / 84 )
          _invalid_parameter_noinfo();
        v36 = *((_DWORD *)v7 + 4);
        if ( *(int *)(v36 + v30 + 64) >= 0 )
        {
          if ( !v36 || j >= (*((_DWORD *)v7 + 5) - v36) / 84 )
            _invalid_parameter_noinfo();
          v37 = *((_DWORD *)v7 + 4);
          if ( *(int *)(v37 + v30 + 64) <= 6 )
          {
            if ( !v37 || j >= (*((_DWORD *)v7 + 5) - v37) / 84 )
              _invalid_parameter_noinfo();
            v38 = *((_DWORD *)v7 + 4);
            if ( *(_DWORD *)(v38 + v30 + 64) == 6 )
            {
              v140 = 0;
              v141 = (int)&v133;
              std::wstring::wstring(&v133, &unk_10321EEC);
            }
            else
            {
              if ( !v38 || j >= (*((_DWORD *)v7 + 5) - v38) / 84 )
                _invalid_parameter_noinfo();
              v140 = &rc + *(_DWORD *)(*((_DWORD *)v7 + 4) + v30 + 64);
              v141 = (int)&v133;
              std::wstring::wstring(&v133, L"GUI.dds");
            }
            CPictureLabel::ChangeTexture(*(_DWORD *)(v28 + 36), v133, v134, v135, v136, v137, v138, v139, v140);
          }
        }
        v39 = *((_DWORD *)v7 + 4);
        if ( !v39 || j >= (*((_DWORD *)v7 + 5) - v39) / 84 )
          _invalid_parameter_noinfo();
        v140 = *(struct tagRECT **)(*((_DWORD *)v7 + 4) + v30 + 40);
        v40 = GameClient::RobotManager::Instance();
        Robot = GameClient::RobotManager::GetRobot(v40, (int)v140);
        v43 = Robot;
        if ( Robot )
        {
          v44 = *((_DWORD *)Robot + 39);
          if ( v44 )
          {
            v42 = *((_DWORD *)v43 + 40) - v44;
            k = v42 / 20;
          }
          else
          {
            k = 0;
          }
          v45 = 0.0;
          v46 = 0;
          *(float *)v144 = 0.0;
          v164[0] = 0.0;
          if ( k > 0 )
          {
            v141 = 0;
            do
            {
              v47 = *((_DWORD *)v43 + 39);
              if ( !v47 || v46 >= (*((_DWORD *)v43 + 40) - v47) / 20 )
                _invalid_parameter_noinfo();
              v48 = *((_DWORD *)v43 + 39);
              v49 = (double)*(int *)(v48 + v141 + 4);
              v50 = v141 + v48;
              ++v46;
              v42 = v141 + 20;
              v141 += 20;
              v164[0] = v49 + v164[0];
              *(float *)v144 = *(float *)(v50 + 8) + *(float *)v144;
            }
            while ( (int)v46 < k );
            v45 = 0.0;
          }
          v51 = *(_DWORD *)(v28 + 28);
          *(float *)(v51 + 708) = v164[0];
          v140 = (struct tagRECT *)v42;
          *(float *)(v51 + 712) = v45;
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v28 + 28) + 200))(*(_DWORD *)(v28 + 28), v144[0]);
          j = v146;
        }
        break;
      }
      ++i;
    }
    v52 = *((_DWORD *)v142 + 969);
    v12 = (char *)v142 + 3872;
    if ( v52 )
      v53 = (*((_DWORD *)v142 + 970) - v52) / 80;
    else
      v53 = 0;
    if ( i == v53 )
    {
      v155 = 0;
      Source = 0;
      v157 = 0;
      v159 = 0;
      v160 = 0;
      v161 = 0;
      v54 = *((_DWORD *)v7 + 4);
      v176 = 1;
      if ( !v54 || j >= (*((_DWORD *)v7 + 5) - v54) / 84 )
        _invalid_parameter_noinfo();
      v55 = *(_DWORD *)(*((_DWORD *)v7 + 4) + 84 * j);
      v56 = *((_DWORD *)v7 + 4);
      v162 = 0.0;
      k = 84 * j;
      v163 = v55;
      LOWORD(v147[0]) = 1;
      if ( !v56 || j >= (*((_DWORD *)v7 + 5) - v56) / 84 )
        _invalid_parameter_noinfo();
      v148 = *(_DWORD *)(*((_DWORD *)v7 + 4) + 84 * j + 32);
      v57 = (CPictureLabel *)operator new(0x40Cu);
      v58 = v57;
      v141 = (int)v57;
      LOBYTE(v176) = 2;
      if ( v57 )
      {
        CPictureLabel::CPictureLabel(v57, v142, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
        *(_DWORD *)v58 = &CPictureLabel::`vftable';
        v59 = v58;
      }
      else
      {
        v59 = 0;
      }
      v60 = 25 * v148 + 4;
      v149 = v59;
      v61 = *(void (__thiscall **)(struct CREControl *, _DWORD, int))(*(_DWORD *)v59 + 156);
      LOBYTE(v176) = 1;
      i = v60;
      v61(v59, 0, v60);
      (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v149 + 160))(v149, 143, 23);
      v140 = (struct tagRECT *)asc_103B3E70;
      v141 = (int)&v133;
      std::wstring::wstring(&v133, L"GUI.dds");
      CPictureLabel::ChangeTexture(v149, v133, v134, v135, v136, v137, v138, v139, v140);
      CREDialog::AddControl(v142, v149);
      v62 = (char *)Source;
      v141 = (int)v149;
      if ( v155 && ((_BYTE *)Source - (_BYTE *)v155) >> 2 < (unsigned int)((v157 - (int)v155) >> 2) )
      {
        *(_DWORD *)Source = v149;
        Source = v62 + 4;
      }
      else
      {
        if ( v155 > Source )
          _invalid_parameter_noinfo();
        sub_10014637((int)&v173, (int)&v154, v62, (int)&v141);
      }
      v63 = *((_DWORD *)v149 + 24);
      v64 = (char *)v160;
      v141 = v63;
      if ( v159 && ((_BYTE *)v160 - (_BYTE *)v159) >> 2 < (unsigned int)((v161 - (int)v159) >> 2) )
      {
        *(_DWORD *)v160 = v63;
        v160 = v64 + 4;
      }
      else
      {
        v65 = v160;
        if ( v159 > v160 )
          _invalid_parameter_noinfo();
        sub_1001A564((int)&v171, (int)&v158, v65, (int)&v141);
      }
      v66 = (CREStatic *)operator new(0x2B8u);
      v141 = (int)v66;
      LOBYTE(v176) = 3;
      if ( v66 )
      {
        CREStatic::CREStatic(v66, v142);
        *(_DWORD *)v66 = &CREStatic::`vftable';
        v67 = v66;
      }
      else
      {
        v67 = 0;
      }
      v150 = v67;
      v68 = *(_DWORD *)v67;
      v140 = (struct tagRECT *)(v60 + 6);
      v69 = *(void (__thiscall **)(struct CREControl *, int, int))(v68 + 156);
      LOBYTE(v176) = 1;
      v69(v67, 8, v60 + 6);
      (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v150 + 160))(v150, 100, 15);
      v70 = *((_DWORD *)v7 + 4);
      if ( !v70 || v146 >= (*((_DWORD *)v7 + 5) - v70) / 84 )
        _invalid_parameter_noinfo();
      v71 = (const char *)std::string::c_str(k + *((_DWORD *)v7 + 4) + 4);
      v72 = atow(v71);
      CREStatic::SetText(v150, v72);
      (*(void (__thiscall **)(struct CREControl *, int))(*(_DWORD *)v150 + 188))(v150, 4);
      CREDialog::AddControl(v142, v150);
      v73 = (char *)Source;
      v141 = (int)v150;
      if ( v155 && ((_BYTE *)Source - (_BYTE *)v155) >> 2 < (unsigned int)((v157 - (int)v155) >> 2) )
      {
        *(_DWORD *)Source = v150;
        Source = v73 + 4;
      }
      else
      {
        if ( v155 > Source )
          _invalid_parameter_noinfo();
        sub_10014637((int)&v166, (int)&v154, v73, (int)&v141);
      }
      v74 = *((_DWORD *)v150 + 24);
      v75 = (char *)v160;
      v141 = v74;
      if ( v159 && ((_BYTE *)v160 - (_BYTE *)v159) >> 2 < (unsigned int)((v161 - (int)v159) >> 2) )
      {
        *(_DWORD *)v160 = v74;
        v160 = v75 + 4;
      }
      else
      {
        v76 = v160;
        if ( v159 > v160 )
          _invalid_parameter_noinfo();
        sub_1001A564((int)&v168, (int)&v158, v76, (int)&v141);
      }
      v77 = (CProgressBar *)operator new(0x300u);
      v78 = v77;
      v141 = (int)v77;
      LOBYTE(v176) = 4;
      if ( v77 )
      {
        CProgressBar::CProgressBar(v77, v142);
        *(_DWORD *)v78 = &CProgressBar::`vftable';
        v79 = v78;
      }
      else
      {
        v79 = 0;
      }
      v151 = v79;
      v80 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v79 + 156);
      LOBYTE(v176) = 1;
      v80(v79, 126, v60);
      (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v151 + 160))(v151, 3, 23);
      *((_DWORD *)v151 + 188) = 4;
      *((_BYTE *)v151 + 744) = 1;
      *((_DWORD *)v151 + 190) = -16384;
      v81 = *((_DWORD *)v7 + 4);
      if ( !v81 || v146 >= (*((_DWORD *)v7 + 5) - v81) / 84 )
        _invalid_parameter_noinfo();
      v140 = *(struct tagRECT **)(k + *((_DWORD *)v7 + 4) + 40);
      v82 = GameClient::RobotManager::Instance();
      v83 = GameClient::RobotManager::GetRobot(v82, (int)v140);
      v84 = v83;
      if ( v83 )
      {
        v85 = *((_DWORD *)v83 + 39);
        if ( v85 )
          v86 = (*((_DWORD *)v84 + 40) - v85) / 20;
        else
          v86 = 0;
        v87 = 0.0;
        v88 = 0;
        v164[0] = 0.0;
        *(float *)v144 = 0.0;
        if ( v86 > 0 )
        {
          v141 = 0;
          do
          {
            v89 = *((_DWORD *)v84 + 39);
            if ( !v89 || v88 >= (*((_DWORD *)v84 + 40) - v89) / 20 )
              _invalid_parameter_noinfo();
            v90 = *((_DWORD *)v84 + 39);
            v91 = (double)*(int *)(v90 + v141 + 4);
            v92 = v141 + v90;
            ++v88;
            v141 += 20;
            *(float *)v144 = v91 + *(float *)v144;
            v164[0] = *(float *)(v92 + 8) + v164[0];
          }
          while ( (int)v88 < v86 );
          v87 = 0.0;
        }
        v93 = v151;
        *((float *)v151 + 177) = *(float *)v144;
        *((float *)v93 + 178) = v87;
        (*(void (__stdcall **)(float))(*(_DWORD *)v151 + 200))(COERCE_FLOAT(LODWORD(v164[0])));
        v60 = i;
      }
      CREDialog::AddControl(v142, v151);
      v94 = (char *)Source;
      v141 = (int)v151;
      if ( v155 && ((_BYTE *)Source - (_BYTE *)v155) >> 2 < (unsigned int)((v157 - (int)v155) >> 2) )
      {
        *(_DWORD *)Source = v151;
        Source = v94 + 4;
      }
      else
      {
        if ( v155 > Source )
          _invalid_parameter_noinfo();
        sub_10014637((int)&v172, (int)&v154, v94, (int)&v141);
      }
      v95 = *((_DWORD *)v151 + 24);
      v96 = (char *)v160;
      v141 = v95;
      if ( v159 && ((_BYTE *)v160 - (_BYTE *)v159) >> 2 < (unsigned int)((v161 - (int)v159) >> 2) )
      {
        *(_DWORD *)v160 = v95;
        v160 = v96 + 4;
      }
      else
      {
        v97 = v160;
        if ( v159 > v160 )
          _invalid_parameter_noinfo();
        sub_1001A564((int)&v170, (int)&v158, v97, (int)&v141);
      }
      v141 = (int)operator new(0x410u);
      LOBYTE(v176) = 5;
      if ( v141 )
        v98 = (struct CREControl *)sub_1000C07C((int)v142);
      else
        v98 = 0;
      v152 = v98;
      v99 = *(_DWORD *)v98;
      v140 = (struct tagRECT *)(v60 + 6);
      v100 = v98;
      v101 = *(void (__thiscall **)(struct CREControl *, int, int))(v99 + 156);
      LOBYTE(v176) = 1;
      v101(v100, 129, v60 + 6);
      (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v152 + 160))(v152, 12, 12);
      sub_10017C88(v148);
      CREDialog::AddControl(v142, v152);
      v102 = (char *)Source;
      v141 = (int)v152;
      if ( v155 && ((_BYTE *)Source - (_BYTE *)v155) >> 2 < (unsigned int)((v157 - (int)v155) >> 2) )
      {
        *(_DWORD *)Source = v152;
        Source = v102 + 4;
      }
      else
      {
        if ( v155 > Source )
          _invalid_parameter_noinfo();
        sub_10014637((int)&v174, (int)&v154, v102, (int)&v141);
      }
      v103 = *((_DWORD *)v152 + 24);
      v104 = (char *)v160;
      v141 = v103;
      if ( v159 && ((_BYTE *)v160 - (_BYTE *)v159) >> 2 < (unsigned int)((v161 - (int)v159) >> 2) )
      {
        *(_DWORD *)v160 = v103;
        v160 = v104 + 4;
      }
      else
      {
        v105 = v160;
        if ( v159 > v160 )
          _invalid_parameter_noinfo();
        sub_1001A564((int)&v167, (int)&v158, v105, (int)&v141);
      }
      v106 = (CPictureLabel *)operator new(0x40Cu);
      v141 = (int)v106;
      LOBYTE(v176) = 6;
      if ( v106 )
      {
        CPictureLabel::CPictureLabel(v106, v142, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
        *(_DWORD *)v106 = &CPictureLabel::`vftable';
        v107 = v106;
      }
      else
      {
        v107 = 0;
      }
      v153 = v107;
      v108 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v107 + 156);
      LOBYTE(v176) = 1;
      v108(v107, 150, v60);
      (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v153 + 160))(v153, 23, 23);
      v109 = *((_DWORD *)v7 + 4);
      v110 = v146;
      if ( v109 && v146 < (*((_DWORD *)v7 + 5) - v109) / 84 )
      {
        v111 = _invalid_parameter_noinfo;
      }
      else
      {
        v111 = _invalid_parameter_noinfo;
        _invalid_parameter_noinfo();
      }
      v112 = *((_DWORD *)v7 + 4);
      v113 = k;
      if ( *(int *)(k + v112 + 64) >= 0 )
      {
        if ( !v112 || v110 >= (*((_DWORD *)v7 + 5) - v112) / 84 )
          v111();
        v114 = *((_DWORD *)v7 + 4);
        if ( *(int *)(v114 + v113 + 64) <= 6 )
        {
          if ( !v114 || v110 >= (*((_DWORD *)v7 + 5) - v114) / 84 )
            v111();
          v115 = *((_DWORD *)v7 + 4);
          if ( *(_DWORD *)(v115 + v113 + 64) == 6 )
          {
            v140 = 0;
            v141 = (int)&v133;
            std::wstring::wstring(&v133, &unk_10321F10);
          }
          else
          {
            if ( !v115 || v110 >= (*((_DWORD *)v7 + 5) - v115) / 84 )
              v111();
            v140 = &rc + *(_DWORD *)(v113 + *((_DWORD *)v7 + 4) + 64);
            v141 = (int)&v133;
            std::wstring::wstring(&v133, L"GUI.dds");
          }
          CPictureLabel::ChangeTexture(v153, v133, v134, v135, v136, v137, v138, v139, v140);
        }
      }
      CREDialog::AddControl(v142, v153);
      v116 = (char *)Source;
      v141 = (int)v153;
      if ( v155 && ((_BYTE *)Source - (_BYTE *)v155) >> 2 < (unsigned int)((v157 - (int)v155) >> 2) )
      {
        *(_DWORD *)Source = v153;
        Source = v116 + 4;
      }
      else
      {
        if ( v155 > Source )
          v111();
        sub_10014637((int)&v169, (int)&v154, v116, (int)&v141);
      }
      v117 = *((_DWORD *)v153 + 24);
      v118 = (char *)v160;
      v141 = v117;
      if ( v159 && ((_BYTE *)v160 - (_BYTE *)v159) >> 2 < (unsigned int)((v161 - (int)v159) >> 2) )
      {
        *(_DWORD *)v160 = v117;
        v160 = v118 + 4;
      }
      else
      {
        v119 = v160;
        if ( v159 > v160 )
          v111();
        sub_1001A564((int)v165, (int)&v158, v119, (int)&v141);
      }
      v12 = (char *)v142 + 3872;
      sub_1000BB95((char *)v142 + 3872, v147);
      v176 = -1;
      if ( v159 )
        operator delete(v159);
      v159 = 0;
      v160 = 0;
      v161 = 0;
      if ( v155 )
        operator delete(v155);
      j = v146;
    }
  }
}

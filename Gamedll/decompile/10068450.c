/*
 * func-name: sub_10068450
 * func-address: 0x10068450
 * callers: 0x10013214
 * callees: 0x10001dfc, 0x10004665, 0x1000516e, 0x100072cf, 0x10009e6c, 0x10013d13, 0x1001532f, 0x10017c29, 0x1001829b, 0x10018b15, 0x1001929a, 0x100197d6, 0x100199c0, 0x102c9ea8
 */

char __userpurge sub_10068450@<al>(int a1@<ecx>, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ecx
  int v10; // esi
  int v11; // eax
  Input *v12; // eax
  CDlgMgr *v13; // eax
  CTYDialog *v14; // eax
  CTYDialog *v15; // esi
  int Visible; // eax
  CDlgMgr *v17; // eax
  CTYDialog *Dialog; // eax
  CTYDialog *v19; // esi
  int v20; // edx
  CDlgMgr *v21; // eax
  Game *v22; // eax
  Game *v23; // eax
  bool v24; // al
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // ebp
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // ebp
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // ebp
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // ebp
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // ebp
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // ebp
  int v53; // eax
  int v54; // eax
  int ControlHandle; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // ecx
  int v61; // esi
  int v62; // eax
  Input *v63; // eax
  CDlgMgr *v64; // eax
  struct CTYDialog *v65; // eax
  int MapState; // eax
  int v67; // ecx
  int v68; // esi
  int v69; // eax
  Input *v70; // eax
  CDlgMgr *v71; // eax
  struct CTYDialog *v72; // eax
  CRadarMapUI *v73; // eax
  int v74; // ecx
  int v75; // esi
  int v76; // eax
  Input *v77; // eax
  CDlgMgr *v78; // eax
  struct CTYDialog *v79; // eax
  CRadarMapUI *v80; // eax
  int v81; // ecx
  int v82; // esi
  int v83; // eax
  Input *v84; // eax
  int v85; // eax
  int v86; // ecx
  int v87; // esi
  int v88; // eax
  Input *v89; // eax
  CDlgMgr *v90; // eax
  struct CTYDialog *v91; // eax
  int v92; // ebp
  GameClient::GroupManager *v93; // eax
  const struct GameClient::Group *Group; // esi
  int v95; // eax
  Input *v96; // eax
  const struct GameClient::Group *v97; // ecx
  CDlgMgr *v98; // eax
  GameClient::GroupManager *v99; // eax
  int v100; // ecx
  int v101; // esi
  int v102; // eax
  Input *v103; // eax
  CTYDialog *v104; // eax
  CDlgMgr *v105; // eax
  CDlgMgr *v106; // eax
  CTYDialog *v107; // esi
  const struct GameClient::Group *v108; // edx
  const struct GameClient::Group *v109; // eax
  CDlgMgr *v110; // eax
  _DWORD v112[4]; // [esp+64h] [ebp-40h] BYREF
  int v113; // [esp+74h] [ebp-30h]
  void ***v114; // [esp+78h] [ebp-2Ch]
  void ***v115; // [esp+7Ch] [ebp-28h]
  int v116; // [esp+80h] [ebp-24h]
  int v117; // [esp+84h] [ebp-20h]
  BOOL v118; // [esp+88h] [ebp-1Ch]
  bool v119; // [esp+8Ch] [ebp-18h]
  float v120; // [esp+90h] [ebp-14h]
  _DWORD *v121; // [esp+94h] [ebp-10h]
  int v122; // [esp+A0h] [ebp-4h]

  v9 = *(_DWORD *)(dword_103B67B4 + 8);
  v10 = dword_103B67B4 + 8;
  if ( !v9 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v9) >> 2) <= 0x1B )
    _invalid_parameter_noinfo();
  v11 = *(_DWORD *)(*(_DWORD *)v10 + 108);
  *(float *)&v116 = 0.0;
  v12 = (Input *)Input::Instance(v11);
  if ( Input::ControlJustPressed(v12, v117, v118) )
  {
    if ( *(_BYTE *)(a2 + 176) )
    {
      v17 = (CDlgMgr *)CDlgMgr::Instance(12);
      Dialog = CDlgMgr::GetDialog(v17, v117);
      v19 = Dialog;
      if ( !Dialog )
        goto LABEL_12;
      *(float *)&v116 = 0.0;
      CTYDialog::GetVisible(Dialog);
      LOBYTE(v20) = (unsigned __int8)CTYDialog::GetVisible(v19) == 0;
      v117 = v20;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(*(_DWORD *)(sub_10009E6C() + 16) + 8) == 4 )
    {
      v13 = (CDlgMgr *)CDlgMgr::Instance(12);
      v14 = CDlgMgr::GetDialog(v13, v117);
      v15 = v14;
      if ( v14 )
      {
        *(float *)&v116 = 0.0;
        CTYDialog::GetVisible(v14);
        Visible = CTYDialog::GetVisible(v15);
        LOBYTE(Visible) = (_BYTE)Visible == 0;
        v117 = Visible;
LABEL_11:
        v21 = (CDlgMgr *)CDlgMgr::Instance(12);
        CDlgMgr::ShowDialog(v21, v117, v118, v119, v120);
      }
    }
  }
LABEL_12:
  v22 = Game::Instance();
  if ( Game::HasAnyGUIopen(v22) != (*(_BYTE *)(a1 + 4) == 0) )
  {
    v23 = Game::Instance();
    v24 = !Game::HasAnyGUIopen(v23);
    *(_BYTE *)(a1 + 4) = v24;
    if ( v24 )
    {
      v57 = Input::Instance(1);
      Input::SetMaskAll(v57);
      v58 = Input::Instance(1);
      Input::SetMaskMouse(v58);
    }
    else
    {
      v25 = Input::Instance(0);
      Input::SetMaskAll(v25);
      v26 = Input::Instance(0);
      Input::SetMaskMouse(v26);
      v27 = *(_DWORD *)(dword_103B67B4 + 8);
      v28 = dword_103B67B4 + 8;
      if ( !v27 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v27) >> 2) <= 0x26 )
        _invalid_parameter_noinfo();
      v29 = *(_DWORD *)(*(_DWORD *)v28 + 152);
      v116 = 1;
      v30 = Input::Instance(v29);
      Input::SetMask(v30);
      v31 = *(_DWORD *)(dword_103B67B4 + 8);
      v32 = dword_103B67B4 + 8;
      if ( !v31 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v31) >> 2) <= 0x27 )
        _invalid_parameter_noinfo();
      v33 = *(_DWORD *)(*(_DWORD *)v32 + 156);
      v116 = 1;
      v34 = Input::Instance(v33);
      Input::SetMask(v34);
      v35 = *(_DWORD *)(dword_103B67B4 + 8);
      v36 = dword_103B67B4 + 8;
      if ( !v35 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v35) >> 2) <= 0x28 )
        _invalid_parameter_noinfo();
      v37 = *(_DWORD *)(*(_DWORD *)v36 + 160);
      v116 = 1;
      v38 = Input::Instance(v37);
      Input::SetMask(v38);
      v39 = *(_DWORD *)(dword_103B67B4 + 8);
      v40 = dword_103B67B4 + 8;
      if ( !v39 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v39) >> 2) <= 0x31 )
        _invalid_parameter_noinfo();
      v41 = *(_DWORD *)(*(_DWORD *)v40 + 196);
      v116 = 1;
      v42 = Input::Instance(v41);
      Input::SetMask(v42);
      v43 = *(_DWORD *)(dword_103B67B4 + 8);
      v44 = dword_103B67B4 + 8;
      if ( !v43 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v43) >> 2) <= 0x1B )
        _invalid_parameter_noinfo();
      v45 = *(_DWORD *)(*(_DWORD *)v44 + 108);
      v116 = 1;
      v46 = Input::Instance(v45);
      Input::SetMask(v46);
      v47 = *(_DWORD *)(dword_103B67B4 + 8);
      v48 = dword_103B67B4 + 8;
      if ( !v47 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v47) >> 2) <= 0x30 )
        _invalid_parameter_noinfo();
      v49 = *(_DWORD *)(*(_DWORD *)v48 + 192);
      v116 = 1;
      v50 = Input::Instance(v49);
      Input::SetMask(v50);
      v51 = *(_DWORD *)(dword_103B67B4 + 8);
      v52 = dword_103B67B4 + 8;
      if ( !v51 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v51) >> 2) <= 0x4F )
        _invalid_parameter_noinfo();
      v53 = Input::Instance(*(_DWORD *)(*(_DWORD *)v52 + 316));
      Input::SetMask(v53);
      v116 = 1;
      v121 = v112;
      std::string::string(v112, &unk_1030ADB8);
      v122 = 0;
      v54 = Input::Instance(v112[0]);
      a8 = -1;
      ControlHandle = Input::GetControlHandle(v54);
      v56 = Input::Instance(ControlHandle);
      Input::SetMask(v56);
    }
  }
  v121 = (_DWORD *)sub_10001DFC(*(_DWORD *)(a2 + 292));
  v59 = GUISystem::Instance();
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v59 + 44))(v59) )
  {
    v60 = *(_DWORD *)(dword_103B67B4 + 8);
    v61 = dword_103B67B4 + 8;
    if ( !v60 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v60) >> 2) <= 0x26 )
      _invalid_parameter_noinfo();
    v62 = *(_DWORD *)(*(_DWORD *)v61 + 152);
    *(float *)&v116 = 0.0;
    v63 = (Input *)Input::Instance(v62);
    if ( !Input::ControlJustPressed(v63, v117, v118) )
      goto LABEL_48;
    *(float *)&v116 = 0.0;
    v115 = &CRadarMapUI `RTTI Type Descriptor';
    v114 = &CTYDialog `RTTI Type Descriptor';
    v113 = 0;
    v64 = (CDlgMgr *)CDlgMgr::Instance(15);
    v65 = CDlgMgr::GetDialog(v64, v113);
    if ( !_RTDynamicCast(v65, v113, v114, v115, v116) )
      goto LABEL_48;
    MapState = CRadarMapUI::GetMapState();
    if ( MapState == 2 )
    {
      v116 = 1;
    }
    else
    {
      if ( MapState != 1 )
        goto LABEL_48;
      v116 = 2;
    }
    CRadarMapUI::ChangeMapState(v116);
LABEL_48:
    v67 = *(_DWORD *)(dword_103B67B4 + 8);
    v68 = dword_103B67B4 + 8;
    if ( !v67 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v67) >> 2) <= 0x27 )
      _invalid_parameter_noinfo();
    v69 = *(_DWORD *)(*(_DWORD *)v68 + 156);
    *(float *)&v116 = 0.0;
    v70 = (Input *)Input::Instance(v69);
    if ( Input::ControlJustPressed(v70, v117, v118) )
    {
      *(float *)&v116 = 0.0;
      v115 = &CRadarMapUI `RTTI Type Descriptor';
      v114 = &CTYDialog `RTTI Type Descriptor';
      v113 = 0;
      v71 = (CDlgMgr *)CDlgMgr::Instance(15);
      v72 = CDlgMgr::GetDialog(v71, v113);
      v73 = (CRadarMapUI *)_RTDynamicCast(v72, v113, v114, v115, v116);
      if ( v73 )
        CRadarMapUI::ChangeLevel(v73, *((_DWORD *)v73 + 1024) + 1);
    }
    v74 = *(_DWORD *)(dword_103B67B4 + 8);
    v75 = dword_103B67B4 + 8;
    if ( !v74 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v74) >> 2) <= 0x28 )
      _invalid_parameter_noinfo();
    v76 = *(_DWORD *)(*(_DWORD *)v75 + 160);
    *(float *)&v116 = 0.0;
    v77 = (Input *)Input::Instance(v76);
    if ( Input::ControlJustPressed(v77, v117, v118) )
    {
      *(float *)&v116 = 0.0;
      v115 = &CRadarMapUI `RTTI Type Descriptor';
      v114 = &CTYDialog `RTTI Type Descriptor';
      v113 = 0;
      v78 = (CDlgMgr *)CDlgMgr::Instance(15);
      v79 = CDlgMgr::GetDialog(v78, v113);
      v80 = (CRadarMapUI *)_RTDynamicCast(v79, v113, v114, v115, v116);
      if ( v80 )
        CRadarMapUI::ChangeLevel(v80, *((_DWORD *)v80 + 1024) - 1);
    }
    v81 = *(_DWORD *)(dword_103B67B4 + 8);
    v82 = dword_103B67B4 + 8;
    if ( !v81 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v81) >> 2) <= 0x31 )
      _invalid_parameter_noinfo();
    v83 = *(_DWORD *)(*(_DWORD *)v82 + 196);
    *(float *)&v116 = 0.0;
    v84 = (Input *)Input::Instance(v83);
    if ( Input::ControlJustPressed(v84, v117, v118) )
    {
      v85 = CDlgMgr::Instance(v117);
      *(_BYTE *)(v85 + 128) = *(_BYTE *)(v85 + 128) == 0;
    }
    v86 = *(_DWORD *)(dword_103B67B4 + 8);
    v87 = dword_103B67B4 + 8;
    if ( !v86 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v86) >> 2) <= 0x4F )
      _invalid_parameter_noinfo();
    v88 = *(_DWORD *)(*(_DWORD *)v87 + 316);
    *(float *)&v116 = 0.0;
    v89 = (Input *)Input::Instance(v88);
    if ( Input::ControlJustPressed(v89, v117, v118) )
    {
      *(float *)&v116 = 0.0;
      v115 = (void ***)&CSelfCorpUI `RTTI Type Descriptor';
      v114 = &CTYDialog `RTTI Type Descriptor';
      v113 = 0;
      v90 = (CDlgMgr *)CDlgMgr::Instance(16);
      v91 = CDlgMgr::GetDialog(v90, v113);
      if ( _RTDynamicCast(v91, v113, v114, v115, v116) )
        sub_1001829B();
    }
    v92 = a2;
    if ( *(_DWORD *)(a2 + 216) )
    {
      v116 = *(int *)(a2 + 216);
      v93 = GameClient::GroupManager::Instance();
      Group = GameClient::GroupManager::GetGroup(v93, v116);
      if ( Group )
      {
        v95 = sub_10018B15(41);
        *(float *)&v116 = 0.0;
        v96 = (Input *)Input::Instance(v95);
        if ( Input::ControlJustPressed(v96, v117, v118) )
        {
          a2 = 0;
          sub_100199C0(17, (int)&a2);
          if ( a2 )
          {
            *(float *)&v116 = 0.0;
            v115 = 0;
            LOBYTE(v97) = (unsigned __int8)CTYDialog::GetVisible((CTYDialog *)a2) == 0;
            v116 = (int)v97;
            v98 = (CDlgMgr *)CDlgMgr::Instance(17);
            CDlgMgr::ShowDialog(v98, v117, v118, v119, v120);
          }
        }
        if ( *((_DWORD *)Group + 2) == *(_DWORD *)(v92 + 4) && v121 && v121[70] == -1 )
        {
          v116 = (int)Group;
          v99 = GameClient::GroupManager::Instance();
          GameClient::GroupManager::CheckGroupCmdKey(v99, (const struct GameClient::Group *)v116);
        }
      }
    }
  }
  v100 = *(_DWORD *)(dword_103B67B4 + 8);
  v101 = dword_103B67B4 + 8;
  if ( !v100 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v100) >> 2) <= 0x30 )
    _invalid_parameter_noinfo();
  v102 = *(_DWORD *)(*(_DWORD *)v101 + 192);
  *(float *)&v116 = 0.0;
  v103 = (Input *)Input::Instance(v102);
  LOBYTE(v104) = Input::ControlJustPressed(v103, v117, v118);
  if ( (_BYTE)v104 )
  {
    v105 = (CDlgMgr *)CDlgMgr::Instance(v117);
    LOBYTE(v104) = CDlgMgr::CancelByPlayer(v105);
    if ( !(_BYTE)v104 )
    {
      v106 = (CDlgMgr *)CDlgMgr::Instance(23);
      v104 = CDlgMgr::GetDialog(v106, v117);
      v107 = v104;
      if ( v104 )
      {
        *(float *)&v116 = 0.0;
        LOBYTE(v108) = (unsigned __int8)CTYDialog::GetVisible(v104) == 0;
        v116 = (int)v108;
        v109 = (const struct GameClient::Group *)CTYDialog::GetVisible(v107);
        LOBYTE(v109) = (_BYTE)v109 == 0;
        v116 = (int)v109;
        v110 = (CDlgMgr *)CDlgMgr::Instance(23);
        LOBYTE(v104) = CDlgMgr::ShowDialog(v110, v117, v118, v119, v120);
      }
    }
  }
  if ( v121 )
    LOBYTE(v104) = (*(int (__thiscall **)(_DWORD *))(*v121 + 96))(v121);
  return (char)v104;
}

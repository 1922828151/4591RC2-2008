/*
 * func-name: ?Initialize@RobotManager@GameClient@@QAE_NXZ_0
 * func-address: 0x1018d4a0
 * callers: 0x10015d7f
 * callees: 0x100073c9, 0x102c9d98
 */

char __thiscall GameClient::RobotManager::Initialize(GameClient::RobotManager *this)
{
  _DWORD *v1; // eax
  EventAttemper *v2; // eax
  _DWORD *v3; // eax
  EventAttemper *v4; // eax
  _DWORD *v5; // eax
  EventAttemper *v6; // eax
  _DWORD *v7; // eax
  EventAttemper *v8; // eax
  _DWORD *v9; // eax
  EventAttemper *v10; // eax
  _DWORD *v11; // eax
  EventAttemper *v12; // eax
  _DWORD *v13; // eax
  EventAttemper *v14; // eax
  _DWORD *v15; // eax
  EventAttemper *v16; // eax
  _DWORD *v17; // eax
  EventAttemper *v18; // eax
  _DWORD *v19; // eax
  EventAttemper *v20; // eax
  _DWORD *v21; // eax
  EventAttemper *v22; // eax
  _DWORD *v23; // eax
  EventAttemper *v24; // eax
  _DWORD *v25; // eax
  EventAttemper *v26; // eax
  _DWORD *v27; // eax
  EventAttemper *v28; // eax
  _DWORD *v29; // eax
  EventAttemper *v30; // eax
  _DWORD *v31; // eax
  EventAttemper *v32; // eax
  _DWORD *v33; // eax
  EventAttemper *v34; // eax
  _DWORD *v35; // eax
  EventAttemper *v36; // eax
  _DWORD *v37; // eax
  EventAttemper *v38; // eax
  _DWORD *v39; // eax
  EventAttemper *v40; // eax
  _DWORD *v41; // eax
  EventAttemper *v42; // eax
  _DWORD *v43; // eax
  EventAttemper *v44; // eax
  _DWORD *v45; // eax
  EventAttemper *v46; // eax
  _DWORD *v47; // eax
  EventAttemper *v48; // eax
  _DWORD *v49; // eax
  EventAttemper *v50; // eax
  _DWORD *v51; // eax
  EventAttemper *v52; // eax
  _DWORD *v53; // eax
  EventAttemper *v54; // eax
  _DWORD *v55; // eax
  EventAttemper *v56; // eax
  _DWORD *v57; // eax
  EventAttemper *v58; // eax
  _DWORD *v59; // eax
  EventAttemper *v60; // eax
  _DWORD *v61; // eax
  EventAttemper *v62; // eax
  _DWORD *v63; // eax
  EventAttemper *v64; // eax
  _DWORD *v65; // eax
  EventAttemper *v66; // eax
  _DWORD *v67; // eax
  EventAttemper *v68; // eax
  _DWORD *v69; // eax
  EventAttemper *v70; // eax
  _DWORD *v71; // eax
  EventAttemper *v72; // eax
  _DWORD *v73; // eax
  EventAttemper *v74; // eax
  _DWORD *v75; // eax
  EventAttemper *v76; // eax
  _DWORD *v77; // eax
  EventAttemper *v78; // eax
  _DWORD *v79; // eax
  EventAttemper *v80; // eax
  _DWORD *v81; // eax
  EventAttemper *v82; // eax
  _DWORD *v83; // eax
  EventAttemper *v84; // eax
  _DWORD *v85; // eax
  EventAttemper *v86; // eax
  _DWORD *v87; // eax
  EventAttemper *v88; // eax
  _DWORD *v89; // eax
  EventAttemper *v90; // eax
  _DWORD *v91; // eax
  EventAttemper *v92; // eax
  _DWORD *v93; // eax
  EventAttemper *v94; // eax
  _DWORD *v95; // eax
  EventAttemper *v96; // eax
  _DWORD *v97; // eax
  EventAttemper *v98; // eax
  _DWORD *v99; // eax
  EventAttemper *v100; // eax
  _DWORD *v101; // eax
  EventAttemper *v102; // eax
  _DWORD *v103; // eax
  EventAttemper *v104; // eax
  _DWORD *v105; // eax
  EventAttemper *v106; // eax
  _DWORD *v107; // eax
  EventAttemper *v108; // eax
  _DWORD *v109; // eax
  EventAttemper *v110; // eax
  _DWORD *v111; // eax
  EventAttemper *v112; // eax

  sub_100073C9();
  v1 = operator new(4u);
  if ( v1 )
    *v1 = &GameClient::GS_Robot_Action_ObjectObserver::`vftable';
  v2 = (EventAttemper *)EventAttemper::Instance(19, 5100);
  EventAttemper::AddObserver(v2);
  v3 = operator new(4u);
  if ( v3 )
    *v3 = &GameClient::GS_Robot_Action_ObjectObserver::`vftable';
  v4 = (EventAttemper *)EventAttemper::Instance(19, 5101);
  EventAttemper::AddObserver(v4);
  v5 = operator new(4u);
  if ( v5 )
    *v5 = &GameClient::GS_Robot_Action_ObjectObserver::`vftable';
  v6 = (EventAttemper *)EventAttemper::Instance(19, 5102);
  EventAttemper::AddObserver(v6);
  v7 = operator new(4u);
  if ( v7 )
    *v7 = &GameClient::GS_Robot_Action_ObjectObserver::`vftable';
  v8 = (EventAttemper *)EventAttemper::Instance(19, 5103);
  EventAttemper::AddObserver(v8);
  v9 = operator new(4u);
  if ( v9 )
    *v9 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v10 = (EventAttemper *)EventAttemper::Instance(19, 5104);
  EventAttemper::AddObserver(v10);
  v11 = operator new(4u);
  if ( v11 )
    *v11 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v12 = (EventAttemper *)EventAttemper::Instance(19, 5105);
  EventAttemper::AddObserver(v12);
  v13 = operator new(4u);
  if ( v13 )
    *v13 = &GameClient::GS_Robot_Survival_ObjectObserver::`vftable';
  v14 = (EventAttemper *)EventAttemper::Instance(19, 5106);
  EventAttemper::AddObserver(v14);
  v15 = operator new(4u);
  if ( v15 )
    *v15 = &GameClient::GS_Robot_Survival_ObjectObserver::`vftable';
  v16 = (EventAttemper *)EventAttemper::Instance(19, 5107);
  EventAttemper::AddObserver(v16);
  v17 = operator new(4u);
  if ( v17 )
    *v17 = &GameClient::GS_Robot_Survival_ObjectObserver::`vftable';
  v18 = (EventAttemper *)EventAttemper::Instance(19, 5108);
  EventAttemper::AddObserver(v18);
  v19 = operator new(4u);
  if ( v19 )
    *v19 = &GameClient::GS_Robot_Survival_ObjectObserver::`vftable';
  v20 = (EventAttemper *)EventAttemper::Instance(19, 5109);
  EventAttemper::AddObserver(v20);
  v21 = operator new(4u);
  if ( v21 )
    *v21 = &GameClient::GS_Robot_Survival_ObjectObserver::`vftable';
  v22 = (EventAttemper *)EventAttemper::Instance(19, 5110);
  EventAttemper::AddObserver(v22);
  v23 = operator new(4u);
  if ( v23 )
    *v23 = &GameClient::GS_Robot_Board_ObjectObserver::`vftable';
  v24 = (EventAttemper *)EventAttemper::Instance(19, 5111);
  EventAttemper::AddObserver(v24);
  v25 = operator new(4u);
  if ( v25 )
    *v25 = &GameClient::GS_Robot_Board_ObjectObserver::`vftable';
  v26 = (EventAttemper *)EventAttemper::Instance(19, 5112);
  EventAttemper::AddObserver(v26);
  v27 = operator new(4u);
  if ( v27 )
    *v27 = &GameClient::GS_Robot_Skill_ObjectObserver::`vftable';
  v28 = (EventAttemper *)EventAttemper::Instance(19, 5113);
  EventAttemper::AddObserver(v28);
  v29 = operator new(4u);
  if ( v29 )
    *v29 = &GameClient::GS_Robot_Skill_ObjectObserver::`vftable';
  v30 = (EventAttemper *)EventAttemper::Instance(19, 5114);
  EventAttemper::AddObserver(v30);
  v31 = operator new(4u);
  if ( v31 )
    *v31 = &GameClient::GS_Robot_Skill_ObjectObserver::`vftable';
  v32 = (EventAttemper *)EventAttemper::Instance(19, 5115);
  EventAttemper::AddObserver(v32);
  v33 = operator new(4u);
  if ( v33 )
    *v33 = &GameClient::GS_Robot_Skill_ObjectObserver::`vftable';
  v34 = (EventAttemper *)EventAttemper::Instance(19, 5116);
  EventAttemper::AddObserver(v34);
  v35 = operator new(4u);
  if ( v35 )
    *v35 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v36 = (EventAttemper *)EventAttemper::Instance(19, 5118);
  EventAttemper::AddObserver(v36);
  v37 = operator new(4u);
  if ( v37 )
    *v37 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v38 = (EventAttemper *)EventAttemper::Instance(19, 5119);
  EventAttemper::AddObserver(v38);
  v39 = operator new(4u);
  if ( v39 )
    *v39 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v40 = (EventAttemper *)EventAttemper::Instance(19, 5120);
  EventAttemper::AddObserver(v40);
  v41 = operator new(4u);
  if ( v41 )
    *v41 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v42 = (EventAttemper *)EventAttemper::Instance(19, 5121);
  EventAttemper::AddObserver(v42);
  v43 = operator new(4u);
  if ( v43 )
    *v43 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v44 = (EventAttemper *)EventAttemper::Instance(19, 5122);
  EventAttemper::AddObserver(v44);
  v45 = operator new(4u);
  if ( v45 )
    *v45 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v46 = (EventAttemper *)EventAttemper::Instance(19, 5123);
  EventAttemper::AddObserver(v46);
  v47 = operator new(4u);
  if ( v47 )
    *v47 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v48 = (EventAttemper *)EventAttemper::Instance(19, 5125);
  EventAttemper::AddObserver(v48);
  v49 = operator new(4u);
  if ( v49 )
    *v49 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v50 = (EventAttemper *)EventAttemper::Instance(19, 5126);
  EventAttemper::AddObserver(v50);
  v51 = operator new(4u);
  if ( v51 )
    *v51 = &GameClient::GS_Robot_SystemPart_ObjectObserver::`vftable';
  v52 = (EventAttemper *)EventAttemper::Instance(19, 5127);
  EventAttemper::AddObserver(v52);
  v53 = operator new(4u);
  if ( v53 )
    *v53 = &GameClient::GS_Robot_Malice_ObjectObserver::`vftable';
  v54 = (EventAttemper *)EventAttemper::Instance(19, 5128);
  EventAttemper::AddObserver(v54);
  v55 = operator new(4u);
  if ( v55 )
    *v55 = &GameClient::GS_Robot_Malice_ObjectObserver::`vftable';
  v56 = (EventAttemper *)EventAttemper::Instance(19, 5129);
  EventAttemper::AddObserver(v56);
  v57 = operator new(4u);
  if ( v57 )
    *v57 = &GameClient::GS_Robot_Malice_ObjectObserver::`vftable';
  v58 = (EventAttemper *)EventAttemper::Instance(19, 5130);
  EventAttemper::AddObserver(v58);
  v59 = operator new(4u);
  if ( v59 )
    *v59 = &GameClient::GS_Robot_Malice_ObjectObserver::`vftable';
  v60 = (EventAttemper *)EventAttemper::Instance(19, 5151);
  EventAttemper::AddObserver(v60);
  v61 = operator new(4u);
  if ( v61 )
    *v61 = &GameClient::GS_Robot_Malice_ObjectObserver::`vftable';
  v62 = (EventAttemper *)EventAttemper::Instance(19, 5133);
  EventAttemper::AddObserver(v62);
  v63 = operator new(4u);
  if ( v63 )
    *v63 = &GameClient::GS_Bullet_ObjectObserver::`vftable';
  v64 = (EventAttemper *)EventAttemper::Instance(19, 5150);
  EventAttemper::AddObserver(v64);
  v65 = operator new(4u);
  if ( v65 )
    *v65 = &GameClient::GS_Robot_Skill_ObjectObserver::`vftable';
  v66 = (EventAttemper *)EventAttemper::Instance(19, 5132);
  EventAttemper::AddObserver(v66);
  v67 = operator new(4u);
  if ( v67 )
    *v67 = &GameClient::GS_Equip_ObjectObserver::`vftable';
  v68 = (EventAttemper *)EventAttemper::Instance(19, 5161);
  EventAttemper::AddObserver(v68);
  v69 = operator new(4u);
  if ( v69 )
    *v69 = &GameClient::GS_Equip_ObjectObserver::`vftable';
  v70 = (EventAttemper *)EventAttemper::Instance(19, 5160);
  EventAttemper::AddObserver(v70);
  v71 = operator new(4u);
  if ( v71 )
    *v71 = &GameClient::GS_OpenBooty_ObjectObserver::`vftable';
  v72 = (EventAttemper *)EventAttemper::Instance(19, 5170);
  EventAttemper::AddObserver(v72);
  v73 = operator new(4u);
  if ( v73 )
    *v73 = &GameClient::GS_OpenBooty_ObjectObserver::`vftable';
  v74 = (EventAttemper *)EventAttemper::Instance(19, 5171);
  EventAttemper::AddObserver(v74);
  v75 = operator new(4u);
  if ( v75 )
    *v75 = &GameClient::GS_OpenBooty_ObjectObserver::`vftable';
  v76 = (EventAttemper *)EventAttemper::Instance(19, 5172);
  EventAttemper::AddObserver(v76);
  v77 = operator new(4u);
  if ( v77 )
    *v77 = &GameClient::GS_OpenBooty_ObjectObserver::`vftable';
  v78 = (EventAttemper *)EventAttemper::Instance(19, 5173);
  EventAttemper::AddObserver(v78);
  v79 = operator new(4u);
  if ( v79 )
    *v79 = &GameClient::GS_OpenBooty_ObjectObserver::`vftable';
  v80 = (EventAttemper *)EventAttemper::Instance(19, 5174);
  EventAttemper::AddObserver(v80);
  v81 = operator new(4u);
  if ( v81 )
    *v81 = &GameClient::GC_Robot_Action_ObjectObserver::`vftable';
  v82 = (EventAttemper *)EventAttemper::Instance(9, 4100);
  EventAttemper::AddObserver(v82);
  v83 = operator new(4u);
  if ( v83 )
    *v83 = &GameClient::GC_Robot_Action_ObjectObserver::`vftable';
  v84 = (EventAttemper *)EventAttemper::Instance(9, 4101);
  EventAttemper::AddObserver(v84);
  v85 = operator new(4u);
  if ( v85 )
    *v85 = &GameClient::GC_Robot_Action_ObjectObserver::`vftable';
  v86 = (EventAttemper *)EventAttemper::Instance(9, 4102);
  EventAttemper::AddObserver(v86);
  v87 = operator new(4u);
  if ( v87 )
    *v87 = &GameClient::GC_Robot_Action_ObjectObserver::`vftable';
  v88 = (EventAttemper *)EventAttemper::Instance(9, 4103);
  EventAttemper::AddObserver(v88);
  v89 = operator new(4u);
  if ( v89 )
    *v89 = &GameClient::GC_Robot_SystemPart_ObjectObserver::`vftable';
  v90 = (EventAttemper *)EventAttemper::Instance(9, 4104);
  EventAttemper::AddObserver(v90);
  v91 = operator new(4u);
  if ( v91 )
    *v91 = &GameClient::GC_Robot_SystemPart_ObjectObserver::`vftable';
  v92 = (EventAttemper *)EventAttemper::Instance(9, 4105);
  EventAttemper::AddObserver(v92);
  v93 = operator new(4u);
  if ( v93 )
    *v93 = &GameClient::GC_Robot_Survival_ObjectObserver::`vftable';
  v94 = (EventAttemper *)EventAttemper::Instance(9, 4106);
  EventAttemper::AddObserver(v94);
  v95 = operator new(4u);
  if ( v95 )
    *v95 = &GameClient::GC_Robot_Survival_ObjectObserver::`vftable';
  v96 = (EventAttemper *)EventAttemper::Instance(9, 4107);
  EventAttemper::AddObserver(v96);
  v97 = operator new(4u);
  if ( v97 )
    *v97 = &GameClient::GC_Robot_Survival_ObjectObserver::`vftable';
  v98 = (EventAttemper *)EventAttemper::Instance(9, 4109);
  EventAttemper::AddObserver(v98);
  v99 = operator new(4u);
  if ( v99 )
    *v99 = &GameClient::GC_Robot_Survival_ObjectObserver::`vftable';
  v100 = (EventAttemper *)EventAttemper::Instance(9, 4110);
  EventAttemper::AddObserver(v100);
  v101 = operator new(4u);
  if ( v101 )
    *v101 = &GameClient::GC_Robot_Board_ObjectObserver::`vftable';
  v102 = (EventAttemper *)EventAttemper::Instance(9, 4111);
  EventAttemper::AddObserver(v102);
  v103 = operator new(4u);
  if ( v103 )
    *v103 = &GameClient::GC_Robot_Board_ObjectObserver::`vftable';
  v104 = (EventAttemper *)EventAttemper::Instance(9, 4112);
  EventAttemper::AddObserver(v104);
  v105 = operator new(4u);
  if ( v105 )
    *v105 = &GameClient::GC_Robot_Skill_ObjectObserver::`vftable';
  v106 = (EventAttemper *)EventAttemper::Instance(9, 4113);
  EventAttemper::AddObserver(v106);
  v107 = operator new(4u);
  if ( v107 )
    *v107 = &GameClient::GC_Robot_Skill_ObjectObserver::`vftable';
  v108 = (EventAttemper *)EventAttemper::Instance(9, 4114);
  EventAttemper::AddObserver(v108);
  v109 = operator new(4u);
  if ( v109 )
    *v109 = &GameClient::GC_Robot_Skill_ObjectObserver::`vftable';
  v110 = (EventAttemper *)EventAttemper::Instance(9, 4115);
  EventAttemper::AddObserver(v110);
  v111 = operator new(4u);
  if ( v111 )
    *v111 = &GameClient::GC_Robot_Skill_ObjectObserver::`vftable';
  v112 = (EventAttemper *)EventAttemper::Instance(9, 4116);
  EventAttemper::AddObserver(v112);
  return 1;
}

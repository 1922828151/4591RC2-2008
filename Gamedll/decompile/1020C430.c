/*
 * func-name: sub_1020C430
 * func-address: 0x1020c430
 * callers: 0x10004615
 * callees: 0x1001302a
 */

char __thiscall sub_1020C430(int this)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax
  _DWORD *v4; // edx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // edx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // edx
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // edx
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // edx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // edx
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // edx
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // edx
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // edx
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  int v109; // edx
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // edx
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // edx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  int v130; // edx
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // edx
  int v138; // eax
  int v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // eax
  int v143; // eax
  int v144; // edx
  int v145; // eax
  int v146; // eax
  int v147; // eax
  int v148; // eax
  int v149; // eax
  int v150; // eax
  int v151; // edx
  int v152; // eax
  int v153; // eax
  int v154; // eax
  int v155; // eax
  int v156; // eax
  int v157; // eax
  int v158; // edx
  int v159; // eax
  int v160; // eax
  int v161; // eax
  int v162; // eax
  int v163; // eax
  int v164; // eax
  int v165; // edx
  int v166; // eax
  int v167; // eax
  int v168; // eax
  int v169; // eax
  int v170; // eax
  int v171; // eax
  int v172; // edx
  int v173; // eax
  int v174; // eax
  int v175; // eax
  int v176; // eax
  int v177; // eax
  int v178; // eax
  int v179; // edx
  int v180; // eax
  int v181; // eax
  int v182; // eax
  int v183; // eax
  int v184; // eax
  int v185; // edi
  int v186; // eax
  _DWORD v188[12]; // [esp+86Ch] [ebp-44h] BYREF
  _DWORD *ControlHandle; // [esp+89Ch] [ebp-14h]
  _DWORD *v190; // [esp+8A0h] [ebp-10h]
  int v191; // [esp+8ACh] [ebp-4h]

  v1 = this + 4;
  sub_1001302A((void *)(this + 4), 128, 0);
  ControlHandle = v188;
  std::string::string(v188, "fire");
  v191 = 0;
  v2 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v2);
  v3 = *(_DWORD *)(v1 + 4);
  if ( !v3 || !((*(_DWORD *)(v1 + 8) - v3) >> 2) )
    _invalid_parameter_noinfo();
  v4 = *(_DWORD **)(v1 + 4);
  v190 = v188;
  *v4 = ControlHandle;
  std::string::string(v188, "altfire");
  v191 = 1;
  v5 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v5);
  v6 = *(_DWORD *)(v1 + 4);
  if ( !v6 || (unsigned int)((*(_DWORD *)(v1 + 8) - v6) >> 2) <= 1 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "walk_forwards");
  v191 = 2;
  v7 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v7);
  v8 = *(_DWORD *)(v1 + 4);
  if ( !v8 || (unsigned int)((*(_DWORD *)(v1 + 8) - v8) >> 2) <= 2 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 8) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "walk_backwards");
  v191 = 3;
  v9 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v9);
  v10 = *(_DWORD *)(v1 + 4);
  if ( !v10 || (unsigned int)((*(_DWORD *)(v1 + 8) - v10) >> 2) <= 3 )
    _invalid_parameter_noinfo();
  v11 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v11 + 12) = ControlHandle;
  std::string::string(v188, "strafe_left");
  v191 = 4;
  v12 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v12);
  v13 = *(_DWORD *)(v1 + 4);
  if ( !v13 || (unsigned int)((*(_DWORD *)(v1 + 8) - v13) >> 2) <= 4 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 16) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "strafe_right");
  v191 = 5;
  v14 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v14);
  v15 = *(_DWORD *)(v1 + 4);
  if ( !v15 || (unsigned int)((*(_DWORD *)(v1 + 8) - v15) >> 2) <= 5 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 20) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "drive_forward");
  v191 = 6;
  v16 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v16);
  v17 = *(_DWORD *)(v1 + 4);
  if ( !v17 || (unsigned int)((*(_DWORD *)(v1 + 8) - v17) >> 2) <= 6 )
    _invalid_parameter_noinfo();
  v18 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v18 + 24) = ControlHandle;
  std::string::string(v188, "drive_backward");
  v191 = 7;
  v19 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v19);
  v20 = *(_DWORD *)(v1 + 4);
  if ( !v20 || (unsigned int)((*(_DWORD *)(v1 + 8) - v20) >> 2) <= 7 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 28) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "steer_left");
  v191 = 8;
  v21 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v21);
  v22 = *(_DWORD *)(v1 + 4);
  if ( !v22 || (unsigned int)((*(_DWORD *)(v1 + 8) - v22) >> 2) <= 8 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 32) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "steer_right");
  v191 = 9;
  v23 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v23);
  v24 = *(_DWORD *)(v1 + 4);
  if ( !v24 || (unsigned int)((*(_DWORD *)(v1 + 8) - v24) >> 2) <= 9 )
    _invalid_parameter_noinfo();
  v25 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v25 + 36) = ControlHandle;
  std::string::string(v188, "up");
  v191 = 10;
  v26 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v26);
  v27 = *(_DWORD *)(v1 + 4);
  if ( !v27 || (unsigned int)((*(_DWORD *)(v1 + 8) - v27) >> 2) <= 0xA )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 40) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "down");
  v191 = 11;
  v28 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v28);
  v29 = *(_DWORD *)(v1 + 4);
  if ( !v29 || (unsigned int)((*(_DWORD *)(v1 + 8) - v29) >> 2) <= 0xB )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 44) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "handbrake");
  v191 = 12;
  v30 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v30);
  v31 = *(_DWORD *)(v1 + 4);
  if ( !v31 || (unsigned int)((*(_DWORD *)(v1 + 8) - v31) >> 2) <= 0xE )
    _invalid_parameter_noinfo();
  v32 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v32 + 56) = ControlHandle;
  std::string::string(v188, "dovehicle");
  v191 = 13;
  v33 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v33);
  v34 = *(_DWORD *)(v1 + 4);
  if ( !v34 || (unsigned int)((*(_DWORD *)(v1 + 8) - v34) >> 2) <= 0xF )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 60) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "transform");
  v191 = 14;
  v35 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v35);
  v36 = *(_DWORD *)(v1 + 4);
  if ( !v36 || (unsigned int)((*(_DWORD *)(v1 + 8) - v36) >> 2) <= 0x10 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 64) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "engine_0");
  v191 = 15;
  v37 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v37);
  v38 = *(_DWORD *)(v1 + 4);
  if ( !v38 || (unsigned int)((*(_DWORD *)(v1 + 8) - v38) >> 2) <= 0x11 )
    _invalid_parameter_noinfo();
  v39 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v39 + 68) = ControlHandle;
  std::string::string(v188, "engine_1");
  v191 = 16;
  v40 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v40);
  v41 = *(_DWORD *)(v1 + 4);
  if ( !v41 || (unsigned int)((*(_DWORD *)(v1 + 8) - v41) >> 2) <= 0x12 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 72) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "engine_2");
  v191 = 17;
  v42 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v42);
  v43 = *(_DWORD *)(v1 + 4);
  if ( !v43 || (unsigned int)((*(_DWORD *)(v1 + 8) - v43) >> 2) <= 0x13 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 76) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "engine_3");
  v191 = 18;
  v44 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v44);
  v45 = *(_DWORD *)(v1 + 4);
  if ( !v45 || (unsigned int)((*(_DWORD *)(v1 + 8) - v45) >> 2) <= 0x14 )
    _invalid_parameter_noinfo();
  v46 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v46 + 80) = ControlHandle;
  std::string::string(v188, "engine_4");
  v191 = 19;
  v47 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v47);
  v48 = *(_DWORD *)(v1 + 4);
  if ( !v48 || (unsigned int)((*(_DWORD *)(v1 + 8) - v48) >> 2) <= 0x15 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 84) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "engine_5");
  v191 = 20;
  v49 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v49);
  v50 = *(_DWORD *)(v1 + 4);
  if ( !v50 || (unsigned int)((*(_DWORD *)(v1 + 8) - v50) >> 2) <= 0x16 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 88) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "engine_6");
  v191 = 21;
  v51 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v51);
  v52 = *(_DWORD *)(v1 + 4);
  if ( !v52 || (unsigned int)((*(_DWORD *)(v1 + 8) - v52) >> 2) <= 0x17 )
    _invalid_parameter_noinfo();
  v53 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v53 + 92) = ControlHandle;
  std::string::string(v188, "engine_7");
  v191 = 22;
  v54 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v54);
  v55 = *(_DWORD *)(v1 + 4);
  if ( !v55 || (unsigned int)((*(_DWORD *)(v1 + 8) - v55) >> 2) <= 0x18 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 96) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "engine_8");
  v191 = 23;
  v56 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v56);
  v57 = *(_DWORD *)(v1 + 4);
  if ( !v57 || (unsigned int)((*(_DWORD *)(v1 + 8) - v57) >> 2) <= 0x19 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 100) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "engine_9");
  v191 = 24;
  v58 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v58);
  v59 = *(_DWORD *)(v1 + 4);
  if ( !v59 || (unsigned int)((*(_DWORD *)(v1 + 8) - v59) >> 2) <= 0x1A )
    _invalid_parameter_noinfo();
  v60 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v60 + 104) = ControlHandle;
  std::string::string(v188, "openchat");
  v191 = 25;
  v61 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v61);
  v62 = *(_DWORD *)(v1 + 4);
  if ( !v62 || (unsigned int)((*(_DWORD *)(v1 + 8) - v62) >> 2) <= 0x1B )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 108) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "group_command_all");
  v191 = 26;
  v63 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v63);
  v64 = *(_DWORD *)(v1 + 4);
  if ( !v64 || (unsigned int)((*(_DWORD *)(v1 + 8) - v64) >> 2) <= 0x1C )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 112) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "group_command_2");
  v191 = 27;
  v65 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v65);
  v66 = *(_DWORD *)(v1 + 4);
  if ( !v66 || (unsigned int)((*(_DWORD *)(v1 + 8) - v66) >> 2) <= 0x1D )
    _invalid_parameter_noinfo();
  v67 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v67 + 116) = ControlHandle;
  std::string::string(v188, "group_command_3");
  v191 = 28;
  v68 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v68);
  v69 = *(_DWORD *)(v1 + 4);
  if ( !v69 || (unsigned int)((*(_DWORD *)(v1 + 8) - v69) >> 2) <= 0x1E )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 120) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "group_command_4");
  v191 = 29;
  v70 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v70);
  v71 = *(_DWORD *)(v1 + 4);
  if ( !v71 || (unsigned int)((*(_DWORD *)(v1 + 8) - v71) >> 2) <= 0x1F )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 124) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "group_command_5");
  v191 = 30;
  v72 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v72);
  v73 = *(_DWORD *)(v1 + 4);
  if ( !v73 || (unsigned int)((*(_DWORD *)(v1 + 8) - v73) >> 2) <= 0x20 )
    _invalid_parameter_noinfo();
  v74 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v74 + 128) = ControlHandle;
  std::string::string(v188, "group_command_6");
  v191 = 31;
  v75 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v75);
  v76 = *(_DWORD *)(v1 + 4);
  if ( !v76 || (unsigned int)((*(_DWORD *)(v1 + 8) - v76) >> 2) <= 0x21 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 132) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "group_command_7");
  v191 = 32;
  v77 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v77);
  v78 = *(_DWORD *)(v1 + 4);
  if ( !v78 || (unsigned int)((*(_DWORD *)(v1 + 8) - v78) >> 2) <= 0x22 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 136) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "group_command_8");
  v191 = 33;
  v79 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v79);
  v80 = *(_DWORD *)(v1 + 4);
  if ( !v80 || (unsigned int)((*(_DWORD *)(v1 + 8) - v80) >> 2) <= 0x23 )
    _invalid_parameter_noinfo();
  v81 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v81 + 140) = ControlHandle;
  std::string::string(v188, "group_command_9");
  v191 = 34;
  v82 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v82);
  v83 = *(_DWORD *)(v1 + 4);
  if ( !v83 || (unsigned int)((*(_DWORD *)(v1 + 8) - v83) >> 2) <= 0x24 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 144) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "group_command_10");
  v191 = 35;
  v84 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v84);
  v85 = *(_DWORD *)(v1 + 4);
  if ( !v85 || (unsigned int)((*(_DWORD *)(v1 + 8) - v85) >> 2) <= 0x25 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 148) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "bigmap");
  v191 = 36;
  v86 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v86);
  v87 = *(_DWORD *)(v1 + 4);
  if ( !v87 || (unsigned int)((*(_DWORD *)(v1 + 8) - v87) >> 2) <= 0x26 )
    _invalid_parameter_noinfo();
  v88 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v88 + 152) = ControlHandle;
  std::string::string(v188, "increaseradar");
  v191 = 37;
  v89 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v89);
  v90 = *(_DWORD *)(v1 + 4);
  if ( !v90 || (unsigned int)((*(_DWORD *)(v1 + 8) - v90) >> 2) <= 0x27 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 156) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "decreaseradar");
  v191 = 38;
  v91 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v91);
  v92 = *(_DWORD *)(v1 + 4);
  if ( !v92 || (unsigned int)((*(_DWORD *)(v1 + 8) - v92) >> 2) <= 0x28 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 160) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "GroupQuickCall");
  v191 = 39;
  v93 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v93);
  v94 = *(_DWORD *)(v1 + 4);
  if ( !v94 || (unsigned int)((*(_DWORD *)(v1 + 8) - v94) >> 2) <= 0x29 )
    _invalid_parameter_noinfo();
  v95 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v95 + 164) = ControlHandle;
  std::string::string(v188, "GroupQuickCall1");
  v191 = 40;
  v96 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v96);
  v97 = *(_DWORD *)(v1 + 4);
  if ( !v97 || (unsigned int)((*(_DWORD *)(v1 + 8) - v97) >> 2) <= 0x2A )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 168) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "GroupQuickCall2");
  v191 = 41;
  v98 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v98);
  v99 = *(_DWORD *)(v1 + 4);
  if ( !v99 || (unsigned int)((*(_DWORD *)(v1 + 8) - v99) >> 2) <= 0x2B )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 172) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "GroupQuickCall3");
  v191 = 42;
  v100 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v100);
  v101 = *(_DWORD *)(v1 + 4);
  if ( !v101 || (unsigned int)((*(_DWORD *)(v1 + 8) - v101) >> 2) <= 0x2C )
    _invalid_parameter_noinfo();
  v102 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v102 + 176) = ControlHandle;
  std::string::string(v188, "GroupQuickCall4");
  v191 = 43;
  v103 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v103);
  v104 = *(_DWORD *)(v1 + 4);
  if ( !v104 || (unsigned int)((*(_DWORD *)(v1 + 8) - v104) >> 2) <= 0x2D )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 180) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "GroupQuickCall5");
  v191 = 44;
  v105 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v105);
  v106 = *(_DWORD *)(v1 + 4);
  if ( !v106 || (unsigned int)((*(_DWORD *)(v1 + 8) - v106) >> 2) <= 0x2E )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 184) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "altfire");
  v191 = 45;
  v107 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v107);
  v108 = *(_DWORD *)(v1 + 4);
  if ( !v108 || (unsigned int)((*(_DWORD *)(v1 + 8) - v108) >> 2) <= 0x2F )
    _invalid_parameter_noinfo();
  v109 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v109 + 188) = ControlHandle;
  std::string::string(v188, "exitgame");
  v191 = 46;
  v110 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v110);
  v111 = *(_DWORD *)(v1 + 4);
  if ( !v111 || (unsigned int)((*(_DWORD *)(v1 + 8) - v111) >> 2) <= 0x30 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 192) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "changemousestatus");
  v191 = 47;
  v112 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v112);
  v113 = *(_DWORD *)(v1 + 4);
  if ( !v113 || (unsigned int)((*(_DWORD *)(v1 + 8) - v113) >> 2) <= 0x31 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 196) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "changeview");
  v191 = 48;
  v114 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v114);
  v115 = *(_DWORD *)(v1 + 4);
  if ( !v115 || (unsigned int)((*(_DWORD *)(v1 + 8) - v115) >> 2) <= 0x32 )
    _invalid_parameter_noinfo();
  v116 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v116 + 200) = ControlHandle;
  std::string::string(v188, "Stadia");
  v191 = 49;
  v117 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v117);
  v118 = *(_DWORD *)(v1 + 4);
  if ( !v118 || (unsigned int)((*(_DWORD *)(v1 + 8) - v118) >> 2) <= 0x33 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 204) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "zoomin");
  v191 = 50;
  v119 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v119);
  v120 = *(_DWORD *)(v1 + 4);
  if ( !v120 || (unsigned int)((*(_DWORD *)(v1 + 8) - v120) >> 2) <= 0x34 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 208) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "zoomout");
  v191 = 51;
  v121 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v121);
  v122 = *(_DWORD *)(v1 + 4);
  if ( !v122 || (unsigned int)((*(_DWORD *)(v1 + 8) - v122) >> 2) <= 0x35 )
    _invalid_parameter_noinfo();
  v123 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v123 + 212) = ControlHandle;
  std::string::string(v188, "doVehicle");
  v191 = 52;
  v124 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v124);
  v125 = *(_DWORD *)(v1 + 4);
  if ( !v125 || (unsigned int)((*(_DWORD *)(v1 + 8) - v125) >> 2) <= 0x36 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 216) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "TakeOff");
  v191 = 53;
  v126 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v126);
  v127 = *(_DWORD *)(v1 + 4);
  if ( !v127 || (unsigned int)((*(_DWORD *)(v1 + 8) - v127) >> 2) <= 0x37 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 220) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "QuickSwitch");
  v191 = 54;
  v128 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v128);
  v129 = *(_DWORD *)(v1 + 4);
  if ( !v129 || (unsigned int)((*(_DWORD *)(v1 + 8) - v129) >> 2) <= 0x38 )
    _invalid_parameter_noinfo();
  v130 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v130 + 224) = ControlHandle;
  std::string::string(v188, "HotKey1");
  v191 = 55;
  v131 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v131);
  v132 = *(_DWORD *)(v1 + 4);
  if ( !v132 || (unsigned int)((*(_DWORD *)(v1 + 8) - v132) >> 2) <= 0x39 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 228) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "HotKey2");
  v191 = 56;
  v133 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v133);
  v134 = *(_DWORD *)(v1 + 4);
  if ( !v134 || (unsigned int)((*(_DWORD *)(v1 + 8) - v134) >> 2) <= 0x3A )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 232) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "HotKey3");
  v191 = 57;
  v135 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v135);
  v136 = *(_DWORD *)(v1 + 4);
  if ( !v136 || (unsigned int)((*(_DWORD *)(v1 + 8) - v136) >> 2) <= 0x3B )
    _invalid_parameter_noinfo();
  v137 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v137 + 236) = ControlHandle;
  std::string::string(v188, "HotKey4");
  v191 = 58;
  v138 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v138);
  v139 = *(_DWORD *)(v1 + 4);
  if ( !v139 || (unsigned int)((*(_DWORD *)(v1 + 8) - v139) >> 2) <= 0x3C )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 240) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "HotKey5");
  v191 = 59;
  v140 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v140);
  v141 = *(_DWORD *)(v1 + 4);
  if ( !v141 || (unsigned int)((*(_DWORD *)(v1 + 8) - v141) >> 2) <= 0x3D )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 244) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "HotKey6");
  v191 = 60;
  v142 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v142);
  v143 = *(_DWORD *)(v1 + 4);
  if ( !v143 || (unsigned int)((*(_DWORD *)(v1 + 8) - v143) >> 2) <= 0x3E )
    _invalid_parameter_noinfo();
  v144 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v144 + 248) = ControlHandle;
  std::string::string(v188, "HotKey7");
  v191 = 61;
  v145 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v145);
  v146 = *(_DWORD *)(v1 + 4);
  if ( !v146 || (unsigned int)((*(_DWORD *)(v1 + 8) - v146) >> 2) <= 0x3F )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 252) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "HotKey8");
  v191 = 62;
  v147 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v147);
  v148 = *(_DWORD *)(v1 + 4);
  if ( !v148 || (unsigned int)((*(_DWORD *)(v1 + 8) - v148) >> 2) <= 0x40 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 256) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "HotKey9");
  v191 = 63;
  v149 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v149);
  v150 = *(_DWORD *)(v1 + 4);
  if ( !v150 || (unsigned int)((*(_DWORD *)(v1 + 8) - v150) >> 2) <= 0x41 )
    _invalid_parameter_noinfo();
  v151 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v151 + 260) = ControlHandle;
  std::string::string(v188, "fire");
  v191 = 64;
  v152 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v152);
  v153 = *(_DWORD *)(v1 + 4);
  if ( !v153 || (unsigned int)((*(_DWORD *)(v1 + 8) - v153) >> 2) <= 0x42 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 264) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "altfire");
  v191 = 65;
  v154 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v154);
  v155 = *(_DWORD *)(v1 + 4);
  if ( !v155 || (unsigned int)((*(_DWORD *)(v1 + 8) - v155) >> 2) <= 0x43 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 268) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "auto_walk");
  v191 = 66;
  v156 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v156);
  v157 = *(_DWORD *)(v1 + 4);
  if ( !v157 || (unsigned int)((*(_DWORD *)(v1 + 8) - v157) >> 2) <= 0x44 )
    _invalid_parameter_noinfo();
  v158 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v158 + 272) = ControlHandle;
  std::string::string(v188, "jump");
  v191 = 67;
  v159 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v159);
  v160 = *(_DWORD *)(v1 + 4);
  if ( !v160 || (unsigned int)((*(_DWORD *)(v1 + 8) - v160) >> 2) <= 0x45 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 276) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "squat");
  v191 = 68;
  v161 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v161);
  v162 = *(_DWORD *)(v1 + 4);
  if ( !v162 || (unsigned int)((*(_DWORD *)(v1 + 8) - v162) >> 2) <= 0x46 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 280) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "accelerate");
  v191 = 69;
  v163 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v163);
  v164 = *(_DWORD *)(v1 + 4);
  if ( !v164 || (unsigned int)((*(_DWORD *)(v1 + 8) - v164) >> 2) <= 0x47 )
    _invalid_parameter_noinfo();
  v165 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v165 + 284) = ControlHandle;
  std::string::string(v188, "armorSkill");
  v191 = 70;
  v166 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v166);
  v167 = *(_DWORD *)(v1 + 4);
  if ( !v167 || (unsigned int)((*(_DWORD *)(v1 + 8) - v167) >> 2) <= 0x48 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 288) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "suicide");
  v191 = 71;
  v168 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v168);
  v169 = *(_DWORD *)(v1 + 4);
  if ( !v169 || (unsigned int)((*(_DWORD *)(v1 + 8) - v169) >> 2) <= 0x49 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 292) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "use");
  v191 = 72;
  v170 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v170);
  v171 = *(_DWORD *)(v1 + 4);
  if ( !v171 || (unsigned int)((*(_DWORD *)(v1 + 8) - v171) >> 2) <= 0x4A )
    _invalid_parameter_noinfo();
  v172 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v172 + 296) = ControlHandle;
  std::string::string(v188, "driverseat");
  v191 = 73;
  v173 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v173);
  v174 = *(_DWORD *)(v1 + 4);
  if ( !v174 || (unsigned int)((*(_DWORD *)(v1 + 8) - v174) >> 2) <= 0x4B )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 300) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "prevseat");
  v191 = 74;
  v175 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v175);
  v176 = *(_DWORD *)(v1 + 4);
  if ( !v176 || (unsigned int)((*(_DWORD *)(v1 + 8) - v176) >> 2) <= 0x4C )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 304) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "nextseat");
  v191 = 75;
  v177 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v177);
  v178 = *(_DWORD *)(v1 + 4);
  if ( !v178 || (unsigned int)((*(_DWORD *)(v1 + 8) - v178) >> 2) <= 0x4D )
    _invalid_parameter_noinfo();
  v179 = *(_DWORD *)(v1 + 4);
  v190 = v188;
  *(_DWORD *)(v179 + 308) = ControlHandle;
  std::string::string(v188, "useestabskill");
  v191 = 76;
  v180 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v180);
  v181 = *(_DWORD *)(v1 + 4);
  if ( !v181 || (unsigned int)((*(_DWORD *)(v1 + 8) - v181) >> 2) <= 0x4E )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 312) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "infomation");
  v191 = 77;
  v182 = Input::Instance(v188[0]);
  ControlHandle = (_DWORD *)Input::GetControlHandle(v182);
  v183 = *(_DWORD *)(v1 + 4);
  if ( !v183 || (unsigned int)((*(_DWORD *)(v1 + 8) - v183) >> 2) <= 0x4F )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 316) = ControlHandle;
  v190 = v188;
  std::string::string(v188, "TakeScreenshot");
  v191 = 78;
  v184 = Input::Instance(v188[0]);
  v185 = Input::GetControlHandle(v184);
  v186 = *(_DWORD *)(v1 + 4);
  if ( !v186 || (unsigned int)((*(_DWORD *)(v1 + 8) - v186) >> 2) <= 0x50 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v1 + 4) + 320) = v185;
  return 1;
}

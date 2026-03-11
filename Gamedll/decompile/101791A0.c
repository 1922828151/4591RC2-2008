/*
 * func-name: ?UpdateInput@Robot@GameClient@@UAEXXZ_0
 * func-address: 0x101791a0
 * callers: 0x10001ec4
 * callees: 0x100024fa, 0x10002e37, 0x1000516e, 0x10006618, 0x10006802, 0x1000774d, 0x100077ed, 0x10007b58, 0x10008d0f, 0x1000a8f3, 0x1000ad76, 0x1000adc6, 0x1000b15e, 0x1000b7e4, 0x1000dafd, 0x1000db89, 0x1000e8db, 0x1000eafc, 0x10012c79, 0x10012cf1, 0x10013647, 0x10013d13, 0x1001465f, 0x10014669, 0x100155aa, 0x10015bef, 0x10016f95, 0x100174e0, 0x10018aca, 0x10018e71, 0x10018f25, 0x10019ccc, 0x102c0750, 0x102c0ed0, 0x102c1be0, 0x102c26d0, 0x102c9d62, 0x102c9d98, 0x102c9fe0
 */

void __thiscall GameClient::Robot::UpdateInput(GameClient::Robot *this)
{
  int v1; // eax
  int v3; // edx
  int v4; // esi
  int v5; // edx
  int v6; // esi
  int v7; // edx
  int v8; // esi
  int v9; // edx
  int v10; // esi
  int v11; // edx
  int v12; // esi
  int v13; // edx
  int v14; // esi
  int v15; // edx
  int v16; // esi
  int v17; // edx
  int v18; // esi
  int v19; // edx
  int v20; // esi
  int v21; // edx
  int v22; // esi
  int v23; // edx
  int v24; // esi
  int v25; // edx
  int v26; // esi
  int v27; // edx
  int v28; // esi
  int v29; // edx
  int v30; // esi
  int v31; // edx
  int v32; // esi
  int v33; // edx
  int v34; // esi
  int v35; // edx
  int v36; // esi
  int v37; // edx
  int v38; // esi
  int v39; // edx
  int v40; // esi
  int v41; // edx
  int v42; // esi
  int v43; // edx
  int v44; // esi
  int v45; // edx
  int v46; // esi
  int v47; // edx
  int v48; // esi
  int v49; // edx
  int v50; // esi
  int v51; // edx
  int v52; // esi
  int v53; // edx
  int v54; // esi
  int v55; // edx
  int v56; // esi
  int v57; // ecx
  int v58; // esi
  bool v59; // zf
  double v60; // st7
  Game *v61; // eax
  Input *v62; // eax
  _DWORD *v63; // eax
  int v64; // eax
  Input *v65; // eax
  int v66; // eax
  Input *v67; // eax
  GameClient::Equip *v68; // ecx
  int v69; // esi
  Input *v70; // eax
  int v71; // eax
  int v72; // ecx
  Input *v73; // eax
  int v74; // eax
  int *v75; // eax
  int v76; // edx
  int v77; // eax
  int v78; // ecx
  double v79; // st7
  int v80; // eax
  int v81; // eax
  int v82; // ecx
  Input *v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int *v88; // eax
  int v89; // edx
  int v90; // eax
  int v91; // ecx
  double v92; // st7
  Input *v93; // eax
  int v94; // eax
  int v95; // eax
  char *v96; // ebx
  Input *v97; // eax
  Input *v98; // eax
  int v99; // eax
  int v100; // eax
  GameClient::RobotBody *v101; // ecx
  int v102; // eax
  int v103; // eax
  GameClient::RobotBody *v104; // ecx
  GameClient::RobotArmor *v105; // ecx
  GameClient::RobotArmor *v106; // ecx
  Input *v107; // eax
  double v108; // st7
  int v109; // eax
  int (__stdcall *v110)(_DWORD); // esi
  Input *v111; // eax
  bool (__thiscall *v112)(Input *__hidden); // ebx
  int v113; // eax
  unsigned int v114; // eax
  Input *v115; // eax
  bool (__thiscall *v116)(Input *__hidden); // edi
  Input *v117; // eax
  Input *v118; // eax
  Input *v119; // eax
  Input *v120; // eax
  int v121; // eax
  double v122; // st7
  int v123; // eax
  Input *v124; // eax
  Input *v125; // eax
  int v126; // esi
  Input *v127; // eax
  Input *v128; // eax
  Input *v129; // eax
  Input *v130; // eax
  Input *v131; // eax
  Input *v132; // eax
  Input *v133; // eax
  Input *v134; // eax
  Input *v135; // eax
  Input *v136; // eax
  int v137; // ecx
  unsigned int v138; // ebx
  _DWORD *v139; // eax
  int v140; // ecx
  GameClient::EstabManager *v141; // eax
  struct GameClient::Establishment *Establishment; // eax
  int v143; // eax
  bool v144; // bl
  Input *v145; // eax
  Input *v146; // eax
  Input *v147; // eax
  Input *v148; // eax
  Input *v149; // eax
  GameClient::EstabManager *v150; // eax
  struct GameClient::Establishment *v151; // eax
  int v152; // ecx
  float *EyesLocation; // eax
  int v154; // edx
  int v155; // eax
  GameClient::EstabManager *v156; // eax
  struct GameClient::Establishment *v157; // eax
  unsigned int v158; // ecx
  int v159; // [esp+E4h] [ebp-1B0h]
  int v160; // [esp+ECh] [ebp-1A8h]
  int v161; // [esp+ECh] [ebp-1A8h]
  unsigned int v162; // [esp+ECh] [ebp-1A8h]
  unsigned int v163; // [esp+ECh] [ebp-1A8h]
  unsigned int v164; // [esp+ECh] [ebp-1A8h]
  int v165; // [esp+F0h] [ebp-1A4h]
  int v166; // [esp+F0h] [ebp-1A4h]
  float v167; // [esp+F0h] [ebp-1A4h]
  int v168; // [esp+F0h] [ebp-1A4h]
  int v169; // [esp+F0h] [ebp-1A4h]
  float v170; // [esp+F0h] [ebp-1A4h]
  int v171; // [esp+F4h] [ebp-1A0h]
  float v172; // [esp+104h] [ebp-190h] BYREF
  float Sensitivity; // [esp+108h] [ebp-18Ch]
  float v174; // [esp+10Ch] [ebp-188h] BYREF
  bool HasAnyGUIopen; // [esp+112h] [ebp-182h]
  char v176; // [esp+113h] [ebp-181h] BYREF
  unsigned int v177; // [esp+114h] [ebp-180h] BYREF
  int v178[2]; // [esp+118h] [ebp-17Ch] BYREF
  float v179; // [esp+120h] [ebp-174h]
  bool v180; // [esp+127h] [ebp-16Dh]
  float v181[2]; // [esp+128h] [ebp-16Ch] BYREF
  float v182; // [esp+130h] [ebp-164h]
  float v183; // [esp+134h] [ebp-160h] BYREF
  float v184; // [esp+138h] [ebp-15Ch]
  float v185; // [esp+13Ch] [ebp-158h]
  int v186; // [esp+140h] [ebp-154h] BYREF
  float v187; // [esp+144h] [ebp-150h]
  float v188; // [esp+148h] [ebp-14Ch]
  float v189[3]; // [esp+14Ch] [ebp-148h] BYREF
  int v190[4]; // [esp+158h] [ebp-13Ch] BYREF
  float v191[3]; // [esp+168h] [ebp-12Ch] BYREF
  _BYTE v192[12]; // [esp+174h] [ebp-120h] BYREF
  _BYTE v193[28]; // [esp+180h] [ebp-114h] BYREF
  _BYTE v194[76]; // [esp+19Ch] [ebp-F8h] BYREF
  unsigned int v195; // [esp+1E8h] [ebp-ACh]
  _DWORD v196[16]; // [esp+204h] [ebp-90h] BYREF
  _BYTE v197[16]; // [esp+244h] [ebp-50h] BYREF
  float v198; // [esp+254h] [ebp-40h]
  float v199; // [esp+258h] [ebp-3Ch]
  float v200; // [esp+25Ch] [ebp-38h]
  float v201; // [esp+260h] [ebp-34h]
  float v202; // [esp+264h] [ebp-30h]
  float v203; // [esp+268h] [ebp-2Ch]
  int v204; // [esp+290h] [ebp-4h]

  v1 = dword_103B67B4;
  if ( (dword_103B6130 & 1) == 0 )
  {
    v3 = *(_DWORD *)(dword_103B67B4 + 8);
    dword_103B6130 |= 1u;
    v4 = dword_103B67B4 + 8;
    if ( !v3 || (unsigned int)((*(_DWORD *)(dword_103B67B4 + 12) - v3) >> 2) <= 0x32 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B612C = *(_DWORD *)(*(_DWORD *)v4 + 200);
  }
  if ( (dword_103B6130 & 2) == 0 )
  {
    v5 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 2u;
    v6 = v1 + 8;
    if ( !v5 || (unsigned int)((*(_DWORD *)(v1 + 12) - v5) >> 2) <= 0x36 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B6128 = *(_DWORD *)(*(_DWORD *)v6 + 216);
  }
  if ( (dword_103B6130 & 4) == 0 )
  {
    v7 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 4u;
    v8 = v1 + 8;
    if ( !v7 || (unsigned int)((*(_DWORD *)(v1 + 12) - v7) >> 2) <= 0x37 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B6124 = *(_DWORD *)(*(_DWORD *)v8 + 220);
  }
  if ( (dword_103B6130 & 8) == 0 )
  {
    v9 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 8u;
    v10 = v1 + 8;
    if ( !v9 || (unsigned int)((*(_DWORD *)(v1 + 12) - v9) >> 2) <= 0x38 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B6120 = *(_DWORD *)(*(_DWORD *)v10 + 224);
  }
  if ( (dword_103B6130 & 0x10) == 0 )
  {
    v11 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x10u;
    v12 = v1 + 8;
    if ( !v11 || (unsigned int)((*(_DWORD *)(v1 + 12) - v11) >> 2) <= 0x39 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B611C = *(_DWORD *)(*(_DWORD *)v12 + 228);
  }
  if ( (dword_103B6130 & 0x20) == 0 )
  {
    v13 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x20u;
    v14 = v1 + 8;
    if ( !v13 || (unsigned int)((*(_DWORD *)(v1 + 12) - v13) >> 2) <= 0x3A )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B6118 = *(_DWORD *)(*(_DWORD *)v14 + 232);
  }
  if ( (dword_103B6130 & 0x40) == 0 )
  {
    v15 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x40u;
    v16 = v1 + 8;
    if ( !v15 || (unsigned int)((*(_DWORD *)(v1 + 12) - v15) >> 2) <= 0x3B )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B6114 = *(_DWORD *)(*(_DWORD *)v16 + 236);
  }
  if ( (dword_103B6130 & 0x80u) == 0 )
  {
    v17 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x80u;
    v18 = v1 + 8;
    if ( !v17 || (unsigned int)((*(_DWORD *)(v1 + 12) - v17) >> 2) <= 0x3C )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B6110 = *(_DWORD *)(*(_DWORD *)v18 + 240);
  }
  if ( (dword_103B6130 & 0x100) == 0 )
  {
    v19 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x100u;
    v20 = v1 + 8;
    if ( !v19 || (unsigned int)((*(_DWORD *)(v1 + 12) - v19) >> 2) <= 0x3D )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B610C = *(_DWORD *)(*(_DWORD *)v20 + 244);
  }
  if ( (dword_103B6130 & 0x200) == 0 )
  {
    v21 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x200u;
    v22 = v1 + 8;
    if ( !v21 || (unsigned int)((*(_DWORD *)(v1 + 12) - v21) >> 2) <= 0x3E )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B6108 = *(_DWORD *)(*(_DWORD *)v22 + 248);
  }
  if ( (dword_103B6130 & 0x400) == 0 )
  {
    v23 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x400u;
    v24 = v1 + 8;
    if ( !v23 || (unsigned int)((*(_DWORD *)(v1 + 12) - v23) >> 2) <= 0x3F )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B6104 = *(_DWORD *)(*(_DWORD *)v24 + 252);
  }
  if ( (dword_103B6130 & 0x800) == 0 )
  {
    v25 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x800u;
    v26 = v1 + 8;
    if ( !v25 || (unsigned int)((*(_DWORD *)(v1 + 12) - v25) >> 2) <= 0x40 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B6100 = *(_DWORD *)(*(_DWORD *)v26 + 256);
  }
  if ( (dword_103B6130 & 0x1000) == 0 )
  {
    v27 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x1000u;
    v28 = v1 + 8;
    if ( !v27 || (unsigned int)((*(_DWORD *)(v1 + 12) - v27) >> 2) <= 0x41 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60FC = *(_DWORD *)(*(_DWORD *)v28 + 260);
  }
  if ( (dword_103B6130 & 0x2000) == 0 )
  {
    v29 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x2000u;
    v30 = v1 + 8;
    if ( !v29 || (unsigned int)((*(_DWORD *)(v1 + 12) - v29) >> 2) <= 0x33 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60F8 = *(_DWORD *)(*(_DWORD *)v30 + 204);
  }
  if ( (dword_103B6130 & 0x4000) == 0 )
  {
    v31 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x4000u;
    v32 = v1 + 8;
    if ( !v31 || (unsigned int)((*(_DWORD *)(v1 + 12) - v31) >> 2) <= 0x44 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60F4 = *(_DWORD *)(*(_DWORD *)v32 + 272);
  }
  if ( (dword_103B6130 & 0x8000) == 0 )
  {
    v33 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x8000u;
    v34 = v1 + 8;
    if ( !v33 || (unsigned int)((*(_DWORD *)(v1 + 12) - v33) >> 2) <= 0x34 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60F0 = *(_DWORD *)(*(_DWORD *)v34 + 208);
  }
  if ( (dword_103B6130 & 0x10000) == 0 )
  {
    v35 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x10000u;
    v36 = v1 + 8;
    if ( !v35 || (unsigned int)((*(_DWORD *)(v1 + 12) - v35) >> 2) <= 0x35 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60EC = *(_DWORD *)(*(_DWORD *)v36 + 212);
  }
  if ( (dword_103B6130 & 0x20000) == 0 )
  {
    v37 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x20000u;
    v38 = v1 + 8;
    if ( !v37 || (unsigned int)((*(_DWORD *)(v1 + 12) - v37) >> 2) <= 0x45 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60E8 = *(_DWORD *)(*(_DWORD *)v38 + 276);
  }
  if ( (dword_103B6130 & 0x40000) == 0 )
  {
    v39 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x40000u;
    v40 = v1 + 8;
    if ( !v39 || (unsigned int)((*(_DWORD *)(v1 + 12) - v39) >> 2) <= 0x46 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60E4 = *(_DWORD *)(*(_DWORD *)v40 + 280);
  }
  if ( (dword_103B6130 & 0x80000) == 0 )
  {
    v41 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x80000u;
    v42 = v1 + 8;
    if ( !v41 || (unsigned int)((*(_DWORD *)(v1 + 12) - v41) >> 2) <= 2 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60E0 = *(_DWORD *)(*(_DWORD *)v42 + 8);
  }
  if ( (dword_103B6130 & 0x100000) == 0 )
  {
    v43 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x100000u;
    v44 = v1 + 8;
    if ( !v43 || (unsigned int)((*(_DWORD *)(v1 + 12) - v43) >> 2) <= 3 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60DC = *(_DWORD *)(*(_DWORD *)v44 + 12);
  }
  if ( (dword_103B6130 & 0x200000) == 0 )
  {
    v45 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x200000u;
    v46 = v1 + 8;
    if ( !v45 || (unsigned int)((*(_DWORD *)(v1 + 12) - v45) >> 2) <= 4 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60D8 = *(_DWORD *)(*(_DWORD *)v46 + 16);
  }
  if ( (dword_103B6130 & 0x400000) == 0 )
  {
    v47 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x400000u;
    v48 = v1 + 8;
    if ( !v47 || (unsigned int)((*(_DWORD *)(v1 + 12) - v47) >> 2) <= 5 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60D4 = *(_DWORD *)(*(_DWORD *)v48 + 20);
  }
  if ( (dword_103B6130 & 0x800000) == 0 )
  {
    v49 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x800000u;
    v50 = v1 + 8;
    if ( !v49 || (unsigned int)((*(_DWORD *)(v1 + 12) - v49) >> 2) <= 0x47 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60D0 = *(_DWORD *)(*(_DWORD *)v50 + 284);
  }
  if ( (dword_103B6130 & 0x1000000) == 0 )
  {
    v51 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x1000000u;
    v52 = v1 + 8;
    if ( !v51 || (unsigned int)((*(_DWORD *)(v1 + 12) - v51) >> 2) <= 0x48 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60CC = *(_DWORD *)(*(_DWORD *)v52 + 288);
  }
  if ( (dword_103B6130 & 0x2000000) == 0 )
  {
    v53 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x2000000u;
    v54 = v1 + 8;
    if ( !v53 || (unsigned int)((*(_DWORD *)(v1 + 12) - v53) >> 2) <= 0x49 )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60C8 = *(_DWORD *)(*(_DWORD *)v54 + 292);
  }
  if ( (dword_103B6130 & 0x4000000) == 0 )
  {
    v55 = *(_DWORD *)(v1 + 8);
    dword_103B6130 |= 0x4000000u;
    v56 = v1 + 8;
    if ( !v55 || (unsigned int)((*(_DWORD *)(v1 + 12) - v55) >> 2) <= 0x4A )
    {
      _invalid_parameter_noinfo();
      v1 = dword_103B67B4;
    }
    dword_103B60C4 = *(_DWORD *)(*(_DWORD *)v56 + 296);
  }
  if ( (dword_103B6130 & 0x8000000) == 0 )
  {
    dword_103B6130 |= 0x8000000u;
    v57 = *(_DWORD *)(v1 + 8);
    v58 = v1 + 8;
    if ( !v57 || (unsigned int)((*(_DWORD *)(v1 + 12) - v57) >> 2) <= 0x2F )
      _invalid_parameter_noinfo();
    dword_103B60C0 = *(_DWORD *)(*(_DWORD *)v58 + 188);
  }
  v59 = *((_DWORD *)this + 50) == 0;
  Sensitivity = GDeltaTime + *((float *)this + 42);
  v60 = Sensitivity;
  *((float *)this + 42) = Sensitivity;
  if ( !v59 && v60 > 5.0 )
  {
    *((float *)this + 42) = 0.0;
    sub_100077ED((int)&v177, 9, 44, COERCE_INT(0.0), 1, 512);
    v204 = 0;
    sub_10015BEF(GSeconds);
    j_nullsub_44((int)&v177);
    v204 = -1;
    if ( v177 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v177);
  }
  v177 = 0;
  v61 = Game::Instance();
  HasAnyGUIopen = Game::HasAnyGUIopen(v61);
  CDlgMgr::Instance();
  v180 = CTYDialog::m_iDialogCorruptAct > 0;
  v62 = (Input *)Input::Instance(dword_103B60C8);
  if ( Input::ControlJustPressed(v62) && !*((_DWORD *)this + 90) )
  {
    std::wstring::wstring(v193, L"ROBOT_SUICIDE_CONFIRM");
    v204 = 1;
    Precacher::GetText(v197, v193);
    LOBYTE(v204) = 3;
    std::wstring::~wstring(v193);
    v63 = operator new(4u);
    if ( v63 )
      *v63 = &GameClient::RobotSuicideConfirmCallback::`vftable';
    v64 = CDlgMgr::Instance();
    CDlgMgr::ConfirmMessage(v64);
    v204 = -1;
    std::wstring::~wstring(v197);
  }
  v65 = (Input *)Input::Instance(dword_103B60C4);
  if ( Input::ControlJustPressed(v65) )
  {
    v66 = EventAttemper::Instance(9, 4401);
    EventAttemper::AddEvent(v66);
  }
  if ( !*((_DWORD *)this + 90) )
  {
    if ( HasAnyGUIopen )
      goto LABEL_239;
    v67 = (Input *)Input::Instance(dword_103B612C);
    if ( Input::ControlJustPressed(v67) )
      GameClient::Robot::ChangeViewMode(this, *((_BYTE *)this + 700) == 0);
    v68 = (GameClient::Equip *)*((_DWORD *)this + 57);
    v69 = *((_DWORD *)this + 164);
    if ( v68 && (*((_DWORD *)this + 92) & 0x20) == 0 )
      v69 += GameClient::Equip::GetAddonStadiaLevel(v68);
    if ( *((_BYTE *)this + 700) )
    {
      v70 = (Input *)Input::Instance(dword_103B60F8);
      if ( Input::ControlJustPressed(v70) )
      {
        if ( *((_BYTE *)this + 700) )
        {
          v71 = *((_DWORD *)this + 165);
          if ( v71 < v69 )
          {
            v72 = *((_DWORD *)this + 276);
            *((_DWORD *)this + 165) = v71 + 1;
          }
          else
          {
            v72 = *((_DWORD *)this + 296);
            *((_DWORD *)this + 165) = 1;
          }
          if ( v72 )
            (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v72 + 36))(0, 0.75);
          LODWORD(Sensitivity) = 100 >> (*((_BYTE *)this + 660) - 1);
          *((float *)this + 167) = (float)SLODWORD(Sensitivity);
        }
      }
    }
    if ( (*((_DWORD *)this + 92) & 0x20) == 0 )
    {
      v73 = (Input *)Input::Instance(dword_103B60F0);
      if ( Input::ControlJustPressed(v73) )
      {
        if ( !*((_BYTE *)this + 700) )
        {
          v74 = *((_DWORD *)this + 49);
          if ( v74 )
          {
            if ( *(float *)(v74 + 120) <= (double)*((float *)this + 163) )
            {
              v75 = (int *)Input::Instance(v165);
              v76 = *v75;
              *(double *)v178 = *((float *)this + 163);
              v77 = (*(int (__thiscall **)(int *))(v76 + 80))(v75);
              v78 = *((_DWORD *)this + 49);
              Sensitivity = *(double *)v178 - (double)v77 * 0.00800000037997961;
              v79 = Sensitivity;
              *((float *)this + 163) = Sensitivity;
              if ( *(float *)(v78 + 120) > v79 )
              {
                *((float *)this + 163) = *(float *)(v78 + 120);
                GameClient::Robot::ChangeViewMode(this, 1);
              }
            }
          }
          goto LABEL_194;
        }
        if ( *((_DWORD *)this + 165) < v69 )
        {
          v80 = Input::Instance(v165);
          Sensitivity = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v80 + 80))(v80));
          dword_103B60BC = (int)((double)SLODWORD(Sensitivity) * 1.100000023841858 + (double)dword_103B60BC);
          if ( dword_103B60BC >= 500 )
          {
            v81 = ++*((_DWORD *)this + 165);
            dword_103B60BC = 0;
            if ( v81 > v69 )
              v81 = v69;
            v82 = *((_DWORD *)this + 276);
            *((_DWORD *)this + 165) = v81;
            LODWORD(Sensitivity) = 100 >> (v81 - 1);
            *((float *)this + 167) = (float)SLODWORD(Sensitivity);
            if ( v82 )
LABEL_180:
              (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)v82 + 36))(0, 0.75);
          }
        }
      }
      else
      {
        v83 = (Input *)Input::Instance(dword_103B60EC);
        if ( !Input::ControlJustPressed(v83) )
          goto LABEL_194;
        if ( *((_BYTE *)this + 700) )
        {
          v84 = Input::Instance(v165);
          Sensitivity = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v84 + 80))(v84));
          dword_103B60BC = (int)((double)SLODWORD(Sensitivity) * 1.100000023841858 + (double)dword_103B60BC);
          if ( dword_103B60BC <= -500 )
          {
            v85 = *((_DWORD *)this + 165);
            dword_103B60BC = 0;
            if ( v85 == 1 )
            {
              *((float *)this + 167) = 100.0;
              GameClient::Robot::ChangeViewMode(this, 0);
              goto LABEL_194;
            }
            v86 = v85 - 1;
            *((_DWORD *)this + 165) = v86;
            if ( v86 < 1 )
              v86 = 1;
            v82 = *((_DWORD *)this + 296);
            *((_DWORD *)this + 165) = v86;
            LODWORD(Sensitivity) = 100 >> (v86 - 1);
            *((float *)this + 167) = (float)SLODWORD(Sensitivity);
            if ( v82 )
              goto LABEL_180;
          }
        }
        else
        {
          v87 = *((_DWORD *)this + 49);
          if ( v87 )
          {
            if ( *(float *)(v87 + 116) > (double)*((float *)this + 163) )
            {
              v88 = (int *)Input::Instance(v165);
              v89 = *v88;
              *(double *)v178 = *((float *)this + 163);
              v90 = (*(int (__thiscall **)(int *))(v89 + 80))(v88);
              v91 = *((_DWORD *)this + 49);
              Sensitivity = *(double *)v178 - (double)v90 * 0.00800000037997961;
              v92 = Sensitivity;
              *((float *)this + 163) = Sensitivity;
              if ( *(float *)(v91 + 116) < v92 )
                *((float *)this + 163) = *(float *)(v91 + 116);
            }
          }
        }
      }
    }
LABEL_194:
    *((_BYTE *)this + 664) = !*((_BYTE *)this + 700)
                          && ((v93 = (Input *)Input::Instance(dword_103B60C0), Input::ControlDown(v93))
                           || *((_DWORD *)this + 90) == 2);
    if ( (dword_103B6130 & 0x10000000) == 0 )
    {
      dword_103B6130 |= 0x10000000u;
      v204 = 4;
      sub_10014669(&unk_103B6070);
      v204 = -1;
    }
    if ( *((_BYTE *)this + 664) )
    {
      sub_102C0ED0(&v186);
      v172 = v187;
      *(float *)&v178[1] = 0.0;
      v178[0] = v186;
      v179 = v188;
      sub_10014669(v197);
      v94 = Input::Instance(v165);
      Sensitivity = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v94 + 100))(v94)
                  * 0.004999999888241291
                  / (double)*((int *)this + 165);
      sub_102C26D0(0.0, Sensitivity, 0.0);
      v181[0] = 0.0;
      v181[1] = 0.0;
      v182 = 0.0;
      sub_102C1BE0(v178, v181);
      *(float *)&v178[1] = v172;
      *(float *)v178 = v181[0];
      v179 = v182;
      v95 = Input::Instance(v166);
      Sensitivity = (double)(*(int (__thiscall **)(int))(*(_DWORD *)v95 + 104))(v95)
                  * 0.004999999888241291
                  / (double)*((int *)this + 165);
      sub_102C26D0(Sensitivity, 0.0, 0.0);
      qmemcpy((char *)this + 588, (const void *)sub_10018E71(v196, (int)v178), 0x40u);
      qmemcpy((char *)this + 588, (const void *)sub_10018ACA(v196, (int)this + 588), 0x40u);
      goto LABEL_239;
    }
    if ( (*((_DWORD *)this + 92) & 0x20) != 0
      || (*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 4) )
    {
LABEL_239:
      if ( (*((_DWORD *)this + 92) & 0x20) != 0
        || (*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 4) )
      {
        v162 = *((_DWORD *)this + 70);
        v141 = GameClient::EstabManager::Instance();
        Establishment = GameClient::EstabManager::GetEstablishment(v141, v162);
        if ( Establishment )
          (*(void (__thiscall **)(struct GameClient::Establishment *, _DWORD))(*(_DWORD *)Establishment + 140))(
            Establishment,
            *((_DWORD *)this + 71));
LABEL_323:
        if ( (*((_DWORD *)this + 92) & 0x20) != 0 )
        {
          v143 = *((_DWORD *)this + 91);
          if ( v143 != 2 && v143 != 3 )
          {
            v144 = HasAnyGUIopen;
            goto LABEL_341;
          }
        }
        v144 = HasAnyGUIopen;
        if ( !HasAnyGUIopen )
        {
          v145 = (Input *)Input::Instance(dword_103B60D0);
          if ( Input::ControlJustPressed(v145) )
          {
            GameClient::Robot::SubmitLeadingSkill(this, 0, 1);
            goto LABEL_334;
          }
        }
        if ( !*((_DWORD *)this + 54) )
        {
          v146 = (Input *)Input::Instance(dword_103B60D0);
          if ( Input::ControlDown(v146) && !v144 )
            goto LABEL_334;
          GameClient::Robot::SubmitLeadingSkill(this, 0, 0);
        }
        if ( v144 )
        {
LABEL_336:
          if ( *((_DWORD *)this + 54) == 1 )
          {
            v148 = (Input *)Input::Instance(dword_103B60CC);
            if ( Input::ControlDown(v148) && !v144 )
            {
LABEL_342:
              v149 = (Input *)Input::Instance(dword_103B6128);
              if ( Input::ControlJustPressed(v149) )
              {
                if ( (*((_DWORD *)this + 92) & 0x20) != 0 )
                {
                  v163 = *((_DWORD *)this + 70);
                  v150 = GameClient::EstabManager::Instance();
                  v151 = GameClient::EstabManager::GetEstablishment(v150, v163);
                  if ( v151 )
                    (*(void (__thiscall **)(struct GameClient::Establishment *, _DWORD))(*(_DWORD *)v151 + 128))(
                      v151,
                      *((_DWORD *)this + 5));
                }
                else
                {
                  v152 = *((_DWORD *)this + 57);
                  if ( (!v152 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v152 + 168))(v152))
                    && (*((_DWORD *)this + 92) & 0x40) == 0
                    && !*((_DWORD *)this + 91)
                    && !*((_DWORD *)this + 88) )
                  {
                    EyesLocation = (float *)GameClient::Robot::GetEyesLocation(this);
                    v183 = *EyesLocation;
                    v184 = EyesLocation[1];
                    v185 = EyesLocation[2];
                    sub_102C0ED0(v191);
                    memset(&v190[1], 0, 12);
                    v154 = *((_DWORD *)this + 3);
                    v204 = 12;
                    v178[0] = v154;
                    sub_10002E37(v190, (int)v178);
                    CollisionInfo::CollisionInfo((CollisionInfo *)v194);
                    *(float *)v178 = v191[0] * 3.0;
                    Sensitivity = v191[1] * 3.0;
                    LOBYTE(v204) = 13;
                    v172 = 3.0 * v191[2];
                    *(float *)v178 = *(float *)v178 + v183;
                    Sensitivity = v184 + Sensitivity;
                    v172 = v185 + v172;
                    v189[0] = *(float *)v178;
                    v189[1] = Sensitivity;
                    v189[2] = v172;
                    v155 = NxPhysics::Instance(v190, &v183, v189, 3, v194);
                    if ( (unsigned __int8)NxPhysics::RayCast(v155) )
                    {
                      if ( v195 != -1 )
                      {
                        v164 = v195;
                        v156 = GameClient::EstabManager::Instance();
                        v157 = GameClient::EstabManager::GetEstablishment(v156, v164);
                        if ( v157 )
                          (*(void (__thiscall **)(struct GameClient::Establishment *, _DWORD))(*(_DWORD *)v157 + 112))(
                            v157,
                            *((_DWORD *)this + 5));
                      }
                    }
                    LOBYTE(v204) = 12;
                    CollisionInfo::~CollisionInfo((CollisionInfo *)v194);
                    v204 = -1;
                    sub_100174E0();
                  }
                }
              }
              goto LABEL_356;
            }
            GameClient::Robot::SubmitLeadingSkill(this, 1, 0);
          }
LABEL_341:
          if ( v144 )
            goto LABEL_356;
          goto LABEL_342;
        }
LABEL_334:
        v147 = (Input *)Input::Instance(dword_103B60CC);
        if ( Input::ControlJustPressed(v147) )
        {
          GameClient::Robot::SubmitLeadingSkill(this, 1, 1);
          goto LABEL_341;
        }
        goto LABEL_336;
      }
      if ( HasAnyGUIopen )
        goto LABEL_319;
      if ( (*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 2) )
      {
        v110 = Input::Instance;
      }
      else
      {
        v110 = Input::Instance;
        if ( !(*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 8) )
        {
          v111 = (Input *)Input::Instance(dword_103B60F4);
          v112 = Input::ControlJustPressed;
          if ( Input::ControlJustPressed(v111) )
          {
            v113 = *((_DWORD *)this + 92);
            if ( (v113 & 2) != 0 )
              v114 = v113 & 0xFFFFFFFD;
            else
              v114 = v113 | 2;
            *((_DWORD *)this + 92) = v114;
          }
          v115 = (Input *)Input::Instance(dword_103B60E0);
          v116 = Input::ControlDown;
          if ( Input::ControlDown(v115) )
            v177 = 1;
          v117 = (Input *)Input::Instance(dword_103B60DC);
          if ( Input::ControlDown(v117) )
            v177 |= 2u;
          v118 = (Input *)Input::Instance(dword_103B60D8);
          if ( Input::ControlDown(v118) )
            v177 |= 4u;
          v119 = (Input *)Input::Instance(dword_103B60D4);
          if ( Input::ControlDown(v119) )
            v177 |= 8u;
LABEL_260:
          if ( (*(unsigned __int8 (__thiscall **)(GameClient::Robot *, int))(*(_DWORD *)this + 52))(this, 8) )
            goto LABEL_319;
          if ( *((_DWORD *)this + 50) && GameClient::RobotBody::GetRobotType() == 1 && !*((_DWORD *)this + 91) )
          {
            v120 = (Input *)v110(dword_103B60E4);
            if ( v116(v120) )
            {
              if ( *((_DWORD *)this + 88) != 1 )
              {
                v121 = *((_DWORD *)this + 92);
                if ( (v121 & 0x80) != 0 && (v121 & 0x40) == 0 && *((_DWORD *)this + 54) == -1 )
                {
                  *((_DWORD *)this + 88) = 1;
                  GameClient::Robot::UpdatePhysicsController(this);
                  sub_100077ED((int)&v172, 9, 7, COERCE_INT(0.0), 1, 512);
                  v204 = 8;
                  v176 = 1;
                  sub_10006618((int)&v176);
                  j_nullsub_44((int)&v172);
                  v204 = -1;
                  if ( v172 != 0.0 )
                    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(v172));
                }
              }
            }
            else if ( *((_DWORD *)this + 88) == 1 )
            {
              sub_100155AA((int)this + 416);
              v199 = *((float *)this + 122);
              v122 = *((float *)this + 6) + v198;
              v204 = 9;
              v198 = v122;
              v199 = *((float *)this + 7) + v199;
              v200 = *((float *)this + 8) + v200;
              v201 = *((float *)this + 6) + v201;
              v202 = *((float *)this + 7) + v202;
              v203 = *((float *)this + 8) + v203;
              v123 = NxPhysics::Instance(v197, 3, 61734, v165, v171);
              if ( !(unsigned __int8)NxPhysics::CheckOverlapAABB(v123) )
              {
                *((_DWORD *)this + 88) = 0;
                GameClient::Robot::UpdatePhysicsController(this);
                sub_100077ED((int)&v172, 9, 7, COERCE_INT(0.0), 1, 512);
                LOBYTE(v204) = 10;
                v176 = 0;
                sub_10006618((int)&v176);
                j_nullsub_44((int)&v172);
                LOBYTE(v204) = 9;
                if ( v172 != 0.0 )
                  Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(v172));
              }
              v204 = -1;
              sub_102C0750(v197);
            }
          }
          v124 = (Input *)v110(dword_103B60E8);
          if ( v112(v124) && !*((_DWORD *)this + 88) && (*((_DWORD *)this + 92) & 0x80) != 0 )
            GameClient::Robot::Jump(this);
          if ( *((_DWORD *)this + 91) )
            goto LABEL_319;
          *(float *)&v174 = NAN;
          v125 = (Input *)v110(dword_103B6124);
          if ( v112(v125) )
          {
            *(float *)&v126 = 0.0;
            *(float *)&v174 = 0.0;
          }
          else
          {
            v127 = (Input *)v110(dword_103B6120);
            if ( v112(v127) )
            {
              v126 = *((int *)this + 59);
              v174 = v126;
            }
            else
            {
              v128 = (Input *)v110(dword_103B611C);
              if ( v112(v128) )
              {
                v126 = 1;
                v174 = 1;
              }
              else
              {
                v129 = (Input *)v110(dword_103B6118);
                if ( v112(v129) )
                {
                  v126 = 2;
                  v174 = 2;
                }
                else
                {
                  v130 = (Input *)v110(dword_103B6114);
                  if ( v112(v130) )
                  {
                    v126 = 3;
                    v174 = 3;
                  }
                  else
                  {
                    v131 = (Input *)v110(dword_103B6110);
                    if ( v112(v131) )
                    {
                      v126 = 4;
                      v174 = 4;
                    }
                    else
                    {
                      v132 = (Input *)v110(dword_103B610C);
                      if ( v112(v132) )
                      {
                        v126 = 5;
                        v174 = 5;
                      }
                      else
                      {
                        v133 = (Input *)v110(dword_103B6108);
                        if ( v112(v133) )
                        {
                          v126 = 6;
                          v174 = 6;
                        }
                        else
                        {
                          v134 = (Input *)v110(dword_103B6104);
                          if ( v112(v134) )
                          {
                            v126 = 7;
                            v174 = 7;
                          }
                          else
                          {
                            v135 = (Input *)v110(dword_103B6100);
                            if ( v112(v135) )
                            {
                              v126 = 8;
                              v174 = 8;
                            }
                            else
                            {
                              v136 = (Input *)v110(dword_103B60FC);
                              if ( v112(v136) )
                              {
                                v126 = 9;
                                v174 = 9;
                              }
                              else
                              {
                                v126 = v174;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v137 = *((_DWORD *)this + 57);
          if ( v137 )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v137 + 180))(v137) )
              goto LABEL_319;
            v126 = v174;
          }
          if ( *(float *)&v126 != NAN )
          {
            v138 = *((_DWORD *)this + 58);
            if ( v126 != v138 && v126 <= (unsigned int)sub_1000E8DB() && (*((_DWORD *)this + 92) & 0x20) == 0 )
            {
              if ( *(float *)&v126 == 0.0 )
              {
                if ( v138 >= sub_1000E8DB() )
                  goto LABEL_319;
LABEL_317:
                sub_100077ED((int)&v172, 9, 9, COERCE_INT(0.0), 1, 512);
                v204 = 11;
                sub_10006802((int)&v174);
                j_nullsub_44((int)&v172);
                v204 = -1;
                if ( v172 != 0.0 )
                  Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(v172));
                goto LABEL_319;
              }
              if ( v126 > 0 )
              {
                if ( *(_DWORD *)sub_10012CF1(v126 - 1) )
                {
                  v139 = (_DWORD *)sub_10012CF1(v174 - 1);
                  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v139 + 180))(*v139) )
                    goto LABEL_317;
                }
              }
            }
          }
LABEL_319:
          v140 = *((_DWORD *)this + 57);
          if ( v140 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v140 + 108))(v140);
          goto LABEL_323;
        }
        v177 = 1;
      }
      v112 = Input::ControlJustPressed;
      v116 = Input::ControlDown;
      goto LABEL_260;
    }
    v96 = (char *)this + 36;
    sub_102C0ED0(&v186);
    sub_10014669(v197);
    v97 = (Input *)Input::Instance(v165);
    Sensitivity = Input::GetSensitivity(v97);
    v172 = (float)(1 << (*((_BYTE *)this + 660) - 1));
    *(float *)&v174 = v172 * (v172 * Sensitivity);
    v98 = (Input *)Input::Instance(v174);
    Input::SetSensitivity(v98, v167);
    v99 = Input::Instance(v168);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v99 + 104))(v99) )
    {
      v100 = Input::Instance(v169);
      *(float *)&v174 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v100 + 104))(v100));
      v101 = (GameClient::RobotBody *)*((_DWORD *)this + 50);
      *(float *)&v174 = (double)v174 * 0.004999999888241291 / v172 / v172;
      if ( v101 && GameClient::RobotBody::GetAngleTurnV(v101) != -1 )
      {
        *(float *)v178 = (double)GameClient::RobotBody::GetAngleTurnV(*((GameClient::RobotBody **)this + 50))
                       * 3.141592741012573
                       / 180.0
                       * GDeltaTime;
        if ( *(float *)v178 >= (double)*(float *)&v174 )
        {
          *(float *)v178 = -*(float *)v178;
          if ( *(float *)v178 > (double)*(float *)&v174 )
            v174 = v178[0];
        }
        else
        {
          v174 = v178[0];
        }
      }
      flt_103B606C = flt_103B606C + *(float *)&v174;
    }
    v102 = Input::Instance(v169);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v102 + 100))(v102) )
    {
      v187 = 0.0;
      v103 = Input::Instance(LODWORD(v170));
      v178[0] = (*(int (__thiscall **)(int))(*(_DWORD *)v103 + 100))(v103);
      v104 = (GameClient::RobotBody *)*((_DWORD *)this + 50);
      *(float *)&v174 = (double)v178[0] * 0.004999999888241291 / v172 / v172;
      if ( v104 && GameClient::RobotBody::GetAngleTurnU(v104) != -1 )
      {
        *(float *)v178 = (double)GameClient::RobotBody::GetAngleTurnU(*((GameClient::RobotBody **)this + 50))
                       * 3.141592741012573
                       / 180.0
                       * GDeltaTime;
        if ( *(float *)v178 >= (double)*(float *)&v174 )
        {
          *(float *)v178 = -*(float *)v178;
          if ( *(float *)v178 > (double)*(float *)&v174 )
            v174 = v178[0];
        }
        else
        {
          v174 = v178[0];
        }
      }
      flt_103B6068 = flt_103B6068 + *(float *)&v174;
    }
    flt_103B606C = *((float *)this + 168) + flt_103B606C;
    flt_103B6068 = *((float *)this + 169) + flt_103B6068;
    *((float *)this + 170) = 0.0;
    *((float *)this + 169) = 0.0;
    *((float *)this + 168) = 0.0;
    v105 = (GameClient::RobotArmor *)*((_DWORD *)this + 51);
    if ( v105 )
    {
      v178[0] = GameClient::RobotArmor::GetAngleUp(v105);
      v106 = (GameClient::RobotArmor *)*((_DWORD *)this + 51);
      v172 = (double)v178[0] * 3.141592741012573 / 180.0;
      *(float *)&v174 = (double)GameClient::RobotArmor::GetAngleDown(v106) * 3.141592741012573 / 180.0;
      *(float *)v178 = -v172;
      if ( *(float *)v178 <= (double)flt_103B606C )
      {
        if ( *(float *)&v174 < (double)flt_103B606C )
          flt_103B606C = *(float *)&v174;
      }
      else
      {
        flt_103B606C = *(float *)v178;
      }
    }
    sub_102C26D0(flt_103B606C, flt_103B6068, 0.0);
    (*(void (__thiscall **)(GameClient::Robot *, _BYTE *))(*(_DWORD *)this + 40))(this, v197);
    v107 = (Input *)Input::Instance(LODWORD(Sensitivity));
    Input::SetSensitivity(v107, v170);
    v108 = flt_103AFF60;
    if ( flt_103AFF60 > 0.0 )
    {
      v108 = v108 - GDeltaTime;
      flt_103AFF60 = v108;
    }
    sub_102C0ED0(v192);
    sub_102C0ED0(v181);
    sub_1000EAFC((int)v181);
    *(float *)v178 = v108;
    if ( *(float *)v178 <= 0.52359879 )
    {
      if ( *(float *)v178 <= 0.087266468 )
        goto LABEL_239;
      if ( flt_103AFF60 > 0.0 )
        goto LABEL_239;
      flt_103AFF60 = 1.0;
      qmemcpy(&unk_103B6070, v96, 0x40u);
      if ( !*((_DWORD *)this + 89) )
        goto LABEL_239;
      *((float *)this + 196) = 0.0;
      *((float *)this + 197) = 0.0;
      sub_100077ED((int)&v172, 9, 5, COERCE_INT(0.0), 1, 512);
      v204 = 7;
      v161 = sub_102C0ED0(v189);
      sub_1000B7E4(v161);
    }
    else
    {
      flt_103AFF60 = 1.0;
      qmemcpy(&unk_103B6070, v96, 0x40u);
      *((float *)this + 196) = 0.0;
      *((float *)this + 197) = 0.0;
      *(float *)&v159 = 0.0;
      if ( !*((_DWORD *)this + 89) )
      {
        sub_100077ED((int)&v172, 9, 5, v159, 1, 512);
        v204 = 5;
        v109 = sub_102C0ED0(v189);
        sub_1000B7E4(v109);
        j_nullsub_44((int)&v172);
        goto LABEL_233;
      }
      sub_100077ED((int)&v172, 9, 4, v159, 1, 512);
      v204 = 6;
      v160 = sub_102C0ED0(v189);
      sub_10018F25((int)this + 744);
      sub_1000B7E4((int)this + 24);
      sub_1000B7E4(v160);
    }
    j_nullsub_44((int)&v172);
LABEL_233:
    v204 = -1;
    if ( v172 != 0.0 )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LODWORD(v172));
    goto LABEL_239;
  }
LABEL_356:
  v158 = v177;
  if ( (*((_DWORD *)this + 92) & 2) != 0 )
  {
    if ( v177 || v180 )
      *((_DWORD *)this + 92) &= ~2u;
    else
      v158 = 1;
  }
  GameClient::Robot::Move(this, v158);
}

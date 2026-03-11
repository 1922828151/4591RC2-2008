/*
 * func-name: sub_10038920
 * func-address: 0x10038920
 * callers: 0x100120f3
 * callees: 0x10004755, 0x10004bfb, 0x1000516e, 0x10005943, 0x100081b6, 0x10008be3, 0x10008f12, 0x10009b10, 0x1000a9de, 0x1000bba4, 0x1000d51c, 0x1000db75, 0x1000f84e, 0x10010820, 0x100112c5, 0x10014385, 0x10014a92, 0x10015d9d, 0x10016a4f, 0x10017b7f, 0x100180b6, 0x1001a0f5, 0x102c9d62, 0x102c9d98, 0x102c9ea8
 */

void __stdcall sub_10038920(int a1)
{
  unsigned __int8 (__cdecl *v1)(_BYTE *, const char *); // edi
  _DWORD *v2; // esi
  int v3; // ebx
  _DWORD *v4; // edi
  int v5; // edi
  struct Game *v6; // eax
  _BYTE *v7; // ecx
  char v8; // al
  int v9; // eax
  int v10; // eax
  char v11; // bl
  const char *v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // bl
  struct Game *v16; // eax
  _BYTE *v17; // ecx
  int v18; // edx
  int v19; // eax
  struct Game *v20; // eax
  const char *v21; // eax
  _DWORD *v22; // esi
  int v23; // ebx
  _DWORD *v24; // edi
  struct Game *v25; // eax
  const char *v26; // eax
  const char *v27; // eax
  _DWORD *v28; // esi
  int v29; // ebx
  _DWORD *v30; // edi
  struct Game *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  _DWORD *v34; // esi
  int v35; // edi
  _DWORD *v36; // ebx
  int v37; // eax
  int v38; // edx
  struct Game *v39; // eax
  _DWORD *v40; // esi
  int v41; // edi
  _DWORD *v42; // ebx
  int v43; // eax
  struct Game *v44; // eax
  unsigned __int8 v45; // bl
  const char *v46; // eax
  const char *v47; // eax
  _DWORD *v48; // esi
  int v49; // ebx
  _DWORD *v50; // edi
  struct Game *v51; // eax
  const char *v52; // eax
  int v53; // eax
  char v54; // si
  int v55; // eax
  int v56; // eax
  int v57; // edi
  const char *v58; // eax
  const char *v59; // eax
  struct Game *v60; // eax
  int v61; // ebx
  struct Game *v62; // eax
  const char *v63; // eax
  const char *v64; // eax
  struct Game *v65; // eax
  const char *v66; // eax
  struct Game *v67; // eax
  struct Game *v68; // eax
  int v69; // eax
  int v70; // eax
  char v71; // bl
  const char *v72; // eax
  int v73; // eax
  int v74; // eax
  char v75; // bl
  struct Game *v76; // eax
  struct Game *v77; // eax
  struct Game *v78; // eax
  struct Game *v79; // eax
  int v80; // [esp-4h] [ebp-1A0h]
  double v81; // [esp+0h] [ebp-19Ch]
  double v82; // [esp+0h] [ebp-19Ch]
  int v83; // [esp+4h] [ebp-198h]
  int v84; // [esp+4h] [ebp-198h]
  double v85; // [esp+8h] [ebp-194h]
  double v86; // [esp+8h] [ebp-194h]
  double v87; // [esp+8h] [ebp-194h]
  int v88; // [esp+Ch] [ebp-190h]
  int v89; // [esp+10h] [ebp-18Ch]
  double v90; // [esp+10h] [ebp-18Ch]
  double v91; // [esp+10h] [ebp-18Ch]
  double v92; // [esp+10h] [ebp-18Ch]
  const char *v93; // [esp+14h] [ebp-188h]
  int v94; // [esp+14h] [ebp-188h]
  int v95; // [esp+14h] [ebp-188h]
  int v96; // [esp+14h] [ebp-188h]
  int v97; // [esp+18h] [ebp-184h]
  int v98; // [esp+1Ch] [ebp-180h]
  float v99; // [esp+54h] [ebp-148h]
  float v100; // [esp+54h] [ebp-148h]
  float v101; // [esp+54h] [ebp-148h]
  int v102; // [esp+54h] [ebp-148h]
  float v103; // [esp+54h] [ebp-148h]
  float v104; // [esp+58h] [ebp-144h]
  float v105; // [esp+58h] [ebp-144h]
  float v106; // [esp+58h] [ebp-144h]
  int v107; // [esp+58h] [ebp-144h]
  void *v108; // [esp+5Ch] [ebp-140h] BYREF
  float v109; // [esp+60h] [ebp-13Ch]
  float v110; // [esp+64h] [ebp-138h]
  int v111; // [esp+68h] [ebp-134h] BYREF
  int v112; // [esp+6Ch] [ebp-130h]
  int v113; // [esp+70h] [ebp-12Ch]
  int v114; // [esp+74h] [ebp-128h]
  _BYTE v115[28]; // [esp+78h] [ebp-124h] BYREF
  _BYTE v116[28]; // [esp+94h] [ebp-108h] BYREF
  _BYTE v117[28]; // [esp+B0h] [ebp-ECh] BYREF
  _BYTE v118[28]; // [esp+CCh] [ebp-D0h] BYREF
  _BYTE v119[28]; // [esp+E8h] [ebp-B4h] BYREF
  _BYTE v120[28]; // [esp+104h] [ebp-98h] BYREF
  int v121; // [esp+120h] [ebp-7Ch] BYREF
  int v122; // [esp+124h] [ebp-78h]
  int v123; // [esp+128h] [ebp-74h]
  int v124; // [esp+12Ch] [ebp-70h]
  _BYTE v125[28]; // [esp+13Ch] [ebp-60h] BYREF
  int v126; // [esp+198h] [ebp-4h]

  std::string::string(v115, a1);
  v126 = 0;
  sub_10005943(v119, v115);
  v1 = (unsigned __int8 (__cdecl *)(_BYTE *, const char *))std::operator==<char>;
  LOBYTE(v126) = 1;
  if ( !(unsigned __int8)std::operator==<char>(v119, &unk_1030A0E2) )
  {
    if ( (unsigned __int8)std::operator==<char>(v119, "list") )
    {
      sub_10005943(v116, v115);
      LOBYTE(v126) = 2;
      if ( (unsigned __int8)std::operator==<char>(v116, "char") )
      {
        v2 = **(_DWORD ***)(dword_103B6670 + 56);
        v3 = dword_103B6670 + 52;
        while ( 1 )
        {
          v4 = *(_DWORD **)(dword_103B6670 + 56);
          if ( v3 != dword_103B6670 + 52 )
            _invalid_parameter_noinfo();
          if ( v2 == v4 )
            break;
          if ( v2 == *(_DWORD **)(v3 + 4) )
            _invalid_parameter_noinfo();
          v5 = v2[3];
          v93 = (const char *)std::string::c_str(v5 + 8);
          v89 = *(_DWORD *)(v5 + 4);
          v6 = Game::Instance();
          GUIConsole::Printf(*((GUIConsole **)v6 + 26), "AICharacter ID %d  Name %s online", v89, v93);
          if ( v2 == *(_DWORD **)(v3 + 4) )
            _invalid_parameter_noinfo();
          v2 = (_DWORD *)*v2;
        }
      }
      v7 = v116;
      goto LABEL_152;
    }
    if ( (unsigned __int8)std::operator==<char>(v119, "char") )
    {
      sub_10005943(v125, v115);
      LOBYTE(v126) = 3;
      v8 = std::operator==<char>(v125, &unk_1030A0E3);
      v7 = v125;
      if ( v8 )
      {
LABEL_152:
        LOBYTE(v126) = 1;
        std::string::~string(v7);
        goto LABEL_153;
      }
      if ( (unsigned __int8)std::operator==<char>(v125, "all") )
      {
        sub_10005943(v120, v115);
        LOBYTE(v126) = 4;
        if ( (unsigned __int8)std::operator==<char>(v120, "reborn") )
        {
          v122 = 0;
          v123 = 0;
          v124 = 0;
          LOBYTE(v126) = 5;
          std::string::string(v116);
          LOBYTE(v126) = 6;
          v9 = sub_10005943(v117, v115);
          LOBYTE(v126) = 7;
          v10 = std::string::operator=(v116, v9);
          v11 = std::operator!=<char>(v10, &unk_1030A0F5);
          LOBYTE(v126) = 6;
          std::string::~string(v117);
          if ( v11 )
          {
            do
            {
              v12 = (const char *)std::string::c_str(v116);
              *(float *)&v111 = COERCE_FLOAT(atoi(v12));
              if ( *(float *)&v111 == 0.0 )
                break;
              sub_1001A0F5(&v121, (int)&v111);
              v13 = sub_10005943(v117, v115);
              LOBYTE(v126) = 7;
              v14 = std::string::operator=(v116, v13);
              v15 = std::operator!=<char>(v14, &unk_1030A0F5);
              LOBYTE(v126) = 6;
              std::string::~string(v117);
            }
            while ( v15 );
          }
          if ( !v122 || !((v123 - v122) >> 2) )
          {
            v16 = Game::Instance();
            GUIConsole::Printf(*((GUIConsole **)v16 + 26), "bad equipment list");
            LOBYTE(v126) = 5;
            std::string::~string(v116);
            sub_1000D51C();
            v17 = v120;
LABEL_151:
            LOBYTE(v126) = 3;
            std::string::~string(v17);
            v7 = v125;
            goto LABEL_152;
          }
          v109 = **(float **)(dword_103B6670 + 56);
          v108 = (void *)(dword_103B6670 + 52);
          while ( 1 )
          {
            v18 = *(_DWORD *)(dword_103B6670 + 56);
            v111 = dword_103B6670 + 52;
            v112 = v18;
            if ( !(unsigned __int8)sub_1000BBA4((int)&v111) )
              break;
            v19 = sub_10004755();
            if ( _RTDynamicCast(
                   *(_DWORD *)(*(_DWORD *)(v19 + 4) + 296),
                   0,
                   &GameClient::ControlModule `RTTI Type Descriptor',
                   &GameClient::AISingleBrain `RTTI Type Descriptor',
                   0) )
            {
              sub_100112C5((int)&v121);
              v94 = *(_DWORD *)(*(_DWORD *)(sub_10004755() + 4) + 4);
              v20 = Game::Instance();
              GUIConsole::Printf(*((GUIConsole **)v20 + 26), "AICharacter %d begin get equipment", v94);
            }
            sub_10008BE3();
          }
          LOBYTE(v126) = 5;
          std::string::~string(v116);
          LOBYTE(v126) = 4;
          sub_1000D51C();
          v1 = (unsigned __int8 (__cdecl *)(_BYTE *, const char *))std::operator==<char>;
        }
        if ( v1(v120, "wander") )
        {
          sub_10005943(v117, v115);
          LOBYTE(v126) = 8;
          v21 = (const char *)std::string::c_str(v117);
          v104 = atof(v21);
          v22 = **(_DWORD ***)(dword_103B6670 + 56);
          v23 = dword_103B6670 + 52;
          v108 = (void *)(dword_103B6670 + 52);
          while ( 1 )
          {
            v24 = *(_DWORD **)(dword_103B6670 + 56);
            v109 = *(float *)&v22;
            if ( v23 != dword_103B6670 + 52 )
              _invalid_parameter_noinfo();
            if ( v22 == v24 )
              break;
            if ( v22 == *(_DWORD **)(v23 + 4) )
              _invalid_parameter_noinfo();
            if ( _RTDynamicCast(
                   *(_DWORD *)(v22[3] + 296),
                   0,
                   &GameClient::ControlModule `RTTI Type Descriptor',
                   &GameClient::AISingleBrain `RTTI Type Descriptor',
                   0) )
            {
              sub_10014A92(v104);
              v88 = *(_DWORD *)(*(_DWORD *)(sub_10004755() + 4) + 4);
              v25 = Game::Instance();
              GUIConsole::Printf(*((GUIConsole **)v25 + 26), "AICharacter %d begin wander range %f", v88, v104);
            }
            if ( v22 == *(_DWORD **)(v23 + 4) )
              _invalid_parameter_noinfo();
            v22 = (_DWORD *)*v22;
          }
          LOBYTE(v126) = 4;
          std::string::~string(v117);
          v1 = (unsigned __int8 (__cdecl *)(_BYTE *, const char *))std::operator==<char>;
        }
        if ( v1(v120, "randommove") )
        {
          sub_10005943(v116, v115);
          LOBYTE(v126) = 9;
          v26 = (const char *)std::string::c_str(v116);
          v99 = atof(v26);
          sub_10005943(v117, v115);
          LOBYTE(v126) = 10;
          v27 = (const char *)std::string::c_str(v117);
          *(float *)&v111 = atof(v27);
          v28 = **(_DWORD ***)(dword_103B6670 + 56);
          v29 = dword_103B6670 + 52;
          while ( 1 )
          {
            v30 = *(_DWORD **)(dword_103B6670 + 56);
            if ( v29 != dword_103B6670 + 52 )
              _invalid_parameter_noinfo();
            if ( v28 == v30 )
              break;
            if ( v28 == *(_DWORD **)(v29 + 4) )
              _invalid_parameter_noinfo();
            if ( _RTDynamicCast(
                   *(_DWORD *)(v28[3] + 296),
                   0,
                   &GameClient::ControlModule `RTTI Type Descriptor',
                   &GameClient::AISingleBrain `RTTI Type Descriptor',
                   0) )
            {
              sub_1000DB75((int)&v108, v99, *(float *)&v111);
              if ( v28 == *(_DWORD **)(v29 + 4) )
                _invalid_parameter_noinfo();
              v90 = v110;
              v85 = v109;
              v81 = *(float *)&v108;
              v80 = *(_DWORD *)(v28[3] + 4);
              v31 = Game::Instance();
              GUIConsole::Printf(
                *((GUIConsole **)v31 + 26),
                "AICharacter %d move to location x %f y %f z %f",
                v80,
                v81,
                v85,
                v90);
            }
            if ( v28 == *(_DWORD **)(v29 + 4) )
              _invalid_parameter_noinfo();
            v28 = (_DWORD *)*v28;
          }
          LOBYTE(v126) = 9;
          std::string::~string(v117);
          LOBYTE(v126) = 4;
          std::string::~string(v116);
          v1 = (unsigned __int8 (__cdecl *)(_BYTE *, const char *))std::operator==<char>;
        }
        if ( v1(v120, "freeattack") )
        {
          sub_10005943(v116, v115);
          LOBYTE(v126) = 11;
          sub_10005943(v117, v115);
          LOBYTE(v126) = 12;
          v32 = (const char *)std::string::c_str(v116);
          v105 = atof(v32);
          v33 = (const char *)std::string::c_str(v117);
          v100 = atof(v33);
          v34 = **(_DWORD ***)(dword_103B6670 + 56);
          v35 = dword_103B6670 + 52;
          while ( 1 )
          {
            v36 = *(_DWORD **)(dword_103B6670 + 56);
            if ( v35 != dword_103B6670 + 52 )
              _invalid_parameter_noinfo();
            if ( v34 == v36 )
              break;
            if ( v34 == *(_DWORD **)(v35 + 4) )
              _invalid_parameter_noinfo();
            v37 = _RTDynamicCast(
                    *(_DWORD *)(v34[3] + 296),
                    0,
                    &GameClient::ControlModule `RTTI Type Descriptor',
                    &GameClient::AISingleBrain `RTTI Type Descriptor',
                    0);
            if ( v37 )
            {
              v38 = *(_DWORD *)(v37 + 8);
              if ( v38 != v37 + 200 && v38 == v37 + 240 )
              {
                *(_DWORD *)(v37 + 12) = v37 + 200;
                v111 = v37 + 200;
                sub_10010820((int)&v111);
              }
              if ( v34 == *(_DWORD **)(v35 + 4) )
                _invalid_parameter_noinfo();
              v83 = *(_DWORD *)(v34[3] + 4);
              v39 = Game::Instance();
              GUIConsole::Printf(
                *((GUIConsole **)v39 + 26),
                "AICharacter %d begin attack free interval %f range %f",
                v83,
                v105,
                v100);
            }
            if ( v34 == *(_DWORD **)(v35 + 4) )
              _invalid_parameter_noinfo();
            v34 = (_DWORD *)*v34;
          }
          LOBYTE(v126) = 11;
          std::string::~string(v117);
          LOBYTE(v126) = 4;
          std::string::~string(v116);
          v1 = (unsigned __int8 (__cdecl *)(_BYTE *, const char *))std::operator==<char>;
        }
        if ( v1(v120, "stop") )
        {
          v40 = **(_DWORD ***)(dword_103B6670 + 56);
          v41 = dword_103B6670 + 52;
          while ( 1 )
          {
            v42 = *(_DWORD **)(dword_103B6670 + 56);
            if ( v41 != dword_103B6670 + 52 )
              _invalid_parameter_noinfo();
            if ( v40 == v42 )
              break;
            if ( v40 == *(_DWORD **)(v41 + 4) )
              _invalid_parameter_noinfo();
            v43 = _RTDynamicCast(
                    *(_DWORD *)(v40[3] + 296),
                    0,
                    &GameClient::ControlModule `RTTI Type Descriptor',
                    &GameClient::AISingleBrain `RTTI Type Descriptor',
                    0);
            if ( v43 )
            {
              if ( *(_DWORD *)(v43 + 8) )
                (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v43 + 8) + 16))(*(_DWORD *)(v43 + 8));
              if ( v40 == *(_DWORD **)(v41 + 4) )
                _invalid_parameter_noinfo();
              v95 = *(_DWORD *)(v40[3] + 4);
              v44 = Game::Instance();
              GUIConsole::Printf(*((GUIConsole **)v44 + 26), "AICharacter %d stop!", v95);
            }
            if ( v40 == *(_DWORD **)(v41 + 4) )
              _invalid_parameter_noinfo();
            v40 = (_DWORD *)*v40;
          }
        }
        if ( (unsigned __int8)std::operator==<char>(v120, "move") )
        {
          sub_10005943(&v121, v115);
          LOBYTE(v126) = 13;
          sub_10005943(v116, v115);
          LOBYTE(v126) = 14;
          v45 = std::operator==<char>(v116, &unk_1030A0F7);
          if ( !((unsigned __int8)std::operator==<char>(&v121, &unk_1030A0F6) | v45) )
          {
            v46 = (const char *)std::string::c_str(&v121);
            v101 = atof(v46);
            v47 = (const char *)std::string::c_str(v116);
            v106 = atof(v47);
            v48 = **(_DWORD ***)(dword_103B6670 + 56);
            v49 = dword_103B6670 + 52;
            while ( 1 )
            {
              v50 = *(_DWORD **)(dword_103B6670 + 56);
              if ( v49 != dword_103B6670 + 52 )
                _invalid_parameter_noinfo();
              if ( v48 == v50 )
                break;
              if ( v48 == *(_DWORD **)(v49 + 4) )
                _invalid_parameter_noinfo();
              if ( _RTDynamicCast(
                     *(_DWORD *)(v48[3] + 296),
                     0,
                     &GameClient::ControlModule `RTTI Type Descriptor',
                     &GameClient::AISingleBrain `RTTI Type Descriptor',
                     0) )
              {
                *(float *)&v108 = v101;
                v109 = 0.0;
                v110 = v106;
                sub_100081B6((int)&v108);
                if ( v48 == *(_DWORD **)(v49 + 4) )
                  _invalid_parameter_noinfo();
                v84 = *(_DWORD *)(v48[3] + 4);
                v51 = Game::Instance();
                GUIConsole::Printf(*((GUIConsole **)v51 + 26), "AICharacter %d move to x %f z %f!", v84, v101, v106);
              }
              if ( v48 == *(_DWORD **)(v49 + 4) )
                _invalid_parameter_noinfo();
              v48 = (_DWORD *)*v48;
            }
          }
          LOBYTE(v126) = 13;
          std::string::~string(v116);
          LOBYTE(v126) = 4;
          std::string::~string(&v121);
        }
        v17 = v120;
        goto LABEL_151;
      }
      v52 = (const char *)std::string::c_str(v125);
      v53 = atoi(v52);
      v54 = v53;
      v107 = v53;
      sub_10005943(v118, v115);
      LOBYTE(v126) = 15;
      v102 = sub_10016A4F(v54);
      v17 = v118;
      if ( !v102 )
        goto LABEL_151;
      if ( (unsigned __int8)std::operator==<char>(v118, "ai") )
      {
        *(float *)&v108 = COERCE_FLOAT(operator new(0x1A0u));
        LOBYTE(v126) = 16;
        if ( *(float *)&v108 == 0.0 )
          v55 = 0;
        else
          v55 = sub_1000A9DE(v97, v98);
        LOBYTE(v126) = 15;
        sub_10008F12(v55);
        *(_BYTE *)(sub_1000F84E() + 20) = 0;
      }
      if ( (unsigned __int8)std::operator==<char>(v118, "user") )
      {
        *(float *)&v108 = COERCE_FLOAT(operator new(8u));
        LOBYTE(v126) = 17;
        if ( *(float *)&v108 == 0.0 )
          v56 = 0;
        else
          v56 = sub_10004BFB();
        LOBYTE(v126) = 15;
        sub_10008F12(v56);
        *(_BYTE *)(sub_1000F84E() + 20) = 1;
      }
      v57 = _RTDynamicCast(
              *(_DWORD *)(v102 + 296),
              0,
              &GameClient::ControlModule `RTTI Type Descriptor',
              &GameClient::AISingleBrain `RTTI Type Descriptor',
              0);
      v17 = v118;
      if ( !v57 )
        goto LABEL_151;
      if ( (unsigned __int8)std::operator==<char>(v118, "move") )
      {
        sub_10005943(v120, v115);
        LOBYTE(v126) = 18;
        sub_10005943(v116, v115);
        LOBYTE(v126) = 19;
        if ( (unsigned __int8)std::operator!=<char>(v120, &unk_1030A0FD)
          && (unsigned __int8)std::operator!=<char>(v116, &unk_1030A0FE) )
        {
          v58 = (const char *)std::string::c_str(v120);
          *(float *)&v111 = atof(v58);
          v59 = (const char *)std::string::c_str(v116);
          v103 = atof(v59);
          v108 = (void *)v111;
          v109 = 0.0;
          v110 = v103;
          sub_100081B6((int)&v108);
          v86 = *(float *)&v111;
          v60 = Game::Instance();
          GUIConsole::Printf(*((GUIConsole **)v60 + 26), "AICharacter %d move to x:%f z:%f", v107, v86, v103);
        }
        LOBYTE(v126) = 18;
        std::string::~string(v116);
        LOBYTE(v126) = 15;
        std::string::~string(v120);
        goto LABEL_150;
      }
      if ( (unsigned __int8)std::operator==<char>(v118, "stopmove") )
      {
        sub_10015D9D();
        v61 = v107;
        v62 = Game::Instance();
        GUIConsole::Printf(*((GUIConsole **)v62 + 26), "AICharacter %d stop move", v107);
      }
      else
      {
        v61 = v107;
      }
      if ( (unsigned __int8)std::operator==<char>(v118, "randommove") )
      {
        sub_10005943(v116, v115);
        LOBYTE(v126) = 20;
        sub_10005943(v117, v115);
        LOBYTE(v126) = 21;
        if ( (unsigned __int8)std::operator!=<char>(v116, &unk_1030A0FF)
          && (unsigned __int8)std::operator!=<char>(v117, &unk_1030A122) )
        {
          v63 = (const char *)std::string::c_str(v116);
          *(float *)&v108 = atof(v63);
          v64 = (const char *)std::string::c_str(v117);
          *(float *)&v111 = atof(v64);
          sub_1000DB75((int)&v108, *(float *)&v108, *(float *)&v111);
          v91 = v110;
          v87 = v109;
          v82 = *(float *)&v108;
          v65 = Game::Instance();
          GUIConsole::Printf(
            *((GUIConsole **)v65 + 26),
            "AICharacter %d random move to x:%f y:%f z:%f",
            v61,
            v82,
            v87,
            v91);
        }
        LOBYTE(v126) = 20;
        std::string::~string(v117);
        LOBYTE(v126) = 15;
        std::string::~string(v116);
      }
      if ( (unsigned __int8)std::operator==<char>(v118, "wander") )
      {
        sub_10005943(v117, v115);
        LOBYTE(v126) = 22;
        v66 = (const char *)std::string::c_str(v117);
        *(float *)&v111 = atof(v66);
        sub_10014A92(*(float *)&v111);
        v92 = *(float *)&v111;
        v67 = Game::Instance();
        GUIConsole::Printf(*((GUIConsole **)v67 + 26), "AICharacter %d begin wander range is %f", v61, v92);
        LOBYTE(v126) = 15;
        std::string::~string(v117);
      }
      if ( (unsigned __int8)std::operator==<char>(v118, "stopwander") )
      {
        sub_10017B7F();
        v68 = Game::Instance();
        GUIConsole::Printf(*((GUIConsole **)v68 + 26), "AICharacter %d stop wander", v61);
      }
      if ( (unsigned __int8)std::operator==<char>(v118, "reborn") )
      {
        v112 = 0;
        v113 = 0;
        v114 = 0;
        LOBYTE(v126) = 23;
        std::string::string(v117);
        LOBYTE(v126) = 24;
        v69 = sub_10005943(v116, v115);
        LOBYTE(v126) = 25;
        v70 = std::string::operator=(v117, v69);
        v71 = std::operator!=<char>(v70, &unk_1030A123);
        LOBYTE(v126) = 24;
        std::string::~string(v116);
        if ( v71 )
        {
          do
          {
            v72 = (const char *)std::string::c_str(v117);
            *(float *)&v108 = COERCE_FLOAT(atoi(v72));
            if ( *(float *)&v108 == 0.0 )
              break;
            sub_1001A0F5(&v111, (int)&v108);
            v73 = sub_10005943(v116, v115);
            LOBYTE(v126) = 25;
            v74 = std::string::operator=(v117, v73);
            v75 = std::operator!=<char>(v74, &unk_1030A123);
            LOBYTE(v126) = 24;
            std::string::~string(v116);
          }
          while ( v75 );
        }
        if ( !v112 || !((v113 - v112) >> 2) )
        {
          v76 = Game::Instance();
          GUIConsole::Printf(*((GUIConsole **)v76 + 26), "bad equipment list");
          LOBYTE(v126) = 23;
          std::string::~string(v117);
          sub_1000D51C();
LABEL_150:
          v17 = v118;
          goto LABEL_151;
        }
        sub_100112C5((int)&v111);
        v96 = *(_DWORD *)(v102 + 4);
        v77 = Game::Instance();
        GUIConsole::Printf(*((GUIConsole **)v77 + 26), "AICharacter %d begin get equipment", v96);
        LOBYTE(v126) = 23;
        std::string::~string(v117);
        LOBYTE(v126) = 15;
        sub_1000D51C();
        v61 = v107;
      }
      if ( (unsigned __int8)std::operator==<char>(v118, "cancel") )
      {
        sub_10014385();
        v78 = Game::Instance();
        GUIConsole::Printf(*((GUIConsole **)v78 + 26), "AICharacter %d cancel current state", v61);
      }
      if ( (unsigned __int8)std::operator==<char>(v118, "freeattack") )
      {
        sub_100180B6();
        v79 = Game::Instance();
        GUIConsole::Printf(*((GUIConsole **)v79 + 26), "AICharacter %d attack free", v61);
      }
      goto LABEL_150;
    }
  }
LABEL_153:
  LOBYTE(v126) = 0;
  std::string::~string(v119);
  v126 = -1;
  std::string::~string(v115);
}

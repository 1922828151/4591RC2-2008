/*
 * func-name: ?updateAnimation@Robot@GameClient@@IAEXXZ_0
 * func-address: 0x1017e700
 * callers: 0x1000b780
 * callees: 0x100029cd, 0x10002e37, 0x10005ad3, 0x10006005, 0x10006a19, 0x10006e42, 0x10008062, 0x1000815c, 0x10009886, 0x10009e03, 0x1000a984, 0x1000bbb3, 0x1000bd2f, 0x1000beba, 0x1000d20b, 0x1000d67a, 0x1000d8be, 0x1000dd50, 0x1000dd7d, 0x1000eafc, 0x10010d11, 0x10011879, 0x10011d6f, 0x10013c50, 0x10014669, 0x10014d3a, 0x100174e0, 0x10018aca, 0x10018e71, 0x1001a5c8, 0x102c09a0, 0x102c09f0, 0x102c0ed0, 0x102c0f00, 0x102c1be0, 0x102c26d0, 0x102c7580, 0x102c9db6
 */

void __thiscall GameClient::Robot::updateAnimation(GameClient::Robot *this)
{
  _DWORD *v2; // ebp
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  float *v10; // esi
  float *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  float *v14; // eax
  float v15; // edx
  bool v16; // zf
  int *v17; // ebx
  double v18; // st7
  float v19; // ecx
  float v20; // edx
  double v21; // st7
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  double v26; // st7
  int v27; // eax
  float v28; // edx
  float *v29; // eax
  int *v30; // eax
  float v31; // edx
  float v32; // ecx
  float *v33; // edi
  double v34; // st7
  double v35; // st7
  int v36; // eax
  int v37; // edx
  double v38; // st6
  int v39; // eax
  int v40; // eax
  _DWORD *v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  float v45; // eax
  int v46; // edx
  float v47; // eax
  float v48; // ecx
  float *v49; // esi
  double v50; // st6
  float *v51; // eax
  double v52; // st7
  float *v53; // ebx
  float *v54; // eax
  float v55; // edx
  float v56; // ecx
  float v57; // edx
  int v58; // eax
  float v59; // ecx
  int v60; // eax
  int v61; // eax
  float *v62; // eax
  float v63; // edx
  void *AnimationFileName; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // eax
  double v69; // st7
  int v70; // ecx
  _DWORD *v71; // eax
  float *v72; // eax
  double v73; // st7
  float *v74; // eax
  _DWORD *v75; // ecx
  _DWORD *v76; // ecx
  int v77; // edx
  _DWORD *v78; // eax
  _DWORD *v79; // ecx
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // esi
  int v84; // eax
  int v85; // eax
  GameClient::CombinRobot *v86; // ecx
  int v87; // eax
  int v88; // edx
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // edx
  double v96; // st7
  GameClient::CombinRobot *v97; // ecx
  int v98; // esi
  int v99; // eax
  int v100; // eax
  int v101; // edx
  GameClient::CombinRobot *v102; // ecx
  AnimationSet *v103; // ecx
  int v104; // ecx
  int v105; // [esp+Ch] [ebp-248h]
  float v106; // [esp+10h] [ebp-244h]
  float v107; // [esp+14h] [ebp-240h]
  float v108; // [esp+14h] [ebp-240h]
  float v109; // [esp+18h] [ebp-23Ch]
  float v110; // [esp+18h] [ebp-23Ch]
  float v111; // [esp+18h] [ebp-23Ch]
  float v112; // [esp+18h] [ebp-23Ch]
  float v113; // [esp+18h] [ebp-23Ch]
  float v114; // [esp+1Ch] [ebp-238h]
  float v115; // [esp+20h] [ebp-234h]
  float v116; // [esp+20h] [ebp-234h]
  float v117; // [esp+20h] [ebp-234h]
  float v118; // [esp+20h] [ebp-234h]
  float v119; // [esp+38h] [ebp-21Ch]
  float v120; // [esp+38h] [ebp-21Ch]
  float v121; // [esp+38h] [ebp-21Ch]
  float v122; // [esp+38h] [ebp-21Ch]
  float v123; // [esp+38h] [ebp-21Ch]
  float v124; // [esp+38h] [ebp-21Ch]
  float v125; // [esp+38h] [ebp-21Ch]
  int v126; // [esp+3Ch] [ebp-218h]
  float v127; // [esp+3Ch] [ebp-218h]
  float v128; // [esp+3Ch] [ebp-218h]
  float v129; // [esp+3Ch] [ebp-218h]
  float v130; // [esp+3Ch] [ebp-218h]
  float v131; // [esp+3Ch] [ebp-218h]
  float v132; // [esp+3Ch] [ebp-218h]
  float v133; // [esp+3Ch] [ebp-218h]
  float v134; // [esp+3Ch] [ebp-218h]
  float v135; // [esp+3Ch] [ebp-218h]
  float v136; // [esp+40h] [ebp-214h]
  float v137; // [esp+40h] [ebp-214h]
  float v138; // [esp+40h] [ebp-214h]
  float v139; // [esp+40h] [ebp-214h]
  float v140; // [esp+40h] [ebp-214h]
  float v141; // [esp+40h] [ebp-214h]
  float v142; // [esp+40h] [ebp-214h]
  float v143; // [esp+40h] [ebp-214h]
  float v144; // [esp+40h] [ebp-214h]
  float v145; // [esp+40h] [ebp-214h]
  float v146; // [esp+40h] [ebp-214h]
  float v147; // [esp+40h] [ebp-214h]
  float v148; // [esp+40h] [ebp-214h]
  float v149; // [esp+44h] [ebp-210h]
  float v150; // [esp+44h] [ebp-210h]
  int v151; // [esp+44h] [ebp-210h]
  int v152; // [esp+44h] [ebp-210h]
  float v153; // [esp+44h] [ebp-210h]
  float v154; // [esp+44h] [ebp-210h]
  float v155; // [esp+44h] [ebp-210h]
  float v156; // [esp+44h] [ebp-210h]
  float v157; // [esp+44h] [ebp-210h]
  float v158; // [esp+44h] [ebp-210h]
  float v159; // [esp+44h] [ebp-210h]
  float v160; // [esp+44h] [ebp-210h]
  double v161; // [esp+48h] [ebp-20Ch] BYREF
  float v162; // [esp+50h] [ebp-204h]
  float v163; // [esp+54h] [ebp-200h] BYREF
  float v164; // [esp+58h] [ebp-1FCh]
  float v165; // [esp+5Ch] [ebp-1F8h]
  int v166; // [esp+60h] [ebp-1F4h] BYREF
  float v167; // [esp+64h] [ebp-1F0h]
  float v168; // [esp+68h] [ebp-1ECh]
  int v169; // [esp+6Ch] [ebp-1E8h] BYREF
  float v170; // [esp+70h] [ebp-1E4h]
  float v171; // [esp+74h] [ebp-1E0h]
  int v172; // [esp+78h] [ebp-1DCh] BYREF
  float v173; // [esp+7Ch] [ebp-1D8h]
  float v174; // [esp+80h] [ebp-1D4h]
  float v175; // [esp+84h] [ebp-1D0h] BYREF
  float v176; // [esp+88h] [ebp-1CCh]
  float v177; // [esp+8Ch] [ebp-1C8h]
  int v178[3]; // [esp+90h] [ebp-1C4h] BYREF
  int v179; // [esp+9Ch] [ebp-1B8h] BYREF
  float v180; // [esp+A0h] [ebp-1B4h]
  int v181; // [esp+A4h] [ebp-1B0h]
  int v182[7]; // [esp+A8h] [ebp-1ACh] BYREF
  _BYTE v183[4]; // [esp+C4h] [ebp-190h] BYREF
  char v184; // [esp+C8h] [ebp-18Ch] BYREF
  _BYTE v185[4]; // [esp+104h] [ebp-150h] BYREF
  char v186; // [esp+108h] [ebp-14Ch] BYREF
  _BYTE v187[64]; // [esp+144h] [ebp-110h] BYREF
  _BYTE v188[64]; // [esp+184h] [ebp-D0h] BYREF
  _BYTE v189[28]; // [esp+1C4h] [ebp-90h] BYREF
  _BYTE v190[8]; // [esp+1E0h] [ebp-74h] BYREF
  double v191; // [esp+1E8h] [ebp-6Ch]
  int v192; // [esp+250h] [ebp-4h]

  if ( !*((_DWORD *)this + 49) )
  {
    v2 = (_DWORD *)(*((_DWORD *)this + 43) + 856);
    *v2 = *((_DWORD *)this + 6);
    v2[1] = *((_DWORD *)this + 7);
    v2[2] = *((_DWORD *)this + 8);
    return;
  }
  if ( (*((_DWORD *)this + 92) & 0x20) != 0 )
  {
    qmemcpy((char *)this + 836, (char *)this + 36, 0x40u);
    v3 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 221) = *((_DWORD *)this + 6);
    v4 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 222) = v3;
    v5 = *((_DWORD *)this + 43);
    *((_DWORD *)this + 223) = v4;
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)v5 + 136))(v5, (char *)this + 836);
    return;
  }
  v6 = *((_DWORD *)this + 90);
  if ( v6 != 2 && v6 != 3 )
  {
    qmemcpy((char *)this + 836, (const void *)sub_10018E71(v187, *((_DWORD *)this + 43) + 1452), 0x40u);
    *((float *)this + 23) = 0.0;
    *((float *)this + 22) = 0.0;
    *((float *)this + 21) = 0.0;
    v7 = *((_DWORD *)this + 49);
    v8 = *(_DWORD *)(v7 + 168);
    v7 += 168;
    v179 = v8;
    v180 = *(float *)(v7 + 4);
    v9 = *(_DWORD *)(v7 + 8);
    v180 = 0.0;
    v163 = 0.0;
    v164 = 0.0;
    v165 = 0.0;
    v181 = v9;
    sub_102C1BE0(&v179, &v163);
    v10 = (float *)((char *)this + 24);
    v11 = (float *)(*((_DWORD *)this + 43) + 856);
    *(float *)&v126 = v163 + *((float *)this + 6);
    v119 = *((float *)this + 7) + v164;
    v136 = *((float *)this + 8) + v165;
    v166 = v126;
    *v11 = *(float *)&v126;
    v167 = v119;
    v11[1] = v119;
    v168 = v136;
    v11[2] = v136;
    *(float *)(*((_DWORD *)this + 43) + 860) = *(float *)(*((_DWORD *)this + 43) + 860)
                                             - ((*((float *)this + 142) - *((float *)this + 139)) * 0.5
                                              + 0.1000000014901161);
    v12 = (_DWORD *)sub_102C0ED0(v178);
    v13 = (_DWORD *)(*((_DWORD *)this + 43) + 1440);
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    *(float *)(*((_DWORD *)this + 43) + 1444) = 0.0;
    sub_100029CD();
    if ( *(_DWORD *)(*((_DWORD *)this + 49) + 180) != 1 )
    {
      if ( *((_DWORD *)this + 89) || *((_DWORD *)this + 88) || *((_BYTE *)this + 920) || *((_DWORD *)this + 91) )
      {
        v76 = (_DWORD *)*((_DWORD *)this + 43);
        v77 = v76[360];
        v78 = v76 + 360;
        v76 += 363;
        *v76 = v77;
        v76[1] = v78[1];
        v76[2] = v78[2];
        *((_BYTE *)this + 720) = 0;
      }
      else
      {
        v62 = (float *)*((_DWORD *)this + 43);
        v63 = v62[361];
        v163 = v62[360];
        v165 = v62[362];
        v164 = v63;
        sub_1000BEBA((int)(v62 + 363));
        *(float *)&v161 = acos((float)0.0);
        v124 = *(float *)&v161;
        if ( *(float *)&v161 <= 0.52359879 )
        {
          v69 = 0.0;
          if ( *(float *)&v161 < 0.0 )
            v124 = 0.0;
        }
        else
        {
          v124 = 0.52359879;
          AnimationFileName = (void *)GameClient::FRobotFramework::GetAnimationFileName();
          v65 = sub_102C7580(v183, AnimationFileName);
          v192 = 3;
          v66 = std::operator+<char>(v189, "d", v65);
          LOBYTE(v192) = 4;
          v67 = std::operator+<char>(v182, v66, "turn");
          LOBYTE(v192) = 5;
          v68 = sub_10014D3A(v67);
          GameClient::CombinRobot::PlayAnimationDown(
            *((GameClient::CombinRobot **)this + 43),
            *(_DWORD *)(v68 + 48),
            0.2,
            1.0,
            1.0,
            0.0,
            0);
          LOBYTE(v192) = 4;
          std::string::~string(v182);
          LOBYTE(v192) = 3;
          std::string::~string(v189);
          v192 = -1;
          std::string::~string(v183);
          v69 = 0.0;
          *((float *)this + 181) = 0.0;
          *((_BYTE *)this + 720) = 1;
        }
        if ( *((_BYTE *)this + 720) )
        {
          *(float *)&v161 = GDeltaTime * 1.570796370506287;
          v125 = v124 - *(float *)&v161;
          if ( v69 <= v125 )
          {
            v72 = (float *)*((_DWORD *)this + 43);
            v73 = v163 - v72[363];
            v72 += 363;
            *(float *)&v161 = v73;
            v160 = v164 - v72[1];
            v148 = v165 - v72[2];
            v163 = *(float *)&v161;
            v164 = v160;
            v165 = v148;
            sub_100029CD();
            sub_10008062((int)v188);
            v74 = (float *)sub_10009E03((int)v178, (int)&v163);
            v163 = *v74;
            v164 = v74[1];
            v165 = v74[2];
            if ( v163 <= 0.0 )
            {
              if ( v163 >= 0.0 )
                v125 = 0.0;
            }
            else
            {
              v125 = -v125;
            }
            sub_10014669(v187);
            sub_102C26D0(0.0, v125, 0.0);
            v71 = (_DWORD *)sub_10009E03((int)v178, *((_DWORD *)this + 43) + 1440);
            v70 = *((_DWORD *)this + 43);
          }
          else
          {
            v70 = *((_DWORD *)this + 43);
            *((_BYTE *)this + 720) = 0;
            v71 = (_DWORD *)(v70 + 1440);
          }
          v75 = (_DWORD *)(v70 + 1452);
          *v75 = *v71;
          v75[1] = v71[1];
          v75[2] = v71[2];
        }
      }
      qmemcpy((char *)this + 836, (const void *)sub_10018E71(v188, *((_DWORD *)this + 43) + 1452), 0x40u);
      goto LABEL_85;
    }
    *((_BYTE *)this + 720) = 0;
    sub_10014669(v183);
    v14 = (float *)*((_DWORD *)this + 43);
    v15 = v14[363];
    v14 += 363;
    v16 = *((_DWORD *)this + 186) == 0;
    v175 = v15;
    v176 = v14[1];
    v177 = v14[2];
    if ( v16 )
    {
LABEL_31:
      if ( !*(_DWORD *)(*((_DWORD *)this + 43) + 1800) )
        goto LABEL_85;
      sub_102C0F00(&v163);
      v164 = 0.0;
      sub_100029CD();
      v30 = (int *)*((_DWORD *)this + 43);
      v31 = *((float *)v30 + 361);
      v166 = v30[360];
      v32 = *((float *)v30 + 362);
      v167 = v31;
      v33 = (float *)(v30 + 363);
      v168 = v32;
      sub_1000EAFC((int)&v163);
      v121 = 0.0;
      *(float *)&v161 = *v33 - v163;
      v154 = v33[1] - v164;
      v142 = v33[2] - v165;
      v169 = SLODWORD(v161);
      v170 = v154;
      v171 = v142;
      if ( sub_1001A5C8() )
      {
        v34 = 0.0;
      }
      else
      {
        *(float *)&v161 = *v33 + v163;
        v155 = v33[1] + v164;
        v143 = v33[2] + v165;
        v169 = SLODWORD(v161);
        v170 = v155;
        v171 = v143;
        if ( !sub_1001A5C8() )
        {
LABEL_37:
          v122 = v121 - 1.570796370506287;
          sub_1000EAFC((int)&v166);
          v133 = v122;
          *(float *)&v161 = *v33 - *(float *)&v166;
          v156 = v33[1] - v167;
          v144 = v33[2] - v168;
          v169 = SLODWORD(v161);
          v170 = v156;
          v171 = v144;
          if ( sub_1001A5C8() )
          {
            v35 = 0.0;
            v133 = 0.0;
          }
          else
          {
            *(float *)&v161 = *(float *)&v166 + *v33;
            v157 = v33[1] + v167;
            v145 = v33[2] + v168;
            v166 = SLODWORD(v161);
            v167 = v157;
            v168 = v145;
            if ( sub_1001A5C8() )
              v133 = 3.1415927;
            v35 = 0.0;
          }
          if ( v122 >= v35 )
          {
            if ( v122 > v35 )
              v35 = v133;
          }
          else
          {
            v35 = -v133;
          }
          v123 = v35;
          sub_10014669(v187);
          sub_102C26D0(v123, 0.0, 0.0);
          std::string::string(v182, "NeckPoint");
          v192 = 0;
          GameClient::AdapterActor::SetNodeInfluence((int)v182, (int)v187);
          v192 = -1;
          std::string::~string(v182);
          v36 = *((_DWORD *)this + 92);
          if ( (v36 & 0x20) == 0 && (v36 & 0x80) != 0 )
          {
            memset(&v182[1], 0, 12);
            v37 = *((_DWORD *)this + 3);
            v192 = 1;
            LODWORD(v161) = v37;
            sub_10002E37(v182, (int)&v161);
            CollisionInfo::CollisionInfo((CollisionInfo *)v190);
            *(float *)&v161 = *v10 + 0.0;
            v38 = *((float *)this + 7) - 10.0;
            LOBYTE(v192) = 2;
            v158 = v38;
            v146 = *((float *)this + 8) + 0.0;
            v166 = SLODWORD(v161);
            v167 = v158;
            v168 = v146;
            v39 = NxPhysics::Instance(v182, (char *)this + 24, &v166, 3, v190);
            if ( !(unsigned __int8)NxPhysics::RayCast(v39) )
              goto LABEL_64;
            v40 = sub_10005AD3(0);
            v166 = *(int *)v40;
            v167 = *(float *)(v40 + 4);
            v168 = *(float *)(v40 + 8);
            v41 = (_DWORD *)sub_10010D11(0);
            if ( ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v41 + 12))(*v41) & 5) != 0 )
            {
              *(float *)&v169 = 0.0;
              *(float *)&v166 = 0.0;
              v170 = 1.0;
              v167 = 1.0;
              v171 = 0.0;
              v168 = 0.0;
            }
            *(float *)&v169 = 0.0;
            v170 = 1.0;
            v171 = 0.0;
            sub_1000BEBA((int)&v169);
            *((float *)this + 198) = 0.0;
            v134 = (float)0.0 * v191;
            v161 = v134;
            sub_10011D6F((int)v178, (int)this + 432);
            sub_1000A984();
            if ( v134 * 0.5 <= v161 )
              goto LABEL_64;
            sub_10006E42((int)&v169, v134, (int)&v166);
            v42 = *((_DWORD *)this + 43) + 856;
            *(float *)&v161 = *v10 - *(float *)&v169;
            v159 = *((float *)this + 7) - v170;
            v147 = *((float *)this + 8) - v171;
            *(_DWORD *)v42 = LODWORD(v161);
            *((float *)&v161 + 1) = v159;
            *(float *)(v42 + 4) = v159;
            v162 = v147;
            *(float *)(v42 + 8) = v147;
            *(float *)&v161 = *((float *)this + 198);
            *(float *)&v161 = acos(*(float *)&v161);
            v135 = *(float *)&v161;
            *(float *)&v172 = 0.0;
            v173 = 0.0;
            v174 = 0.0;
            *(float *)&v169 = 0.0;
            v170 = 0.0;
            v171 = 0.0;
            *(float *)&v161 = 0.0;
            *((float *)&v161 + 1) = 1.0;
            v162 = 0.0;
            if ( (unsigned __int8)sub_1000BD2F((int)&v161) )
            {
              v174 = 0.0;
              v173 = 0.0;
              *(float *)&v172 = 0.0;
              v171 = 0.0;
              v170 = 0.0;
              *(float *)&v169 = 0.0;
            }
            else
            {
              *(float *)&v161 = 0.0;
              *((float *)&v161 + 1) = 1.0;
              v162 = 0.0;
              sub_102C09F0(v178, &v166, &v161);
              sub_10008062((int)v188);
              v43 = sub_10009E03((int)&v161, (int)v178);
              v172 = *(int *)v43;
              v173 = *(float *)(v43 + 4);
              v174 = *(float *)(v43 + 8);
              *(float *)&v172 = *(float *)&v172 * v135;
              v173 = v173 * v135;
              v174 = v135 * v174;
              sub_10008062((int)v188);
              v44 = sub_10009E03((int)&v161, (int)v178);
              v169 = *(int *)v44;
              v170 = *(float *)(v44 + 4);
              v45 = *(float *)(v44 + 8);
              *(float *)&v169 = *(float *)&v169 * v135;
              v170 = v170 * v135;
              v171 = v135 * v45;
            }
            if ( (unsigned __int8)sub_1000BBB3((int)&v166) )
            {
              v46 = v166;
              v47 = v167;
              *((float *)this + 199) = 0.0;
              v48 = v168;
              *((_DWORD *)this + 200) = v46;
              *((float *)this + 201) = v47;
              *((float *)this + 202) = v48;
            }
            v49 = (float *)((char *)this + 812);
            if ( *((float *)this + 199) < 1.0 )
            {
              *(float *)&v161 = *((float *)this + 199) + GDeltaTime;
              v50 = *(float *)&v161;
              *((float *)this + 199) = *(float *)&v161;
              if ( v50 <= 1.0 )
              {
                v117 = v50;
                v51 = (float *)sub_102C09A0((int)v178, (int)&v172, v117);
                v52 = *((float *)this + 199);
                *v49 = *v51;
                *((float *)this + 204) = v51[1];
                v118 = v52;
                v53 = (float *)((char *)this + 824);
                *((float *)this + 205) = v51[2];
                v54 = (float *)sub_102C09A0((int)v178, (int)&v169, v118);
                *((float *)this + 206) = *v54;
                *((float *)this + 207) = v54[1];
                v55 = v54[2];
                goto LABEL_62;
              }
              *((float *)this + 199) = 1.0;
            }
            v56 = v173;
            v57 = v174;
            *v49 = *(float *)&v172;
            v58 = v169;
            v53 = (float *)((char *)this + 824);
            *((float *)this + 204) = v56;
            v59 = v170;
            *((_DWORD *)this + 206) = v58;
            *((float *)this + 205) = v57;
            v55 = v171;
            *((float *)this + 207) = v59;
LABEL_62:
            v53[2] = v55;
            sub_10014669(v185);
            sub_102C26D0(*v49, *((float *)this + 204), *((float *)this + 205));
            qmemcpy((char *)this + 836, (const void *)sub_10018ACA(v188, (int)this + 836), 0x40u);
            v60 = sub_10009E03((int)v178, (int)&v179);
            sub_1000D20B(v60);
            if ( !*((_BYTE *)this + 664) )
            {
              sub_102C26D0(*v53, *((float *)this + 207), *((float *)this + 208));
              qmemcpy((char *)this + 588, (const void *)sub_10018ACA(v188, (int)this + 588), 0x40u);
            }
LABEL_64:
            LOBYTE(v192) = 1;
            CollisionInfo::~CollisionInfo((CollisionInfo *)v190);
            v192 = -1;
            sub_100174E0();
            goto LABEL_85;
          }
          v61 = sub_10009E03((int)v178, (int)&v179);
          sub_1000D20B(v61);
LABEL_85:
          v79 = (_DWORD *)*((_DWORD *)this + 43);
          *((_DWORD *)this + 221) = v79[214];
          *((_DWORD *)this + 222) = v79[215];
          *((_DWORD *)this + 223) = v79[216];
          (*(void (__thiscall **)(_DWORD *, char *))(*v79 + 136))(v79, (char *)this + 836);
          if ( *((_BYTE *)this + 920) )
            goto LABEL_128;
          v80 = *((_DWORD *)this + 57);
          if ( !v80 || *((_DWORD *)this + 90) || (*((_DWORD *)this + 92) & 0x80) == 0 )
          {
            v94 = *((_DWORD *)this + 88);
            if ( v94 <= 2 )
            {
              v95 = *((_DWORD *)this + 89);
              if ( v95 <= 4 )
              {
                v96 = 1.0;
                if ( !*((_DWORD *)this + 186) )
                  *((float *)this + 225) = 1.0;
                if ( v94 != 2
                  || (v97 = (GameClient::CombinRobot *)*((_DWORD *)this + 43),
                      v98 = *((_DWORD *)v97 + v95 + 405),
                      *((_DWORD *)v97 + 374) == v98) )
                {
                  if ( (*((_DWORD *)this + 92) & 0x80) != 0 )
                  {
                    if ( !*((_BYTE *)this + 720) )
                    {
                      GameClient::CombinRobot::PlayAnimationDown(
                        *((GameClient::CombinRobot **)this + 43),
                        *(_DWORD *)(*((_DWORD *)this + 43) + 4 * (v94 + 79 + v95 + 4 * (v94 + 79))),
                        0.2,
                        1.0,
                        *((float *)this + 225),
                        0.0,
                        0);
                      v96 = 1.0;
                    }
                    v108 = v96;
                    GameClient::CombinRobot::PlayAnimationUp(
                      *((GameClient::CombinRobot **)this + 43),
                      *(_DWORD *)(*((_DWORD *)this + 43)
                                + 4 * (*((_DWORD *)this + 89) + 5 * (*((_DWORD *)this + 88) + 76))),
                      0.2,
                      v108,
                      *((float *)this + 225),
                      0.0,
                      0);
                  }
                }
                else
                {
                  GameClient::CombinRobot::PlayAnimation(v97, v98, 0.2, -1.0, 1.0, 0.0, 1);
                }
              }
            }
            goto LABEL_128;
          }
          if ( !*(_BYTE *)(*(_DWORD *)(v80 + 8) + 1628) )
            goto LABEL_103;
          v81 = *((_DWORD *)this + 89);
          if ( v81 )
          {
            if ( v81 != 1 )
              goto LABEL_103;
            v85 = *((_DWORD *)this + 88);
            if ( v85 )
            {
              if ( v85 != 1 )
                goto LABEL_103;
              v83 = *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 932);
              v84 = *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 884);
            }
            else
            {
              v83 = *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 568);
              v84 = *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 520);
            }
          }
          else
          {
            v82 = *((_DWORD *)this + 88);
            if ( v82 )
            {
              if ( v82 != 1 )
                goto LABEL_103;
              v83 = *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 880);
              v84 = *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 832);
            }
            else
            {
              v83 = *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 516);
              v84 = *(_DWORD *)(sub_10009886(*((_DWORD *)this + 58) - 1) + 468);
            }
          }
          if ( v83 != -1 )
          {
            v86 = (GameClient::CombinRobot *)*((_DWORD *)this + 43);
            v114 = 0.0;
            v111 = *((float *)this + 225);
            v107 = 1.0;
            v106 = 0.2;
            v105 = v83;
            if ( v84 == 2 )
            {
              GameClient::CombinRobot::PlayAnimation(v86, v83, v106, v107, v111, v114, 0);
LABEL_128:
              if ( GameClient::WorldObject::IsLocal(this) )
              {
                v99 = *((_DWORD *)this + 57);
                if ( v99 )
                {
                  if ( !*((_DWORD *)this + 90) )
                  {
                    v100 = *(_DWORD *)(v99 + 8);
                    if ( *((_DWORD *)this + 89) )
                    {
                      v104 = *(_DWORD *)(GameClient::CombinRobot::GetAnimFPV((int)v185, v100 + 1012) + 48);
                      v192 = 7;
                      GameClient::CombinRobot::PlayAnimationFPV(
                        *((GameClient::CombinRobot **)this + 43),
                        v104,
                        0.2,
                        1.0,
                        *((float *)this + 225),
                        0.0,
                        0);
                      v103 = (AnimationSet *)&v186;
                    }
                    else
                    {
                      v101 = *(_DWORD *)(GameClient::CombinRobot::GetAnimFPV((int)v183, v100 + 984) + 48);
                      v102 = (GameClient::CombinRobot *)*((_DWORD *)this + 43);
                      v192 = 6;
                      GameClient::CombinRobot::PlayAnimationFPV(v102, v101, 0.2, 1.0, 1.0, 0.0, 0);
                      v103 = (AnimationSet *)&v184;
                    }
                    v192 = -1;
                    AnimationSet::~AnimationSet(v103);
                  }
                }
              }
              GameClient::Robot::doRobotUpDown(this);
              return;
            }
            goto LABEL_107;
          }
LABEL_103:
          v87 = *((_DWORD *)this + 88);
          if ( v87 > 2 || (v88 = *((_DWORD *)this + 89), v88 > 4) || *((_BYTE *)this + 720) )
          {
LABEL_108:
            v89 = *((_DWORD *)this + 88);
            if ( *((_DWORD *)this + 89) )
            {
              if ( v89 )
              {
                if ( v89 == 1 )
                {
                  v113 = *((float *)this + 225);
                  v93 = sub_10009886(*((_DWORD *)this + 58) - 1);
                  GameClient::CombinRobot::PlayAnimationUp(
                    *((GameClient::CombinRobot **)this + 43),
                    *(_DWORD *)(v93 + 464),
                    0.2,
                    1.0,
                    v113,
                    0.0,
                    0);
                }
              }
              else
              {
                v112 = *((float *)this + 225);
                v92 = sub_10009886(*((_DWORD *)this + 58) - 1);
                GameClient::CombinRobot::PlayAnimationUp(
                  *((GameClient::CombinRobot **)this + 43),
                  *(_DWORD *)(v92 + 100),
                  0.2,
                  1.0,
                  v112,
                  0.0,
                  0);
              }
            }
            else if ( v89 )
            {
              if ( v89 == 1 )
              {
                v91 = sub_10009886(*((_DWORD *)this + 58) - 1);
                GameClient::CombinRobot::PlayAnimationUp(
                  *((GameClient::CombinRobot **)this + 43),
                  *(_DWORD *)(v91 + 412),
                  0.2,
                  1.0,
                  1.0,
                  0.0,
                  0);
              }
            }
            else
            {
              v90 = sub_10009886(*((_DWORD *)this + 58) - 1);
              GameClient::CombinRobot::PlayAnimationUp(
                *((GameClient::CombinRobot **)this + 43),
                *(_DWORD *)(v90 + 48),
                0.2,
                1.0,
                1.0,
                0.0,
                0);
            }
            goto LABEL_128;
          }
          v86 = (GameClient::CombinRobot *)*((_DWORD *)this + 43);
          v114 = 0.0;
          v111 = *((float *)this + 225);
          v107 = 1.0;
          v106 = 0.2;
          v105 = *((_DWORD *)v86 + 4 * v87 + v87 + v88 + 395);
LABEL_107:
          GameClient::CombinRobot::PlayAnimationDown(v86, v105, v106, v107, v111, v114, 0);
          goto LABEL_108;
        }
        v34 = 3.1415927;
      }
      v121 = v34;
      goto LABEL_37;
    }
    v17 = (int *)((char *)this + 708);
    sub_1000EAFC((int)this + 708);
    v120 = 0.0;
    v137 = v175 - *((float *)this + 177);
    v127 = v176 - *((float *)this + 178);
    v149 = v177 - *((float *)this + 179);
    v163 = v137;
    v164 = v127;
    v165 = v149;
    if ( sub_1001A5C8() )
    {
      v18 = 0.0;
    }
    else
    {
      v150 = v175 + *(float *)v17;
      v138 = *((float *)this + 178) + v176;
      v128 = *((float *)this + 179) + v177;
      v163 = v150;
      v164 = v138;
      v165 = v128;
      if ( !sub_1001A5C8() )
      {
LABEL_14:
        v19 = *((float *)this + 178);
        v20 = *((float *)this + 179);
        v172 = *v17;
        v173 = v19;
        v174 = v20;
        if ( v120 > 1.570796370506287 )
        {
          v120 = 3.141592741012573 - v120;
          *(float *)&v151 = -*(float *)&v172;
          v139 = -v173;
          v129 = -v174;
          v163 = *(float *)&v151;
          v172 = v151;
          v164 = v139;
          v173 = v139;
          v165 = v129;
          v174 = v129;
        }
        *(float *)&v166 = 0.0;
        v167 = 1.0;
        v168 = 0.0;
        sub_102C09F0(&v163, &v175, &v166);
        sub_1000EAFC((int)&v163);
        v130 = 0.0;
        *(float *)&v152 = *(float *)&v172 - v163;
        v140 = v173 - v164;
        *(float *)&v161 = v174 - v165;
        v166 = v152;
        v167 = v140;
        v168 = *(float *)&v161;
        if ( sub_1001A5C8() )
        {
          v21 = 0.0;
          v130 = 0.0;
        }
        else
        {
          *(float *)&v161 = *(float *)&v172 + v163;
          v153 = v164 + v173;
          v141 = v165 + v174;
          v166 = SLODWORD(v161);
          v167 = v153;
          v168 = v141;
          if ( sub_1001A5C8() )
            v130 = 3.1415927;
          v21 = 0.0;
        }
        v131 = v130 - 1.570796370506287;
        if ( v131 <= v21 )
        {
          if ( v131 < v21 && v120 > 0.7853981852531433 )
          {
            v116 = v21;
            v110 = v21;
            sub_102C26D0(v110, -1.5707964, v116);
            v24 = sub_10009E03((int)v178, (int)&v172);
            v25 = *(int *)v24;
            *(float *)&v161 = fabs(v120);
            v172 = v25;
            v173 = *(float *)(v24 + 4);
            v120 = 1.570796370506287 - *(float *)&v161;
            v174 = *(float *)(v24 + 8);
            sub_102C26D0(0.0, 1.5707964, 0.0);
            sub_10009E03((int)v178, (int)&v175);
          }
        }
        else if ( v120 > 0.7853981852531433 )
        {
          v115 = v21;
          v109 = v21;
          sub_102C26D0(v109, 1.5707964, v115);
          v22 = sub_10009E03((int)v178, (int)&v172);
          v23 = *(int *)v22;
          *(float *)&v161 = fabs(v120);
          v172 = v23;
          v173 = *(float *)(v22 + 4);
          v120 = 1.570796370506287 - *(float *)&v161;
          v174 = *(float *)(v22 + 8);
          sub_102C26D0(0.0, -1.5707964, 0.0);
          sub_10009E03((int)v178, (int)&v175);
        }
        *(float *)&v161 = fabs(v120);
        v26 = *(float *)&v161;
        if ( *(float *)&v161 > 0.0099999998 )
        {
          v132 = GDeltaTime * 0.7853981852531433;
          if ( v132 >= v26 )
            v132 = *(float *)&v161;
          *(float *)&v161 = v132 / v26;
          v27 = sub_102C09A0((int)v178, (int)&v172, *(float *)&v161);
          v175 = *(float *)v27;
          v176 = *(float *)(v27 + 4);
          v28 = *(float *)(v27 + 8);
          v176 = 0.0;
          v177 = v28;
          sub_100029CD();
          v29 = (float *)(*((_DWORD *)this + 43) + 1452);
          *v29 = v175;
          v29[1] = v176;
          v29[2] = v177;
        }
        goto LABEL_31;
      }
      v18 = 3.1415927;
    }
    v120 = v18;
    goto LABEL_14;
  }
}

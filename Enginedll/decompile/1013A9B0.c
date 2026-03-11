/*
 * func-name: ??0World@@QAE@XZ
 * func-address: 0x1013a9b0
 * callers: 0x1004ef90, 0x10087570, 0x10087a10, 0x10088400, 0x100aec90, 0x1010a6c0, 0x1016e600
 * callees: 0x10001440, 0x10009330, 0x10009450, 0x10009550, 0x10012c20, 0x10017220, 0x10017310, 0x100174f0, 0x100177c0, 0x10017ba0, 0x1001daf0, 0x1005f1c0, 0x100971c0, 0x100e8d80, 0x10118b80, 0x10136290, 0x1013f3a0, 0x101786e0, 0x1017a0b0, 0x1017bd70, 0x1017c0d0, 0x1017cd10, 0x101a251c, 0x101a2534
 */

World *__thiscall World::World(World *this)
{
  _DWORD *v2; // eax
  float v3; // eax
  int v4; // eax
  float v5; // eax
  char v6; // al
  struct EditorVar *v7; // eax
  struct EditorVar *v8; // eax
  struct EditorVar *v9; // eax
  struct EditorVar *v10; // eax
  void (__thiscall ***v11)(void *, float *, float *); // eax
  Texture *v12; // eax
  Texture *v13; // eax
  float v14; // eax
  char v15; // al
  char v16; // al
  char v17; // al
  struct EditorVar *v18; // eax
  struct EditorVar *v19; // eax
  struct EditorVar *v20; // eax
  struct EditorVar *v21; // eax
  struct EditorVar *v22; // eax
  struct EditorVar *v23; // eax
  struct EditorVar *v24; // eax
  struct EditorVar *v25; // eax
  struct EditorVar *v26; // eax
  struct EditorVar *v27; // eax
  struct EditorVar *v28; // eax
  struct EditorVar *v29; // eax
  struct EditorVar *v30; // eax
  struct EditorVar *v31; // eax
  struct EditorVar *v32; // eax
  struct EditorVar *v33; // eax
  struct EditorVar *v34; // eax
  struct EditorVar *v35; // eax
  struct EditorVar *v36; // eax
  struct EditorVar *v37; // eax
  struct EditorVar *v38; // eax
  struct EditorVar *v39; // eax
  struct EditorVar *v40; // eax
  struct EditorVar *v41; // eax
  struct EditorVar *v42; // eax
  struct EditorVar *v43; // eax
  struct EditorVar *v44; // eax
  struct EditorVar *v45; // eax
  struct EditorVar *v46; // eax
  struct EditorVar *v47; // eax
  struct EditorVar *v48; // eax
  struct EditorVar *v49; // eax
  struct EditorVar *v50; // eax
  struct EditorVar *v51; // eax
  struct EditorVar *v52; // eax
  struct EditorVar *v53; // eax
  struct EditorVar *v54; // eax
  struct EditorVar *v55; // eax
  struct EditorVar *v56; // eax
  struct EditorVar *v57; // eax
  struct EditorVar *v58; // eax
  struct EditorVar *v59; // eax
  struct EditorVar *v60; // eax
  struct EditorVar *v61; // eax
  struct EditorVar *v62; // eax
  struct EditorVar *v63; // eax
  struct EditorVar *v64; // eax
  struct EditorVar *v65; // eax
  struct EditorVar *v66; // eax
  struct EditorVar *v67; // eax
  struct EditorVar *v68; // eax
  struct EditorVar *v69; // eax
  struct EditorVar *v70; // eax
  struct EditorVar *v71; // eax
  struct EditorVar *v72; // eax
  struct EditorVar *v73; // eax
  struct EditorVar *v74; // eax
  struct EditorVar *v75; // eax
  struct EditorVar *v76; // eax
  struct EditorVar *v77; // eax
  struct EditorVar *v78; // eax
  struct EditorVar *v79; // eax
  struct EditorVar *v80; // eax
  struct EditorVar *v81; // eax
  struct EditorVar *v82; // eax
  struct EditorVar *v83; // eax
  struct EditorVar *v84; // eax
  struct EditorVar *v85; // eax
  struct EditorVar *v86; // eax
  struct EditorVar *v87; // eax
  struct EditorVar *v88; // eax
  struct EditorVar *v89; // eax
  struct EditorVar *v90; // eax
  struct EditorVar *v91; // eax
  unsigned int v92; // ebx
  int v93; // eax
  int v94; // eax
  char v96; // [esp-5Ch] [ebp-130h] BYREF
  int v97; // [esp-58h] [ebp-12Ch]
  int v98; // [esp-54h] [ebp-128h]
  int v99; // [esp-50h] [ebp-124h]
  int v100; // [esp-4Ch] [ebp-120h]
  int v101; // [esp-48h] [ebp-11Ch]
  int v102; // [esp-44h] [ebp-118h]
  int v103; // [esp-40h] [ebp-114h]
  char v104; // [esp-3Ch] [ebp-110h] BYREF
  int v105; // [esp-38h] [ebp-10Ch]
  int v106; // [esp-34h] [ebp-108h] BYREF
  int v107; // [esp-30h] [ebp-104h]
  int v108; // [esp-2Ch] [ebp-100h]
  int v109; // [esp-28h] [ebp-FCh]
  const char *v110; // [esp-24h] [ebp-F8h]
  int v111; // [esp-20h] [ebp-F4h] BYREF
  void *v112; // [esp-1Ch] [ebp-F0h]
  int v113; // [esp-18h] [ebp-ECh] BYREF
  int v114; // [esp-14h] [ebp-E8h]
  int v115; // [esp-10h] [ebp-E4h]
  int v116; // [esp-Ch] [ebp-E0h]
  void *v117; // [esp-8h] [ebp-DCh]
  int v118; // [esp-4h] [ebp-D8h]
  size_t v119; // [esp+0h] [ebp-D4h]
  float i; // [esp+14h] [ebp-C0h]
  float v121; // [esp+18h] [ebp-BCh]
  float v122; // [esp+1Ch] [ebp-B8h]
  float v123; // [esp+20h] [ebp-B4h] BYREF
  float v124; // [esp+24h] [ebp-B0h]
  float v125; // [esp+28h] [ebp-ACh]
  _DWORD v126[24]; // [esp+2Ch] [ebp-A8h] BYREF
  float v127; // [esp+8Ch] [ebp-48h] BYREF
  float v128; // [esp+90h] [ebp-44h]
  float v129; // [esp+94h] [ebp-40h]
  float v130; // [esp+98h] [ebp-3Ch]
  float v131[4]; // [esp+9Ch] [ebp-38h] BYREF
  float v132; // [esp+ACh] [ebp-28h]
  float v133; // [esp+B0h] [ebp-24h]
  float v134; // [esp+B4h] [ebp-20h]
  float v135; // [esp+B8h] [ebp-1Ch]
  float v136; // [esp+BCh] [ebp-18h]
  float v137; // [esp+C0h] [ebp-14h]
  World *v138; // [esp+C4h] [ebp-10h]
  int v139; // [esp+D0h] [ebp-4h]

  v138 = this;
  RenderBase::RenderBase(this);
  v139 = 0;
  *(_DWORD *)this = &World::`vftable';
  v2 = sub_1001DAF0();
  *((_DWORD *)this + 2) = v2;
  *((_BYTE *)v2 + 49) = 1;
  *(_DWORD *)(*((_DWORD *)this + 2) + 4) = *((_DWORD *)this + 2);
  **((_DWORD **)this + 2) = *((_DWORD *)this + 2);
  *(_DWORD *)(*((_DWORD *)this + 2) + 8) = *((_DWORD *)this + 2);
  *((_DWORD *)this + 3) = 0;
  *((float *)this + 6) = 0.0;
  *((float *)this + 7) = 0.0;
  *((float *)this + 8) = 0.0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 140) = 0.0;
  *((float *)this + 141) = 0.0;
  *((float *)this + 142) = 0.0;
  *((float *)this + 143) = 0.0;
  *((float *)this + 144) = 0.0;
  *((float *)this + 145) = 0.0;
  *((float *)this + 146) = 0.0;
  *((float *)this + 147) = 0.0;
  *((float *)this + 148) = 0.0;
  std::string::string((char *)this + 596);
  *((_DWORD *)this + 158) = 0;
  *((_DWORD *)this + 159) = 0;
  *((_DWORD *)this + 160) = 0;
  *((float *)this + 161) = 0.0;
  *((float *)this + 162) = 0.0;
  v119 = 64;
  *((float *)this + 163) = 0.0;
  v118 = 0;
  *((float *)this + 165) = 0.0;
  v117 = (char *)this + 644;
  *((float *)this + 166) = 0.0;
  *((float *)this + 167) = 0.0;
  *((float *)this + 169) = 0.0;
  *((float *)this + 170) = 0.0;
  *((float *)this + 171) = 0.0;
  *((float *)this + 173) = 0.0;
  *((float *)this + 174) = 0.0;
  *((float *)this + 175) = 0.0;
  memset(v117, v118, v119);
  sub_101786E0(1.0);
  *((float *)this + 176) = 1.0;
  *((_DWORD *)this + 178) = 0;
  *((_DWORD *)this + 179) = 0;
  *((_DWORD *)this + 180) = 0;
  *((_BYTE *)this + 724) = 0;
  *((_DWORD *)this + 184) = 0;
  *((_DWORD *)this + 185) = 0;
  *((_DWORD *)this + 186) = 0;
  sub_1017CD10();
  *((_DWORD *)this + 221) = 0;
  *((_DWORD *)this + 222) = 0;
  *((_DWORD *)this + 223) = 0;
  PRTSettings::PRTSettings((World *)((char *)this + 896));
  std::string::string((char *)this + 3188);
  *((_DWORD *)this + 806) = 0;
  *((_DWORD *)this + 807) = 0;
  *((_DWORD *)this + 808) = 0;
  *((_DWORD *)this + 810) = 0;
  *((_DWORD *)this + 811) = 0;
  *((_DWORD *)this + 812) = 0;
  *((_DWORD *)this + 814) = 0;
  *((_DWORD *)this + 815) = 0;
  *((_DWORD *)this + 816) = 0;
  *((_DWORD *)this + 818) = 0;
  *((_DWORD *)this + 819) = 0;
  *((_DWORD *)this + 820) = 0;
  SkySettings::SkySettings((World *)((char *)this + 3288));
  *((float *)this + 194) = 1.0;
  v119 = 220;
  *((float *)this + 19) = 0.0;
  *((_DWORD *)this + 948) = 0;
  *((_DWORD *)this + 18) = 5000;
  *((float *)this + 10) = 5000.0;
  *((float *)this + 11) = 0.0;
  *((float *)this + 12) = 2.0;
  *((float *)this + 13) = 0.0;
  *((float *)this + 14) = 0.0;
  *((float *)this + 15) = 0.0;
  v127 = 1.0;
  v128 = 1.0;
  *((float *)this + 6) = 1.0;
  v129 = 1.0;
  v130 = 1.0;
  *((float *)this + 7) = 1.0;
  *((float *)this + 16) = 0.0;
  *((float *)this + 8) = 1.0;
  *((float *)this + 9) = 1.0;
  v3 = COERCE_FLOAT(operator new(v119));
  v121 = v3;
  LOBYTE(v139) = 15;
  if ( v3 == 0.0 )
    v4 = 0;
  else
    v4 = sub_1013F3A0(LODWORD(v3));
  *((_DWORD *)this + 4) = v4;
  *((float *)this + 131) = 50.0;
  v121 = COERCE_FLOAT(&v113);
  *((float *)this + 134) = 50.0;
  *((float *)this + 140) = 0.0;
  *((float *)this + 135) = 50.0;
  *((float *)this + 141) = 0.0;
  *((float *)this + 142) = 0.0;
  LOBYTE(v139) = 14;
  *((float *)this + 143) = 0.0;
  v123 = 1.0;
  *((float *)this + 144) = 0.0;
  v124 = 1.0;
  v125 = 1.0;
  *((float *)this + 146) = v123;
  *((float *)this + 145) = 0.0;
  v5 = v125;
  *((float *)this + 147) = 1.0;
  v112 = &unk_101CB1E6;
  *((_BYTE *)this + 780) = 0;
  *((_DWORD *)this + 132) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_DWORD *)this + 189) = 0;
  *((_BYTE *)this + 748) = 1;
  *((_DWORD *)this + 188) = 10;
  *((_DWORD *)this + 136) = 100;
  *((_DWORD *)this + 137) = 100;
  *((_BYTE *)this + 552) = 0;
  *((float *)this + 148) = v5;
  *((_DWORD *)this + 192) = 0;
  *((_BYTE *)this + 772) = 0;
  *((_BYTE *)this + 760) = 1;
  *((_BYTE *)this + 761) = 1;
  *((_BYTE *)this + 762) = 1;
  *((_BYTE *)this + 763) = 1;
  *((_BYTE *)this + 81) = 0;
  *((_BYTE *)this + 80) = 0;
  *((_BYTE *)this + 82) = 0;
  *((_BYTE *)this + 782) = 1;
  *((_BYTE *)this + 84) = 0;
  *((_BYTE *)this + 764) = 1;
  *((_BYTE *)this + 3284) = 1;
  std::string::string(&v113, v112);
  v122 = COERCE_FLOAT(&v106);
  LOBYTE(v139) = 16;
  std::string::string(&v106, "ShowCollisionFace");
  LOBYTE(v139) = 17;
  Engine::Instance();
  LOBYTE(v139) = 14;
  v6 = sub_1017C0D0(v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119);
  v119 = 0;
  v118 = 1;
  *((_BYTE *)this + 728) = v6;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Call DrawIndexedPrimitive?");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 18;
  std::string::string(&v104, "Debugging");
  v103 = (int)this + 760;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 19;
  std::string::string(&v96, "Draw Meshes");
  LOBYTE(v139) = 14;
  v7 = (struct EditorVar *)EditorVar::EditorVar(
                             v126,
                             v96,
                             v97,
                             v98,
                             v99,
                             v100,
                             v101,
                             v102,
                             v103,
                             v104,
                             v105,
                             v106,
                             v107,
                             v108,
                             v109,
                             (int)v110,
                             v111,
                             (int)v112,
                             v113,
                             v114,
                             v115,
                             v116,
                             (int)v117,
                             v118,
                             v119);
  LOBYTE(v139) = 20;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v7);
  LOBYTE(v139) = 14;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Allow color buffer change");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 21;
  std::string::string(&v104, "Debugging");
  v103 = (int)this + 761;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 22;
  std::string::string(&v96, "Update Color Buffers");
  LOBYTE(v139) = 14;
  v8 = (struct EditorVar *)EditorVar::EditorVar(
                             v126,
                             v96,
                             v97,
                             v98,
                             v99,
                             v100,
                             v101,
                             v102,
                             v103,
                             v104,
                             v105,
                             v106,
                             v107,
                             v108,
                             v109,
                             (int)v110,
                             v111,
                             (int)v112,
                             v113,
                             v114,
                             v115,
                             v116,
                             (int)v117,
                             v118,
                             v119);
  LOBYTE(v139) = 23;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v8);
  LOBYTE(v139) = 14;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Updates lighting states for meshes");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 24;
  std::string::string(&v104, "Debugging");
  LOBYTE(v139) = 25;
  v103 = (int)this + 762;
  i = COERCE_FLOAT(&v96);
  std::string::string(&v96, "Update Mesh States");
  LOBYTE(v139) = 14;
  v9 = (struct EditorVar *)EditorVar::EditorVar(
                             v126,
                             v96,
                             v97,
                             v98,
                             v99,
                             v100,
                             v101,
                             v102,
                             v103,
                             v104,
                             v105,
                             v106,
                             v107,
                             v108,
                             v109,
                             (int)v110,
                             v111,
                             (int)v112,
                             v113,
                             v114,
                             v115,
                             v116,
                             (int)v117,
                             v118,
                             v119);
  LOBYTE(v139) = 26;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v9);
  LOBYTE(v139) = 14;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Do postrender");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 27;
  std::string::string(&v104, "Debugging");
  v103 = (int)this + 763;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 28;
  std::string::string(&v96, "World.PostRender()");
  LOBYTE(v139) = 14;
  v10 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 29;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v10);
  LOBYTE(v139) = 14;
  EditorVar::~EditorVar((EditorVar *)v126);
  sub_10001440(v131);
  v123 = 0.0;
  v124 = 0.0;
  v132 = 0.0;
  v125 = 0.0;
  v133 = 0.0;
  v134 = 0.0;
  LOBYTE(v139) = 30;
  v135 = 0.0;
  v136 = 0.0;
  v137 = 0.0;
  if ( !byte_11241B0C )
  {
    v11 = (void (__thiscall ***)(void *, float *, float *))sub_1005F1C0();
    v119 = (size_t)&v123;
    v118 = (int)&v127;
    i = v135 + 1000.0;
    v122 = v136 + 400.0;
    v121 = v137 + 1000.0;
    v123 = i;
    v124 = v122;
    v125 = v121;
    v121 = v132 - 1000.0;
    v122 = v133 - 400.0;
    i = v134 - 1000.0;
    v127 = v121;
    v128 = v122;
    v129 = i;
    (**v11)(v11, &v127, &v123);
  }
  byte_11241B0C = 1;
  *(float *)&v12 = COERCE_FLOAT(operator new(0x9Cu));
  v121 = *(float *)&v12;
  LOBYTE(v139) = 31;
  if ( *(float *)&v12 == 0.0 )
    v13 = 0;
  else
    v13 = Texture::Texture(v12);
  LOBYTE(v139) = 30;
  *((_DWORD *)this + 156) = v13;
  v14 = *((float *)Engine::Instance() + 29);
  v121 = COERCE_FLOAT(&v113);
  i = v14;
  std::string::string(&v113, &unk_101CB1E7);
  v122 = COERCE_FLOAT(&v106);
  LOBYTE(v139) = 32;
  std::string::string(&v106, "LogTick");
  LOBYTE(v139) = 30;
  if ( (unsigned __int8)sub_1017BD70(v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119) )
  {
    v121 = COERCE_FLOAT(&v113);
    std::string::string(&v113, &unk_101CB1F7);
    v122 = COERCE_FLOAT(&v106);
    LOBYTE(v139) = 33;
    std::string::string(&v106, "LogTick");
    LOBYTE(v139) = 30;
    v15 = sub_1017C0D0(v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119);
  }
  else
  {
    v15 = 0;
  }
  v121 = COERCE_FLOAT(&v113);
  v112 = &unk_101CB20A;
  *((_BYTE *)this + 725) = v15;
  std::string::string(&v113, v112);
  v122 = COERCE_FLOAT(&v106);
  LOBYTE(v139) = 34;
  std::string::string(&v106, "LogPreRender");
  LOBYTE(v139) = 30;
  if ( (unsigned __int8)sub_1017BD70(v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119) )
  {
    v121 = COERCE_FLOAT(&v113);
    std::string::string(&v113, &unk_101CB20B);
    v122 = COERCE_FLOAT(&v106);
    LOBYTE(v139) = 35;
    std::string::string(&v106, "LogPreRender");
    LOBYTE(v139) = 30;
    v16 = sub_1017C0D0(v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119);
  }
  else
  {
    v16 = 0;
  }
  v121 = COERCE_FLOAT(&v113);
  v112 = &unk_101CB227;
  *((_BYTE *)this + 726) = v16;
  std::string::string(&v113, v112);
  v122 = COERCE_FLOAT(&v106);
  LOBYTE(v139) = 36;
  std::string::string(&v106, "LogPostRender");
  LOBYTE(v139) = 30;
  if ( (unsigned __int8)sub_1017BD70(v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119) )
  {
    v121 = COERCE_FLOAT(&v113);
    std::string::string(&v113, &unk_101CB232);
    v122 = COERCE_FLOAT(&v106);
    LOBYTE(v139) = 37;
    std::string::string(&v106, "LogPostRender");
    LOBYTE(v139) = 30;
    v17 = sub_1017C0D0(v106, v107, v108, v109, v110, v111, v112, v113, v114, v115, v116, v117, v118, v119);
  }
  else
  {
    v17 = 0;
  }
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  v110 = "Whether Lights and Actors are checked for rendering against the camera frustum. Performance gain if small camera frustum.";
  *((_BYTE *)this + 727) = v17;
  std::string::string(&v111, v110);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 38;
  std::string::string(&v104, " World");
  v103 = (int)this + 84;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 39;
  std::string::string(&v96, "FarClipSpatialBatching");
  LOBYTE(v139) = 30;
  v18 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 40;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v18);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(
    &v111,
    "Distance at which fog reaches full white. Make this very high, or you will get fog very early");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 41;
  std::string::string(&v104, " World");
  v103 = (int)this + 40;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 42;
  std::string::string(&v96, "Fog Distance");
  LOBYTE(v139) = 30;
  v19 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 43;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v19);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(
    &v111,
    "Distance at which fog reaches full white. Make this very high, or you will get fog very early");
  LOBYTE(v139) = 44;
  v122 = COERCE_FLOAT(&v104);
  std::string::string(&v104, " World");
  v103 = (int)this + 44;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 45;
  std::string::string(&v96, "Fog Distance Var");
  LOBYTE(v139) = 30;
  v20 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 46;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v20);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Fog Color");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 47;
  std::string::string(&v104, " World");
  v103 = (int)this + 24;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 48;
  std::string::string(&v96, "Fog Color");
  LOBYTE(v139) = 30;
  v21 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 49;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v21);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Fog Exponential Increase");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 50;
  std::string::string(&v104, " World");
  v103 = (int)this + 48;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 51;
  std::string::string(&v96, "Fog Exponent");
  LOBYTE(v139) = 30;
  v22 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 52;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v22);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Fog Exponential Increase");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 53;
  std::string::string(&v104, " World");
  v103 = (int)this + 52;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 54;
  std::string::string(&v96, "Fog Exponent Var");
  LOBYTE(v139) = 30;
  v23 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 55;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v23);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Fog Start-Distance Bias");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 56;
  std::string::string(&v104, " World");
  v103 = (int)this + 56;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 57;
  std::string::string(&v96, "Fog Start Distance");
  LOBYTE(v139) = 30;
  v24 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 58;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v24);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Fog Start-Distance Bias");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 59;
  std::string::string(&v104, " World");
  v103 = (int)this + 60;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 60;
  std::string::string(&v96, "Fog Start Distance Var");
  LOBYTE(v139) = 30;
  v25 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 61;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v25);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Default clipping plane distance");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 62;
  std::string::string(&v104, " World");
  v103 = (int)this + 72;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 63;
  std::string::string(&v96, "Clip Distance");
  LOBYTE(v139) = 30;
  v26 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 64;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v26);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Default clipping plane distance");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 65;
  std::string::string(&v104, " World");
  LOBYTE(v139) = 66;
  v103 = (int)this + 76;
  i = COERCE_FLOAT(&v96);
  std::string::string(&v96, "Clip Distance Var");
  LOBYTE(v139) = 30;
  v27 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 67;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v27);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Cone radius for SH sky light");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 68;
  std::string::string(&v104, " World");
  v103 = (int)this + 524;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 69;
  std::string::string(&v96, "Sky Cone Radius");
  LOBYTE(v139) = 30;
  v28 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 70;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v28);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Overall LOD/Culling bias for scene objects");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 71;
  std::string::string(&v104, " World");
  v103 = (int)this + 776;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 72;
  std::string::string(&v96, "LOD/Cull Bias");
  LOBYTE(v139) = 30;
  v29 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 73;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v29);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Always disable occlusion culling on this map?");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 74;
  std::string::string(&v104, " World");
  v103 = (int)this + 20;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 75;
  std::string::string(&v96, "Disable Occlusion");
  LOBYTE(v139) = 30;
  v30 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 76;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v30);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Whether this World wants *all* its Lights wrapped into the ScriptingSystem");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 77;
  std::string::string(&v104, " World");
  v103 = (int)this + 782;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 78;
  std::string::string(&v96, "Script All Lights");
  LOBYTE(v139) = 30;
  v31 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 79;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v31);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "The scene's name");
  LOBYTE(v139) = 80;
  v122 = COERCE_FLOAT(&v104);
  std::string::string(&v104, " World");
  v103 = (int)this + 596;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 81;
  std::string::string(&v96, "SceneName");
  LOBYTE(v139) = 30;
  v32 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 82;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v32);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "The texture when loading.");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 83;
  std::string::string(&v104, " World");
  v103 = *((_DWORD *)this + 156);
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 84;
  std::string::string(&v96, "LoadTexture");
  LOBYTE(v139) = 30;
  v33 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 85;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v33);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Default camera position");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 86;
  std::string::string(&v104, " World");
  v103 = (int)this + 572;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 87;
  std::string::string(&v96, "CameraPosX");
  LOBYTE(v139) = 30;
  v34 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 88;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v34);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Default camera position");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 89;
  std::string::string(&v104, " World");
  v103 = (int)this + 576;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 90;
  std::string::string(&v96, "CameraPosY");
  LOBYTE(v139) = 30;
  v35 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 91;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v35);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Default camera position");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 92;
  std::string::string(&v104, " World");
  v103 = (int)this + 580;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 93;
  std::string::string(&v96, "CameraPosZ");
  LOBYTE(v139) = 30;
  v36 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 94;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v36);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Default camera direction");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 95;
  std::string::string(&v104, " World");
  v103 = (int)this + 584;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 96;
  std::string::string(&v96, "CameraDirX");
  LOBYTE(v139) = 30;
  v37 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 97;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v37);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Default camera direction");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 98;
  std::string::string(&v104, " World");
  v103 = (int)this + 588;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 99;
  std::string::string(&v96, "CameraDirY");
  LOBYTE(v139) = 30;
  v38 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 100;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v38);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Default camera direction");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 101;
  std::string::string(&v104, " World");
  v103 = (int)this + 592;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 102;
  std::string::string(&v96, "CameraDirZ");
  LOBYTE(v139) = 30;
  v39 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 103;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v39);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, "Whether to use a dynamic SkyController in this World.");
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 104;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3288;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 105;
  std::string::string(&v96, "Enable Sky");
  LOBYTE(v139) = 30;
  v40 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 106;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v40);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB233);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 107;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3368;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 108;
  std::string::string(&v96, "DayTimeStart");
  LOBYTE(v139) = 30;
  v41 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 109;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v41);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB25A);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 110;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3376;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 111;
  std::string::string(&v96, "DayTimeSpeed");
  LOBYTE(v139) = 30;
  v42 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 112;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v42);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB25B);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 113;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3396;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 114;
  std::string::string(&v96, "ScriptClass");
  LOBYTE(v139) = 30;
  v43 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 115;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v43);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB266);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 116;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3290;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 117;
  std::string::string(&v96, "DisplayTime");
  LOBYTE(v139) = 30;
  v44 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 118;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v44);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB267);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 119;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3292;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 120;
  std::string::string(&v96, "SkyBoxSize");
  LOBYTE(v139) = 30;
  v45 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 121;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v45);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB27D);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 122;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3424;
  LOBYTE(v139) = 123;
  i = COERCE_FLOAT(&v96);
  std::string::string(&v96, "SkyShaderFile");
  LOBYTE(v139) = 30;
  v46 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 124;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v46);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB27E);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 125;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3452;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 126;
  std::string::string(&v96, "SkyBGShaderTechnique");
  LOBYTE(v139) = 30;
  v47 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = 127;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v47);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB27F);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = 0x80;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3296;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -127;
  std::string::string(&v96, "EnvironmentMapMultiplier");
  LOBYTE(v139) = 30;
  v48 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -126;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v48);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB2A3);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -125;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3480;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -124;
  std::string::string(&v96, "SunAmbientLightName");
  LOBYTE(v139) = 30;
  v49 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -123;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v49);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB2AE);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -122;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3508;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -121;
  std::string::string(&v96, "MoonAmbientLightName");
  LOBYTE(v139) = 30;
  v50 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -120;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v50);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB2AF);
  LOBYTE(v139) = -119;
  v122 = COERCE_FLOAT(&v104);
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3536;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -118;
  std::string::string(&v96, "MoonShaderTechnique");
  LOBYTE(v139) = 30;
  v51 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -117;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v51);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB2C3);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -116;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3564;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -115;
  std::string::string(&v96, "MoonTexture");
  LOBYTE(v139) = 30;
  v52 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -114;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v52);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB2D2);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -113;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3300;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -112;
  std::string::string(&v96, "MoonCycleMinuteOffset");
  LOBYTE(v139) = 30;
  v53 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -111;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v53);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB2D3);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -110;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3304;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -109;
  std::string::string(&v96, "MoonYDistance");
  LOBYTE(v139) = 30;
  v54 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -108;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v54);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB2DE);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -107;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3308;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -106;
  std::string::string(&v96, "MoonXDistance");
  LOBYTE(v139) = 30;
  v55 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -105;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v55);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB2DF);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -104;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3592;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -103;
  std::string::string(&v96, "SunShaderTechnique");
  LOBYTE(v139) = 30;
  v56 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -102;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v56);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB2F3);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -101;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3620;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -100;
  std::string::string(&v96, "SunTexture");
  LOBYTE(v139) = 30;
  v57 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -99;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v57);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB311);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -98;
  std::string::string(&v104, " Sky");
  LOBYTE(v139) = -97;
  v103 = (int)this + 3312;
  i = COERCE_FLOAT(&v96);
  std::string::string(&v96, "SunCycleMinuteOffset");
  LOBYTE(v139) = 30;
  v58 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -96;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v58);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB312);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -95;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3316;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -94;
  std::string::string(&v96, "SunYDistance");
  LOBYTE(v139) = 30;
  v59 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -93;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v59);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB313);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -92;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3320;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -91;
  std::string::string(&v96, "SunXDistance");
  LOBYTE(v139) = 30;
  v60 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -90;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v60);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB321);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -89;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3788;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -88;
  std::string::string(&v96, "FogIntensity");
  LOBYTE(v139) = 30;
  v61 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -87;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v61);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB322);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -86;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3648;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -85;
  std::string::string(&v96, "SkyTextureName");
  LOBYTE(v139) = 30;
  v62 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -84;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v62);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB323);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -83;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3676;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -82;
  std::string::string(&v96, "SkyTextureNameEnv");
  LOBYTE(v139) = 30;
  v63 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -81;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v63);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB332);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -80;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3328;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -79;
  std::string::string(&v96, "HasClouds");
  LOBYTE(v139) = 30;
  v64 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -78;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v64);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB333);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -77;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3704;
  LOBYTE(v139) = -76;
  i = COERCE_FLOAT(&v96);
  std::string::string(&v96, "CloudModel");
  LOBYTE(v139) = 30;
  v65 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -75;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v65);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB342);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -74;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3732;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -73;
  std::string::string(&v96, "CloudMaterialName");
  LOBYTE(v139) = 30;
  v66 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -72;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v66);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB343);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -71;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3760;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -70;
  std::string::string(&v96, "CloudShaderTechnique");
  LOBYTE(v139) = 30;
  v67 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -69;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v67);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB355);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -68;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3329;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -67;
  std::string::string(&v96, "HasLightning");
  LOBYTE(v139) = 30;
  v68 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -66;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v68);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB356);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -65;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3332;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -64;
  std::string::string(&v96, "LightningStartMinutes");
  LOBYTE(v139) = 30;
  v69 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -63;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v69);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB357);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -62;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3336;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -61;
  std::string::string(&v96, "LightningEndMinutes");
  LOBYTE(v139) = 30;
  v70 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -60;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v70);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB3D2);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -59;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3340;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -58;
  std::string::string(&v96, "LightningFlashFrequency");
  LOBYTE(v139) = 30;
  v71 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -57;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v71);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB3D3);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -56;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3344;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -55;
  std::string::string(&v96, "DrawSun");
  LOBYTE(v139) = 30;
  v72 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -54;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v72);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB3DB);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -53;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3345;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -52;
  std::string::string(&v96, "DrawMoon");
  LOBYTE(v139) = 30;
  v73 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -51;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v73);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB3F3);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -50;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3348;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -49;
  std::string::string(&v96, "SkyIntensity_HDR");
  LOBYTE(v139) = 30;
  v74 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -48;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v74);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB3FE);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -47;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3352;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -46;
  std::string::string(&v96, "SkyIntensity_LDR");
  LOBYTE(v139) = 30;
  v75 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -45;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v75);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB3FF);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -44;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3356;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -43;
  std::string::string(&v96, "CloudIntensity_HDR");
  LOBYTE(v139) = 30;
  v76 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -42;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v76);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB45E);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -41;
  std::string::string(&v104, " Sky");
  LOBYTE(v139) = -40;
  v103 = (int)this + 3360;
  i = COERCE_FLOAT(&v96);
  std::string::string(&v96, "CloudIntensity_LDR");
  LOBYTE(v139) = 30;
  v77 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -39;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v77);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB45F);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -38;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3364;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -37;
  std::string::string(&v96, "AntiFogBias");
  LOBYTE(v139) = 30;
  v78 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -36;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v78);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB467);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -35;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3384;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -34;
  std::string::string(&v96, "SunLightIntensityMultiplier");
  LOBYTE(v139) = 30;
  v79 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -33;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v79);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB475);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -32;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3388;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -31;
  std::string::string(&v96, "MoonLightIntensityMultiplier");
  LOBYTE(v139) = 30;
  v80 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -30;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v80);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB476);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -29;
  std::string::string(&v104, " Sky");
  v103 = (int)this + 3392;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -28;
  std::string::string(&v96, "MaxDayTime");
  LOBYTE(v139) = 30;
  v81 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -27;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v81);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB477);
  LOBYTE(v139) = -26;
  v122 = COERCE_FLOAT(&v104);
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 748;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -25;
  std::string::string(&v96, "IsOctree");
  LOBYTE(v139) = 30;
  v82 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -24;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v82);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB4D6);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -23;
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 752;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -22;
  std::string::string(&v96, "ChildPerLeaf");
  LOBYTE(v139) = 30;
  v83 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -21;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v83);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CBDA4);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -20;
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 724;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -19;
  std::string::string(&v96, "AsyncLoad");
  LOBYTE(v139) = 30;
  v84 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -18;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v84);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB4D7);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -17;
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 536;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -16;
  std::string::string(&v96, "SubareaBorderX");
  LOBYTE(v139) = 30;
  v85 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -15;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v85);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB4DF);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -14;
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 540;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -13;
  std::string::string(&v96, "SubareaBorderZ");
  LOBYTE(v139) = 30;
  v86 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -12;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v86);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB4E7);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -11;
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 544;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -10;
  std::string::string(&v96, "SubareaWidthX");
  LOBYTE(v139) = 30;
  v87 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -9;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v87);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB4F2);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -8;
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 548;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -7;
  std::string::string(&v96, "SubareaWidthZ");
  LOBYTE(v139) = 30;
  v88 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -6;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v88);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB4F3);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -5;
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 560;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -4;
  std::string::string(&v96, "LogicCoordOffsetX");
  LOBYTE(v139) = 30;
  v89 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  LOBYTE(v139) = -3;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v89);
  LOBYTE(v139) = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB50D);
  v122 = COERCE_FLOAT(&v104);
  LOBYTE(v139) = -2;
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 564;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = -1;
  std::string::string(&v96, "LogicCoordOffsetY");
  LOBYTE(v139) = 30;
  v90 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  v139 = 256;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v90);
  v139 = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v119 = 0;
  v118 = 1;
  v121 = COERCE_FLOAT(&v111);
  std::string::string(&v111, &unk_101CB50E);
  v122 = COERCE_FLOAT(&v104);
  v139 = 257;
  std::string::string(&v104, " Spatial Partitioning");
  v103 = (int)this + 568;
  i = COERCE_FLOAT(&v96);
  LOBYTE(v139) = 2;
  std::string::string(&v96, "LogicCoordOffsetZ");
  v139 = 30;
  v91 = (struct EditorVar *)EditorVar::EditorVar(
                              v126,
                              v96,
                              v97,
                              v98,
                              v99,
                              v100,
                              v101,
                              v102,
                              v103,
                              v104,
                              v105,
                              v106,
                              v107,
                              v108,
                              v109,
                              (int)v110,
                              v111,
                              (int)v112,
                              v113,
                              v114,
                              v115,
                              v116,
                              (int)v117,
                              v118,
                              v119);
  v139 = 259;
  std::vector<EditorVar>::push_back((_DWORD *)this + 220, v91);
  v139 = 30;
  EditorVar::~EditorVar((EditorVar *)v126);
  v92 = 0;
  for ( i = 0.0; ; LODWORD(i) += 96 )
  {
    v93 = *(_DWORD *)((char *)this + 3115);
    if ( !v93 || v92 >= (*(_DWORD *)((char *)this + 3119) - v93) / 96 )
      break;
    v94 = *(_DWORD *)((char *)this + 3115);
    if ( !v94 || v92 >= (*(_DWORD *)((char *)this + 3119) - v94) / 96 )
      invalid_parameter_noinfo();
    std::vector<EditorVar>::push_back(
      (_DWORD *)this + 220,
      (struct EditorVar *)(LODWORD(i) + *(_DWORD *)((char *)this + 3115)));
    ++v92;
  }
  LOBYTE(v139) = 14;
  sub_1017A0B0(v131);
  return this;
}

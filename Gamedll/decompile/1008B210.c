/*
 * func-name: ??0Effect_MultiTexParticles@@QAE@PAVWorld@@@Z_0
 * func-address: 0x1008b210
 * callers: 0x1001a47e
 * callees: none
 */

Effect_MultiTexParticles *__thiscall Effect_MultiTexParticles::Effect_MultiTexParticles(
        Effect_MultiTexParticles *this,
        struct World *a2)
{
  Editor *v3; // eax
  float v4; // ecx
  World *v5; // ecx
  Editor *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v40; // [esp+BF0h] [ebp-100h] BYREF
  int v41; // [esp+BF4h] [ebp-FCh]
  int v42; // [esp+BF8h] [ebp-F8h]
  int v43; // [esp+BFCh] [ebp-F4h]
  int v44; // [esp+C00h] [ebp-F0h]
  int v45; // [esp+C04h] [ebp-ECh]
  int v46; // [esp+C08h] [ebp-E8h]
  char *v47; // [esp+C0Ch] [ebp-E4h]
  int v48; // [esp+C10h] [ebp-E0h] BYREF
  int v49; // [esp+C14h] [ebp-DCh]
  int v50; // [esp+C18h] [ebp-D8h]
  int v51; // [esp+C1Ch] [ebp-D4h]
  int v52; // [esp+C20h] [ebp-D0h]
  int v53; // [esp+C24h] [ebp-CCh]
  int v54; // [esp+C28h] [ebp-C8h] BYREF
  int v55; // [esp+C2Ch] [ebp-C4h] BYREF
  int v56; // [esp+C30h] [ebp-C0h]
  int v57; // [esp+C34h] [ebp-BCh]
  int v58; // [esp+C38h] [ebp-B8h]
  int v59; // [esp+C3Ch] [ebp-B4h]
  int v60; // [esp+C40h] [ebp-B0h]
  int v61; // [esp+C44h] [ebp-ACh]
  int v62; // [esp+C48h] [ebp-A8h]
  int v63; // [esp+C4Ch] [ebp-A4h]
  Effect_MultiTexParticles *v64; // [esp+C64h] [ebp-8Ch]
  int *v65; // [esp+C68h] [ebp-88h]
  int *v66; // [esp+C6Ch] [ebp-84h]
  int *v67; // [esp+C70h] [ebp-80h]
  float v68; // [esp+C74h] [ebp-7Ch]
  float v69; // [esp+C78h] [ebp-78h]
  float v70; // [esp+C7Ch] [ebp-74h]
  float v71; // [esp+C80h] [ebp-70h]
  _BYTE v72[96]; // [esp+C84h] [ebp-6Ch] BYREF
  int v73; // [esp+CECh] [ebp-4h]

  v64 = this;
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Effect_MultiTexParticles::`vftable';
  *((float *)this + 282) = 0.0;
  *((float *)this + 283) = 0.0;
  *((float *)this + 284) = 0.0;
  *((float *)this + 285) = 0.0;
  v73 = 0;
  std::string::string((char *)this + 1148);
  std::string::string((char *)this + 1176);
  *((_DWORD *)this + 310) = 0;
  *((_DWORD *)this + 311) = 0;
  *((_DWORD *)this + 312) = 0;
  LOBYTE(v73) = 3;
  v3 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v3) )
  {
    v63 = 1;
    v62 = 0;
    v61 = 0;
    v65 = &v54;
    std::string::string(&v54, "ArrowTiny.reb");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  *((float *)this + 266) = 15.0;
  v63 = (int)"flames";
  *((_DWORD *)this + 264) = 2;
  *((float *)this + 268) = 0.64999998;
  *((_DWORD *)this + 263) = 2;
  *((_DWORD *)this + 265) = 250;
  *((float *)this + 269) = 6.3000002;
  *((_BYTE *)this + 1068) = 1;
  *((_DWORD *)this + 286) = 4;
  *((float *)this + 270) = 0.80000001;
  *((float *)this + 271) = 1000.0;
  *((float *)this + 272) = 300.0;
  *((float *)this + 273) = 400.0;
  *((float *)this + 274) = 0.15000001;
  *((float *)this + 275) = 0.079999998;
  *((float *)this + 276) = 0.0;
  *((float *)this + 277) = -8.0;
  *((float *)this + 278) = 0.0;
  *((float *)this + 279) = 0.0;
  *((float *)this + 280) = 0.0;
  *((float *)this + 281) = 0.0;
  v68 = 1.0;
  v69 = 1.0;
  v70 = 1.0;
  v71 = 1.0;
  *((float *)this + 282) = 1.0;
  v4 = v71;
  *((float *)this + 283) = 1.0;
  *((float *)this + 284) = 1.0;
  *((float *)this + 285) = v4;
  std::string::operator=((char *)this + 1148, v63);
  std::string::operator=((char *)this + 1176, &unk_1030C685);
  v5 = (World *)*((_DWORD *)this + 178);
  *((float *)this + 302) = 0.60000002;
  *((float *)this + 304) = 0.0;
  *((_BYTE *)this + 1204) = 0;
  *((_BYTE *)this + 1212) = 0;
  *((_DWORD *)this + 305) = 1;
  *((_BYTE *)this + 1224) = 0;
  *((_BYTE *)this + 1225) = 1;
  *((_BYTE *)this + 1226) = 0;
  *((_BYTE *)this + 1227) = 0;
  *((_BYTE *)this + 1228) = 1;
  *((_BYTE *)this + 1256) = 0;
  *((_DWORD *)this + 315) = 0;
  *((_DWORD *)this + 313) = -1;
  *((_BYTE *)this + 724) = 1;
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v6)) )
  {
    v63 = 0;
    v62 = 1;
    v65 = &v55;
    std::string::string(&v55, &unk_1030C6BC);
    v66 = &v48;
    LOBYTE(v73) = 4;
    std::string::string(&v48, &unk_1030C6C8);
    v47 = (char *)this + 1052;
    v67 = &v40;
    LOBYTE(v73) = 5;
    std::string::string(&v40, "BlendMode");
    LOBYTE(v73) = 3;
    v7 = EditorVar::EditorVar(
           v72,
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
           v61,
           v62,
           v63);
    LOBYTE(v73) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C6E0);
    v66 = &v48;
    LOBYTE(v73) = 7;
    std::string::string(&v48, &unk_1030C6E8);
    v47 = (char *)this + 1060;
    v65 = &v40;
    LOBYTE(v73) = 8;
    std::string::string(&v40, "NumUnits");
    LOBYTE(v73) = 3;
    v8 = EditorVar::EditorVar(
           v72,
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
           v61,
           v62,
           v63);
    LOBYTE(v73) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C700);
    v66 = &v48;
    LOBYTE(v73) = 10;
    std::string::string(&v48, &unk_1030C714);
    v47 = (char *)this + 1064;
    v65 = &v40;
    LOBYTE(v73) = 11;
    std::string::string(&v40, "SpawnInterval");
    LOBYTE(v73) = 3;
    v9 = EditorVar::EditorVar(
           v72,
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
           v61,
           v62,
           v63);
    LOBYTE(v73) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C730);
    v66 = &v48;
    LOBYTE(v73) = 13;
    std::string::string(&v48, &unk_1030C748);
    v47 = (char *)this + 1068;
    v65 = &v40;
    LOBYTE(v73) = 14;
    std::string::string(&v40, "StartAllSpawned");
    LOBYTE(v73) = 3;
    v10 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C764);
    v66 = &v48;
    LOBYTE(v73) = 16;
    std::string::string(&v48, &unk_1030C774);
    v47 = (char *)this + 1072;
    v65 = &v40;
    LOBYTE(v73) = 17;
    std::string::string(&v40, "ParticleDirVariance");
    LOBYTE(v73) = 3;
    v11 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C794);
    v66 = &v48;
    LOBYTE(v73) = 19;
    std::string::string(&v48, &unk_1030C7A0);
    v47 = (char *)this + 1076;
    v65 = &v40;
    LOBYTE(v73) = 20;
    std::string::string(&v40, "ParticleSpeed");
    LOBYTE(v73) = 3;
    v12 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 21;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C7BC);
    v66 = &v48;
    LOBYTE(v73) = 22;
    std::string::string(&v48, &unk_1030C7CC);
    v47 = (char *)this + 1080;
    v65 = &v40;
    LOBYTE(v73) = 23;
    std::string::string(&v40, "ParticleSpeedVariance");
    LOBYTE(v73) = 3;
    v13 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 24;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C7F0);
    v66 = &v48;
    LOBYTE(v73) = 25;
    std::string::string(&v48, &unk_1030C804);
    v47 = (char *)this + 1084;
    v65 = &v40;
    LOBYTE(v73) = 26;
    std::string::string(&v40, "ParticleLifeTime");
    LOBYTE(v73) = 3;
    v14 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 27;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C824);
    v66 = &v48;
    LOBYTE(v73) = 28;
    std::string::string(&v48, &unk_1030C838);
    v47 = (char *)this + 1088;
    v65 = &v40;
    LOBYTE(v73) = 29;
    std::string::string(&v40, "ParticleLifeTimeVariance");
    LOBYTE(v73) = 3;
    v15 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 30;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C860);
    v66 = &v48;
    LOBYTE(v73) = 31;
    std::string::string(&v48, &unk_1030C874);
    LOBYTE(v73) = 32;
    v47 = (char *)this + 1092;
    v65 = &v40;
    std::string::string(&v40, "ParticleTimeFadeOut");
    LOBYTE(v73) = 3;
    v16 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 33;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C894);
    v66 = &v48;
    LOBYTE(v73) = 34;
    std::string::string(&v48, &unk_1030C8A0);
    v47 = (char *)this + 1096;
    v65 = &v40;
    LOBYTE(v73) = 35;
    std::string::string(&v40, "ParticleSize");
    LOBYTE(v73) = 3;
    v17 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 36;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C8BC);
    v66 = &v48;
    LOBYTE(v73) = 37;
    std::string::string(&v48, &unk_1030C8CC);
    v47 = (char *)this + 1100;
    v65 = &v40;
    LOBYTE(v73) = 38;
    std::string::string(&v40, "ParticleSizeVariance");
    LOBYTE(v73) = 3;
    v18 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 39;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C8F0);
    v66 = &v48;
    LOBYTE(v73) = 40;
    std::string::string(&v48, &unk_1030C900);
    v47 = (char *)this + 1104;
    v65 = &v40;
    LOBYTE(v73) = 41;
    std::string::string(&v40, "AccelX");
    LOBYTE(v73) = 3;
    v19 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 42;
    std::vector<EditorVar>::push_back((char *)this + 424, v19);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C914);
    v66 = &v48;
    LOBYTE(v73) = 43;
    std::string::string(&v48, &unk_1030C924);
    v47 = (char *)this + 1108;
    v65 = &v40;
    LOBYTE(v73) = 44;
    std::string::string(&v40, "AccelY");
    LOBYTE(v73) = 3;
    v20 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 45;
    std::vector<EditorVar>::push_back((char *)this + 424, v20);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C938);
    LOBYTE(v73) = 46;
    v66 = &v48;
    std::string::string(&v48, &unk_1030C948);
    v47 = (char *)this + 1112;
    v65 = &v40;
    LOBYTE(v73) = 47;
    std::string::string(&v40, "AccelZ");
    LOBYTE(v73) = 3;
    v21 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 48;
    std::vector<EditorVar>::push_back((char *)this + 424, v21);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C95C);
    v66 = &v48;
    LOBYTE(v73) = 49;
    std::string::string(&v48, &unk_1030C96C);
    v47 = (char *)this + 1116;
    v65 = &v40;
    LOBYTE(v73) = 50;
    std::string::string(&v40, "PosVarX");
    LOBYTE(v73) = 3;
    v22 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 51;
    std::vector<EditorVar>::push_back((char *)this + 424, v22);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C980);
    v66 = &v48;
    LOBYTE(v73) = 52;
    std::string::string(&v48, &unk_1030C990);
    v47 = (char *)this + 1120;
    v65 = &v40;
    LOBYTE(v73) = 53;
    std::string::string(&v40, "PosVarY");
    LOBYTE(v73) = 3;
    v23 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 54;
    std::vector<EditorVar>::push_back((char *)this + 424, v23);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C9A4);
    v66 = &v48;
    LOBYTE(v73) = 55;
    std::string::string(&v48, &unk_1030C9B4);
    v47 = (char *)this + 1124;
    v65 = &v40;
    LOBYTE(v73) = 56;
    std::string::string(&v40, "PosVarZ");
    LOBYTE(v73) = 3;
    v24 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 57;
    std::vector<EditorVar>::push_back((char *)this + 424, v24);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C9C8);
    v66 = &v48;
    LOBYTE(v73) = 58;
    std::string::string(&v48, &unk_1030C9D4);
    v47 = (char *)this + 1128;
    v65 = &v40;
    LOBYTE(v73) = 59;
    std::string::string(&v40, "Color");
    LOBYTE(v73) = 3;
    v25 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 60;
    std::vector<EditorVar>::push_back((char *)this + 424, v25);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030C9E8);
    v66 = &v48;
    LOBYTE(v73) = 61;
    std::string::string(&v48, &unk_1030CA00);
    v47 = (char *)this + 1204;
    v65 = &v40;
    LOBYTE(v73) = 62;
    std::string::string(&v40, "LitBySky");
    LOBYTE(v73) = 3;
    v26 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 63;
    std::vector<EditorVar>::push_back((char *)this + 424, v26);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CA18);
    v66 = &v48;
    LOBYTE(v73) = 64;
    std::string::string(&v48, &unk_1030CA34);
    v47 = (char *)this + 1208;
    v65 = &v40;
    LOBYTE(v73) = 65;
    std::string::string(&v40, "SkyLitAmount");
    LOBYTE(v73) = 3;
    v27 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 66;
    std::vector<EditorVar>::push_back((char *)this + 424, v27);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CA50);
    v66 = &v48;
    LOBYTE(v73) = 67;
    std::string::string(&v48, &unk_1030CA64);
    LOBYTE(v73) = 68;
    v47 = (char *)this + 1212;
    v65 = &v40;
    std::string::string(&v40, "PreventIndoors");
    LOBYTE(v73) = 3;
    v28 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 69;
    std::vector<EditorVar>::push_back((char *)this + 424, v28);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CA80);
    v66 = &v48;
    LOBYTE(v73) = 70;
    std::string::string(&v48, &unk_1030CA90);
    v47 = (char *)this + 1216;
    v65 = &v40;
    LOBYTE(v73) = 71;
    std::string::string(&v40, "YAxisConstraint");
    LOBYTE(v73) = 3;
    v29 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 72;
    std::vector<EditorVar>::push_back((char *)this + 424, v29);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CAAC);
    v66 = &v48;
    LOBYTE(v73) = 73;
    std::string::string(&v48, &unk_1030CAC8);
    v47 = (char *)this + 1220;
    v65 = &v40;
    LOBYTE(v73) = 74;
    std::string::string(&v40, "SpawnTogetherAmount");
    LOBYTE(v73) = 3;
    v30 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 75;
    std::vector<EditorVar>::push_back((char *)this + 424, v30);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CAE8);
    v66 = &v48;
    LOBYTE(v73) = 76;
    std::string::string(&v48, &unk_1030CB08);
    v47 = (char *)this + 1224;
    v65 = &v40;
    LOBYTE(v73) = 77;
    std::string::string(&v40, "SortedSystem");
    LOBYTE(v73) = 3;
    v31 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 78;
    std::vector<EditorVar>::push_back((char *)this + 424, v31);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CB24);
    v66 = &v48;
    LOBYTE(v73) = 79;
    std::string::string(&v48, &unk_1030CB38);
    v47 = (char *)this + 1225;
    v65 = &v40;
    LOBYTE(v73) = 80;
    std::string::string(&v40, "FrustumCulling");
    LOBYTE(v73) = 3;
    v32 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 81;
    std::vector<EditorVar>::push_back((char *)this + 424, v32);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CB54);
    v66 = &v48;
    LOBYTE(v73) = 82;
    std::string::string(&v48, &unk_1030CB64);
    v47 = (char *)this + 1226;
    v65 = &v40;
    LOBYTE(v73) = 83;
    std::string::string(&v40, "IsStaticEffect");
    LOBYTE(v73) = 3;
    v33 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 84;
    std::vector<EditorVar>::push_back((char *)this + 424, v33);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CB80);
    v66 = &v48;
    LOBYTE(v73) = 85;
    std::string::string(&v48, &unk_1030CB90);
    v47 = (char *)this + 1144;
    v65 = &v40;
    LOBYTE(v73) = 86;
    std::string::string(&v40, "NumberOfTextures");
    LOBYTE(v73) = 3;
    v34 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 87;
    std::vector<EditorVar>::push_back((char *)this + 424, v34);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CBB0);
    v66 = &v48;
    LOBYTE(v73) = 88;
    std::string::string(&v48, &unk_1030CBC0);
    v47 = (char *)this + 1148;
    LOBYTE(v73) = 89;
    v65 = &v40;
    std::string::string(&v40, "GlowTextureFileName");
    LOBYTE(v73) = 3;
    v35 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 90;
    std::vector<EditorVar>::push_back((char *)this + 424, v35);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CBE0);
    v66 = &v48;
    LOBYTE(v73) = 91;
    std::string::string(&v48, &unk_1030CBF4);
    v47 = (char *)this + 1227;
    v65 = &v40;
    LOBYTE(v73) = 92;
    std::string::string(&v40, "IsFixPos");
    LOBYTE(v73) = 3;
    v36 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 93;
    std::vector<EditorVar>::push_back((char *)this + 424, v36);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CC0C);
    v66 = &v48;
    LOBYTE(v73) = 94;
    std::string::string(&v48, &unk_1030CC20);
    v47 = (char *)this + 1228;
    v65 = &v40;
    LOBYTE(v73) = 95;
    std::string::string(&v40, "IsRandom");
    LOBYTE(v73) = 3;
    v37 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 96;
    std::vector<EditorVar>::push_back((char *)this + 424, v37);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
    v63 = 0;
    v62 = 1;
    v67 = &v55;
    std::string::string(&v55, &unk_1030CC38);
    v66 = &v48;
    LOBYTE(v73) = 97;
    std::string::string(&v48, &unk_1030CC44);
    v47 = (char *)this + 1232;
    v65 = &v40;
    LOBYTE(v73) = 98;
    std::string::string(&v40, "WholeTime");
    LOBYTE(v73) = 3;
    v38 = EditorVar::EditorVar(
            v72,
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
            v61,
            v62,
            v63);
    LOBYTE(v73) = 99;
    std::vector<EditorVar>::push_back((char *)this + 424, v38);
    LOBYTE(v73) = 3;
    EditorVar::~EditorVar((EditorVar *)v72);
  }
  return this;
}

/*
 * func-name: ??0Effect_ParticleSystem@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10090470
 * callers: 0x10005187
 * callees: 0x1001aa87
 */

Effect_ParticleSystem *__thiscall Effect_ParticleSystem::Effect_ParticleSystem(
        Effect_ParticleSystem *this,
        struct World *a2)
{
  Editor *v3; // eax
  int v4; // eax
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
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v43; // [esp+D1Ch] [ebp-FCh] BYREF
  int v44; // [esp+D20h] [ebp-F8h]
  int v45; // [esp+D24h] [ebp-F4h]
  int v46; // [esp+D28h] [ebp-F0h]
  int v47; // [esp+D2Ch] [ebp-ECh]
  int v48; // [esp+D30h] [ebp-E8h]
  int v49; // [esp+D34h] [ebp-E4h]
  char *v50; // [esp+D38h] [ebp-E0h]
  int v51; // [esp+D3Ch] [ebp-DCh] BYREF
  int v52; // [esp+D40h] [ebp-D8h]
  int v53; // [esp+D44h] [ebp-D4h]
  int v54; // [esp+D48h] [ebp-D0h]
  int v55; // [esp+D4Ch] [ebp-CCh]
  int v56; // [esp+D50h] [ebp-C8h]
  int v57; // [esp+D54h] [ebp-C4h] BYREF
  const char *v58; // [esp+D58h] [ebp-C0h] BYREF
  int v59; // [esp+D5Ch] [ebp-BCh] BYREF
  int v60; // [esp+D60h] [ebp-B8h]
  int v61; // [esp+D64h] [ebp-B4h]
  int v62; // [esp+D68h] [ebp-B0h]
  int v63; // [esp+D6Ch] [ebp-ACh]
  int v64; // [esp+D70h] [ebp-A8h]
  int v65; // [esp+D74h] [ebp-A4h]
  int v66; // [esp+D78h] [ebp-A0h]
  Effect_ParticleSystem *v67; // [esp+D90h] [ebp-88h]
  const char **v68; // [esp+D94h] [ebp-84h]
  int *v69; // [esp+D98h] [ebp-80h]
  const char **v70; // [esp+D9Ch] [ebp-7Ch]
  float v71; // [esp+DA0h] [ebp-78h]
  float v72; // [esp+DA4h] [ebp-74h]
  float v73; // [esp+DA8h] [ebp-70h]
  _BYTE v74[96]; // [esp+DACh] [ebp-6Ch] BYREF
  int v75; // [esp+E14h] [ebp-4h]

  v67 = this;
  Effect_Base::Effect_Base(this, a2);
  *(_DWORD *)this = &Effect_ParticleSystem::`vftable';
  *((float *)this + 313) = 0.0;
  *((float *)this + 314) = 0.0;
  *((float *)this + 315) = 0.0;
  *((float *)this + 316) = 0.0;
  v75 = 0;
  *((float *)this + 317) = 0.0;
  *((float *)this + 318) = 0.0;
  v3 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v3) )
  {
    v66 = 1;
    v65 = 0;
    v64 = 0;
    v68 = (const char **)&v57;
    std::string::string(&v57, "ArrowTiny.reb");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  v66 = 1;
  *((float *)this + 285) = 15.0;
  v68 = (const char **)&v59;
  *((float *)this + 287) = 0.64999998;
  *((float *)this + 288) = 0.64999998;
  *((_DWORD *)this + 284) = 250;
  *((float *)this + 289) = 0.64999998;
  *((_BYTE *)this + 1144) = 1;
  *((_BYTE *)this + 1216) = 0;
  *((float *)this + 290) = 6.3000002;
  *((_BYTE *)this + 1224) = 0;
  *((_BYTE *)this + 1232) = 1;
  *((float *)this + 291) = 0.80000001;
  *((_DWORD *)this + 309) = 1;
  *((_BYTE *)this + 1240) = 0;
  *((float *)this + 292) = 1000.0;
  *((_BYTE *)this + 1241) = 1;
  *((_BYTE *)this + 1242) = 0;
  *((float *)this + 293) = 300.0;
  *((_BYTE *)this + 1243) = 0;
  *((float *)this + 294) = 400.0;
  *((float *)this + 295) = 200.0;
  *((float *)this + 296) = 0.15000001;
  *((float *)this + 297) = 0.079999998;
  *((float *)this + 298) = 0.0;
  *((float *)this + 299) = -8.0;
  *((float *)this + 300) = 0.0;
  *((float *)this + 301) = 0.0;
  *((float *)this + 302) = 0.0;
  *((float *)this + 303) = 0.0;
  *((float *)this + 305) = 0.60000002;
  *((float *)this + 307) = 0.0;
  *((float *)this + 311) = 0.0;
  *((float *)this + 312) = -1.0;
  v71 = 0.0;
  *((float *)this + 313) = 0.0;
  v72 = 0.0;
  v73 = 0.0;
  *((float *)this + 314) = 0.0;
  v58 = "DefaultTexture.dds";
  *((float *)this + 315) = 0.0;
  std::string::string(&v59, v58);
  v4 = Precacher::CacheTexture();
  v5 = (World *)*((_DWORD *)this + 178);
  *((_DWORD *)this + 319) = v4;
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v6)) )
  {
    v66 = 0;
    v65 = 1;
    v68 = &v58;
    std::string::string(&v58, &unk_1030D088);
    v69 = &v51;
    LOBYTE(v75) = 1;
    std::string::string(&v51, &unk_1030D090);
    v50 = (char *)this + 1136;
    v70 = (const char **)&v43;
    LOBYTE(v75) = 2;
    std::string::string(&v43, "NumUnits");
    LOBYTE(v75) = 0;
    v7 = EditorVar::EditorVar(
           v74,
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
           v63,
           v64,
           v65,
           v66);
    LOBYTE(v75) = 3;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D0A8);
    v69 = &v51;
    LOBYTE(v75) = 4;
    std::string::string(&v51, &unk_1030D0BC);
    v50 = (char *)this + 1140;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 5;
    std::string::string(&v43, "SpawnInterval");
    LOBYTE(v75) = 0;
    v8 = EditorVar::EditorVar(
           v74,
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
           v63,
           v64,
           v65,
           v66);
    LOBYTE(v75) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D0D8);
    v69 = &v51;
    LOBYTE(v75) = 7;
    std::string::string(&v51, &unk_1030D0F0);
    v50 = (char *)this + 1144;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 8;
    std::string::string(&v43, "StartAllSpawned");
    LOBYTE(v75) = 0;
    v9 = EditorVar::EditorVar(
           v74,
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
           v63,
           v64,
           v65,
           v66);
    LOBYTE(v75) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D10C);
    v69 = &v51;
    LOBYTE(v75) = 10;
    std::string::string(&v51, &unk_1030D11C);
    v50 = (char *)this + 1148;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 11;
    std::string::string(&v43, "ParticleDirVarianceX");
    LOBYTE(v75) = 0;
    v10 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D140);
    v69 = &v51;
    LOBYTE(v75) = 13;
    std::string::string(&v51, &unk_1030D150);
    v50 = (char *)this + 1152;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 14;
    std::string::string(&v43, "ParticleDirVarianceY");
    LOBYTE(v75) = 0;
    v11 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D174);
    v69 = &v51;
    LOBYTE(v75) = 16;
    std::string::string(&v51, &unk_1030D184);
    v50 = (char *)this + 1156;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 17;
    std::string::string(&v43, "ParticleDirVarianceZ");
    LOBYTE(v75) = 0;
    v12 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D1A8);
    v69 = &v51;
    LOBYTE(v75) = 19;
    std::string::string(&v51, &unk_1030D1B4);
    v50 = (char *)this + 1160;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 20;
    std::string::string(&v43, "ParticleSpeed");
    LOBYTE(v75) = 0;
    v13 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 21;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D1D0);
    v69 = &v51;
    LOBYTE(v75) = 22;
    std::string::string(&v51, &unk_1030D1E0);
    v50 = (char *)this + 1164;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 23;
    std::string::string(&v43, "ParticleSpeedVariance");
    LOBYTE(v75) = 0;
    v14 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 24;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D204);
    v69 = &v51;
    LOBYTE(v75) = 25;
    std::string::string(&v51, &unk_1030D218);
    v50 = (char *)this + 1168;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 26;
    std::string::string(&v43, "ParticleLifeTime");
    LOBYTE(v75) = 0;
    v15 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 27;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D238);
    v69 = &v51;
    LOBYTE(v75) = 28;
    std::string::string(&v51, &unk_1030D24C);
    LOBYTE(v75) = 29;
    v50 = (char *)this + 1172;
    v68 = (const char **)&v43;
    std::string::string(&v43, "ParticleLifeTimeVariance");
    LOBYTE(v75) = 0;
    v16 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 30;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D274);
    v69 = &v51;
    LOBYTE(v75) = 31;
    std::string::string(&v51, &unk_1030D288);
    v50 = (char *)this + 1176;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 32;
    std::string::string(&v43, "ParticleTimeFadeOut");
    LOBYTE(v75) = 0;
    v17 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 33;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D2A8);
    v69 = &v51;
    LOBYTE(v75) = 34;
    std::string::string(&v51, &unk_1030D2BC);
    v50 = (char *)this + 1180;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 35;
    std::string::string(&v43, "ParticleTimeFadeIn");
    LOBYTE(v75) = 0;
    v18 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 36;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D2DC);
    v69 = &v51;
    LOBYTE(v75) = 37;
    std::string::string(&v51, &unk_1030D2E8);
    v50 = (char *)this + 1184;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 38;
    std::string::string(&v43, "ParticleSize");
    LOBYTE(v75) = 0;
    v19 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 39;
    std::vector<EditorVar>::push_back((char *)this + 424, v19);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D304);
    v69 = &v51;
    LOBYTE(v75) = 40;
    std::string::string(&v51, &unk_1030D314);
    v50 = (char *)this + 1188;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 41;
    std::string::string(&v43, "ParticleSizeVariance");
    LOBYTE(v75) = 0;
    v20 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 42;
    std::vector<EditorVar>::push_back((char *)this + 424, v20);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D338);
    LOBYTE(v75) = 43;
    v69 = &v51;
    std::string::string(&v51, &unk_1030D348);
    v50 = (char *)this + 1192;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 44;
    std::string::string(&v43, "AccelX");
    LOBYTE(v75) = 0;
    v21 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 45;
    std::vector<EditorVar>::push_back((char *)this + 424, v21);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D35C);
    v69 = &v51;
    LOBYTE(v75) = 46;
    std::string::string(&v51, &unk_1030D36C);
    v50 = (char *)this + 1196;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 47;
    std::string::string(&v43, "AccelY");
    LOBYTE(v75) = 0;
    v22 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 48;
    std::vector<EditorVar>::push_back((char *)this + 424, v22);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D380);
    v69 = &v51;
    LOBYTE(v75) = 49;
    std::string::string(&v51, &unk_1030D390);
    v50 = (char *)this + 1200;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 50;
    std::string::string(&v43, "AccelZ");
    LOBYTE(v75) = 0;
    v23 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 51;
    std::vector<EditorVar>::push_back((char *)this + 424, v23);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D3A4);
    v69 = &v51;
    LOBYTE(v75) = 52;
    std::string::string(&v51, &unk_1030D3B4);
    v50 = (char *)this + 1204;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 53;
    std::string::string(&v43, "PosVarX");
    LOBYTE(v75) = 0;
    v24 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 54;
    std::vector<EditorVar>::push_back((char *)this + 424, v24);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D3C8);
    v69 = &v51;
    LOBYTE(v75) = 55;
    std::string::string(&v51, &unk_1030D3D8);
    v50 = (char *)this + 1208;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 56;
    std::string::string(&v43, "PosVarY");
    LOBYTE(v75) = 0;
    v25 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 57;
    std::vector<EditorVar>::push_back((char *)this + 424, v25);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D3EC);
    v69 = &v51;
    LOBYTE(v75) = 58;
    std::string::string(&v51, &unk_1030D3FC);
    v50 = (char *)this + 1212;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 59;
    std::string::string(&v43, "PosVarZ");
    LOBYTE(v75) = 0;
    v26 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 60;
    std::vector<EditorVar>::push_back((char *)this + 424, v26);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D410);
    v69 = &v51;
    LOBYTE(v75) = 61;
    std::string::string(&v51, &unk_1030D428);
    v50 = (char *)this + 1216;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 62;
    std::string::string(&v43, "LitBySky");
    LOBYTE(v75) = 0;
    v27 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 63;
    std::vector<EditorVar>::push_back((char *)this + 424, v27);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D440);
    v69 = &v51;
    LOBYTE(v75) = 64;
    std::string::string(&v51, &unk_1030D45C);
    v50 = (char *)this + 1220;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 65;
    std::string::string(&v43, "SkyLitAmount");
    LOBYTE(v75) = 0;
    v28 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 66;
    std::vector<EditorVar>::push_back((char *)this + 424, v28);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D478);
    v69 = &v51;
    LOBYTE(v75) = 67;
    std::string::string(&v51, &unk_1030D48C);
    v50 = (char *)this + 1224;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 68;
    std::string::string(&v43, "PreventIndoors");
    LOBYTE(v75) = 0;
    v29 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 69;
    std::vector<EditorVar>::push_back((char *)this + 424, v29);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D4A8);
    v69 = &v51;
    LOBYTE(v75) = 70;
    std::string::string(&v51, &unk_1030D4B8);
    v50 = (char *)this + 1228;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 71;
    std::string::string(&v43, "YAxisConstraint");
    LOBYTE(v75) = 0;
    v30 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 72;
    std::vector<EditorVar>::push_back((char *)this + 424, v30);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D4D4);
    v69 = &v51;
    LOBYTE(v75) = 73;
    std::string::string(&v51, &unk_1030D4E8);
    v50 = (char *)this + 1232;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 74;
    std::string::string(&v43, "CameraConstraint");
    LOBYTE(v75) = 0;
    v31 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 75;
    std::vector<EditorVar>::push_back((char *)this + 424, v31);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D508);
    v69 = &v51;
    LOBYTE(v75) = 76;
    std::string::string(&v51, &unk_1030D524);
    v50 = (char *)this + 1236;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 77;
    std::string::string(&v43, "SpawnTogetherAmount");
    LOBYTE(v75) = 0;
    v32 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 78;
    std::vector<EditorVar>::push_back((char *)this + 424, v32);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D544);
    v69 = &v51;
    LOBYTE(v75) = 79;
    std::string::string(&v51, &unk_1030D564);
    v50 = (char *)this + 1240;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 80;
    std::string::string(&v43, "SortedSystem");
    LOBYTE(v75) = 0;
    v33 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 81;
    std::vector<EditorVar>::push_back((char *)this + 424, v33);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D580);
    v69 = &v51;
    LOBYTE(v75) = 82;
    std::string::string(&v51, &unk_1030D594);
    v50 = (char *)this + 1241;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 83;
    std::string::string(&v43, "FrustumCulling");
    LOBYTE(v75) = 0;
    v34 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 84;
    std::vector<EditorVar>::push_back((char *)this + 424, v34);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D5B0);
    v69 = &v51;
    LOBYTE(v75) = 85;
    std::string::string(&v51, &unk_1030D5C0);
    v50 = (char *)this + 1242;
    LOBYTE(v75) = 86;
    v68 = (const char **)&v43;
    std::string::string(&v43, "IsStaticEffect");
    LOBYTE(v75) = 0;
    v35 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 87;
    std::vector<EditorVar>::push_back((char *)this + 424, v35);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D5DC);
    v69 = &v51;
    LOBYTE(v75) = 88;
    std::string::string(&v51, &unk_1030D5E8);
    v50 = (char *)*((_DWORD *)this + 319);
    v68 = (const char **)&v43;
    LOBYTE(v75) = 89;
    std::string::string(&v43, "GlowTex");
    LOBYTE(v75) = 0;
    v36 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 90;
    std::vector<EditorVar>::push_back((char *)this + 424, v36);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D5FC);
    v69 = &v51;
    LOBYTE(v75) = 91;
    std::string::string(&v51, &unk_1030D610);
    v50 = (char *)this + 1243;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 92;
    std::string::string(&v43, "IsFixPos");
    LOBYTE(v75) = 0;
    v37 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 93;
    std::vector<EditorVar>::push_back((char *)this + 424, v37);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D628);
    v69 = &v51;
    LOBYTE(v75) = 94;
    std::string::string(&v51, &unk_1030D634);
    v50 = (char *)this + 1244;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 95;
    std::string::string(&v43, "ShowOffset");
    LOBYTE(v75) = 0;
    v38 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 96;
    std::vector<EditorVar>::push_back((char *)this + 424, v38);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D64C);
    v69 = &v51;
    LOBYTE(v75) = 97;
    std::string::string(&v51, &unk_1030D660);
    v50 = (char *)this + 1252;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 98;
    std::string::string(&v43, "RotSpeedX");
    LOBYTE(v75) = 0;
    v39 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 99;
    std::vector<EditorVar>::push_back((char *)this + 424, v39);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D678);
    v69 = &v51;
    LOBYTE(v75) = 100;
    std::string::string(&v51, &unk_1030D68C);
    v50 = (char *)this + 1256;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 101;
    std::string::string(&v43, "RotSpeedY");
    LOBYTE(v75) = 0;
    v40 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 102;
    std::vector<EditorVar>::push_back((char *)this + 424, v40);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
    v66 = 0;
    v65 = 1;
    v70 = &v58;
    std::string::string(&v58, &unk_1030D6A4);
    v69 = &v51;
    LOBYTE(v75) = 103;
    std::string::string(&v51, &unk_1030D6B8);
    v50 = (char *)this + 1260;
    v68 = (const char **)&v43;
    LOBYTE(v75) = 104;
    std::string::string(&v43, "RotSpeedZ");
    LOBYTE(v75) = 0;
    v41 = EditorVar::EditorVar(
            v74,
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
            v63,
            v64,
            v65,
            v66);
    LOBYTE(v75) = 105;
    std::vector<EditorVar>::push_back((char *)this + 424, v41);
    LOBYTE(v75) = 0;
    EditorVar::~EditorVar((EditorVar *)v74);
  }
  return this;
}
